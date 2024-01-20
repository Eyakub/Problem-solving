from collections import deque

custom_queue = deque(maxlen=2)
print(custom_queue)


custom_queue.append(1)
custom_queue.append(2)
# custom_queue.append(3)
# custom_queue.append(4)

print(custom_queue)
# print(custom_queue.popleft())
print(custom_queue.clear())
