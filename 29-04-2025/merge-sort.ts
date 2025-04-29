function mergeSort(array: number[]) {
  if (array.length <= 1)
    return array;

  const mid = array.length / 2;
  const leftArray = mergeSort(array.slice(0, mid))
  const rightArray = mergeSort(array.slice(mid, array.length+1))

  return merge(leftArray, rightArray)
}

function merge(leftArray: number[], rightArray: number[]) {
  const resultArray: number[] = [];
  let i=0;
  let j=0;

  while(i<leftArray.length && j<rightArray.length) {
    if (leftArray[i] < rightArray[j]) {
      resultArray.push(leftArray[i])
      i++;
    } else {
      resultArray.push(rightArray[j])
      j++
    }
  }

  while(i < leftArray.length) {
    resultArray.push(leftArray[i])
    i++;
  }
  while(j < rightArray.length) {
    resultArray.push(rightArray[j])
    j++;
  }

  return resultArray
}

const arr = [1, 43, 6, 7, 8, 84, 53, 34, 3, 5 ];

console.log('Initial', arr)
console.log('Sorted ', mergeSort(arr))