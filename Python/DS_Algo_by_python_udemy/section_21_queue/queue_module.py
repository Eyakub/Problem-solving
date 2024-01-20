import queue as q

custom_queue = q.Queue(maxsize=3)
print("QSize: ", custom_queue.qsize())

custom_queue.put(1)
custom_queue.put(2)
custom_queue.put(3)
print("QSize: ", custom_queue.qsize())

print("Empty: ", custom_queue.empty())
print("Full: ", custom_queue.full())

print("Get: ", custom_queue.get())
print("QSize: ", custom_queue.qsize())
