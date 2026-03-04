from collections import deque

#stack using list (LIFO)
stack = []

stack.append(10)
stack.append(20)
stack.append(30)

print("Stack Top:", stack[-1])

stack.pop()

print("Stack Top after pop:", stack[-1])

#queue using deque (FIFO)
queue = deque()

queue.append(100)
queue.append(200)
queue.append(300)

print("Queue Front:", queue[0])

queue.popleft()

print("Queue Front after pop:", queue[0])
