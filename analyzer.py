import stringdata
import time

#Uses linear search to find specified element in container. Returns index of element, or -1 if not found.
def linear_search(container: tuple, element: str) -> int:
    for i in range(len(container)):
        if container[i] == element:
            return i
    return -1


#Uses binary search to find specified element in container. Returns index of element, or -1 if not found.
def binary_search(container: tuple, element: str) -> int:
    low = 0
    high = len(container)-1
    while low <= high:
        middle_val = (low+high)//2
        if (container[middle_val] == element):
            return middle_val

        elif (container[middle_val] > element):
            high = middle_val - 1

        elif (container[middle_val] < element):
            low = middle_val + 1
    return -1





def main():
    dataset = stringdata.get_data()
    string = input("Enter a string: ")


    start_time = time.perf_counter()
    index = linear_search(dataset, string)
    end_time = time.perf_counter()
    print("Linear Search Index: " + str(index))
    print("Linear Search Run time: ", (end_time-start_time), " seconds.")

    start_time = time.perf_counter()
    index = binary_search(dataset, string)
    end_time = time.perf_counter()
    print("\nBinary Search Index: " + str(index))
    print("Binary Search Run time: ", (end_time - start_time), " seconds.")

if __name__ == "__main__":
    main()

