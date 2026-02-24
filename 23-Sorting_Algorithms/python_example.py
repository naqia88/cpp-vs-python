#Bubble Sort Function
def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

arr = [5, 2, 9, 1, 5]

print("Original List:", arr)

bubble_sort(arr)
print("Sorted List (Bubble Sort):", arr)

#Built-in Sort
arr = [5, 2, 9, 1, 5]
arr.sort()
print("Sorted List (Built-in sort):", arr)
