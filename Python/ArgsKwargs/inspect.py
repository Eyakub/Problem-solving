import inspect
import itertools


def get_arguments(func, args, kwargs):
    arguments = {}
    spec = inspect.getfullargspec(func)

    if spec.defaults:
        arguments.update(zip(reversed(spec.args), reversed(spec.defaults)))
    if spec.kwonlydefaults:
        arguments.update(spec.kwonlydefaults)
    arguments.update(zip(spec.args, args))
    arguments.update(kwargs)

    print("Spec: ", spec)
    return arguments


def validate_arguments(func, args, kwargs):
    arguments = get_arguments(func, args, kwargs)
    spec = inspect.getfullargspec(func)
    declared_args = spec.args[:]
    declared_args.extend(spec.kwonlyargs)
    errors = {}
    for name in declared_args:
        if name not in arguments:
            errors[name] = "Required argument not provided."
    for name in arguments:
        if name not in declared_args:
            errors[name] = "Unknown argument provided."
    return errors


if __name__ == '__main__':
    validate_arguments(example, (1, ), {'f': 4})
