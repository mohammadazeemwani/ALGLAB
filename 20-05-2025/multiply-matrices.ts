
/**
 * ensure yourself that the point and matrix are of same order like 1xm and mxn   
 * This function will only work for 4x4
 */
function multiplyMatrixAndPoing(pointMatrix: number[], matrix: number[], dim: `${number}x${number}`) {
  const m = Number(dim.split('x')[0])
  const n = Number(dim.split('x')[1])

  if (pointMatrix.length !== m) {
    throw new Error(`Point matrix should be of size 1x${m}`)
  }
  if (!(m<=1 && n<=1) && matrix.length !== m*n) {
    throw new Error(`wrong dimentions of matrix as per the dimentions given`)
  }
  const result: number[] = new Array(m).fill(0);
  
  for(let i=0; i<m*n; i++) {
    result[Math.floor(i/m)]+=matrix[i]*pointMatrix[Math.floor(i/m)]
  }

  console.log(result)
  return result;
}

console.log(
  multiplyMatrixAndPoing(
    [1, 1, 1, 1],
    [1, 2, 3, 4,
     2, 3, 4, 5, 
     3, 4, 4, 4,
     2, 3, 3, 3],
     '4x4'
  )
)