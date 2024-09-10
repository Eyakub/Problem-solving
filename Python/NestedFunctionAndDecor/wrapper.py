import functools
import datetime
import os
import time


def supress_error(func=None, log_func=None):
    """ automatically silence any error that occur within a function """
    def decorator(func):
        @functools.wraps(func)
        def wrapper(*args, **kwargs):
            try:
                return func(*args, **kwargs)
            except Exception as e:
                if log_func is not None:
                    log_func(str(e))
        return wrapper
    if func is None:
        return decorator
    return decorator(func)


@supress_error()
def process_updated_files(directory, process, since=None):
    """
    Processes any new files in a `directory` using the `process` function.
    If provided, `since` is a date after which files are considered updated.
    The process function passed in must accept a single argument: the absolute
    path to the file that needs to be processed.
    """
    if since is not None:
        # Get a threshold that we can compare to the modification time later
        threshold = time.mktime(since.timetuple()) + \
            since.microsecond / 1000000
    else:
        threshold = 0

    for filename in os.listdir(directory):
        path = os.path.abspath(os.path.join(directory, filename))
        if os.stat(path).st_mtime > threshold:
            process(path)
