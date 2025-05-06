function quickSort(arrToSort: number[]): number[] {
  
  // the array is already sorted
  if (arrToSort.length <= 1) {
    return arrToSort;
  }

  // choosing the pivot element
  const pivot = arrToSort[Math.ceil(arrToSort.length / 2)];

  // arrays should be bifurcated on the basis of the element value, not the element index.
  const leftArr: number[] = [];
  const rightArr: number[] = [];

  for (let i = 0; i < arrToSort.length; i++) {
    if (arrToSort[i] === pivot) continue

    if (arrToSort[i] < pivot) leftArr.push(arrToSort[i])
    else rightArr.push(arrToSort[i]);
  }


  return [...quickSort(leftArr), pivot, ...quickSort(rightArr)]
}

const arr = [23, 4, 55, 99, 22, 2, 8]
console.log('🚀 Welcome to quick sorter');
console.log('Unsorted arr > ', arr)
console.log('Sorted arr >', quickSort(arr));

