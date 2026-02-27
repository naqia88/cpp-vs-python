class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insert_at_beginning(head, value):
    new_node = Node(value)
    new_node.next = head
    return new_node

def insert_at_end(head, value):
    new_node = Node(value)

    if not head:
        return new_node

    temp = head
    while temp.next:
        temp = temp.next

    temp.next = new_node
    return head

def display(head):
    while head:
        print(head.data, end=" -> ")
        head = head.next
    print("None")

# Main
head = None

head = insert_at_beginning(head, 10)
head = insert_at_beginning(head, 5)
head = insert_at_end(head, 20)
head = insert_at_end(head, 30)

display(head)
