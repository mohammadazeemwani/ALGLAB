function mergeSort(array)
  if length(array) <= 1
    return array

  mid = length(array) / 2
  leftArray = mergeSort(first half of array)
  rightArray = mergeSort(second half of array)

  return merge(leftArray, rightArray)

function merge(leftArray, rightArray)
  resultArray = []
  i = 0
  j = 0

  while i < length(leftArray) and j < length(rightArray)
    if leftArray[i] < rightArray[j]
      append leftArray[i] to resultArray
      i = i + 1
    else
      append rightArray[j] to resultArray
      j = j + 1

  while i < length(leftArray)
    append leftArray[i] to resultArray
    i = i + 1

  while j < length(rightArray)
    append rightArray[j] to resultArray
    j = j + 1

  return resultArray