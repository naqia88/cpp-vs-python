class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insert_at_end(head, value):
    new_node = Node(value)

    if not head:
        return new_node

    temp = head
    while temp.next:
        temp = temp.next

    temp.next = new_node
    return head

#Search function
def search(head, key):
    while head:
        if head.data == key:
            return True
        head = head.next
    return False

#Delete function
def delete_node(head, key):
    if not head:
        return None

    if head.data == key:
        return head.next

    temp = head
    while temp.next and temp.next.data != key:
        temp = temp.next

    if temp.next:
        temp.next = temp.next.next

    return head

def display(head):
    while head:
        print(head.data, end=" -> ")
        head = head.next
    print("None")

#Main
head = None

head = insert_at_end(head, 10)
head = insert_at_end(head, 20)
head = insert_at_end(head, 30)
head = insert_at_end(head, 40)

display(head)
print("Searching 30:", "Found" if search(head, 30) else "Not Found")
head = delete_node(head, 20)

display(head)
