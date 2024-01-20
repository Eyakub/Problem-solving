from multiprocessing import Queue

custom_queue = Queue(maxsize=3)
custom_queue.put(1)
custom_queue.put(1)

custom_queue.put(3, block=True, timeout=None)
