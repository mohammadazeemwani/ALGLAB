def mergeSort(array):
    if len(array) <= 1:
        return array
    
    mid = len(array) // 2
    beg = 0
    end = len(array)
    leftArray = mergeSort(array[0:mid])
    rightArray = mergeSort(array[mid:end])

    return merge(leftArray, rightArray)

def merge(leftArray, rightArray):
    resultArray = []
    i = 0
    j = 0

    while i < len(leftArray) and j < len(rightArray):
        if leftArray[i] < rightArray[j]:
            resultArray.append(leftArray[i])
            i += 1
        else:
            resultArray.append(rightArray[j])
            j += 1

    while i < len(leftArray):
        resultArray.append(leftArray[i])
        i += 1
    
    while j < len(rightArray):
        resultArray.append(rightArray[j])
        j += 1

    return resultArray

def main():
    array = [5, 3, 1, 2, 6]
    print(mergeSort(array))

main()