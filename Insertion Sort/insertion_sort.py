
def insertionSort(arr):
 
    # Traverse through 1 to len(arr)
    for i in range(1, len(arr)):
 
        key = arr[i]
 
        # Move elements of arr[0..i-1], that are
        # greater than key, to one position ahead
        # of their current position
        j = i-1

        while j >=0 and key < arr[j] :
                print("{} >= 0 and {} < {}".format(j, key, arr[j]))
                arr[j+1] = arr[j]
                j -= 1

        print("{} >= 0 and {} < {}".format(j, key, arr[j]))
        arr[j+1] = key

    return arr

array1 = [9, 7, 6, 8, 4, 5]
insertionSort(array1)
print(array1)