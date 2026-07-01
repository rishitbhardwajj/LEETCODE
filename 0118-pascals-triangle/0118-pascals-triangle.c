/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int method1(int n, int r){
  if(r>n){
    return 0;
  }
 if (r > n - r){
    r = n - r;
 }
    long long res = 1;
    for(int i = 0; i<r; i++){
        res = res*(n-i);
        res = res/(i+1);
    }
  return res;
}
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize = numRows;
    *returnColumnSizes = (int*)malloc(numRows*sizeof(int));
   int **ans = (int**)malloc(numRows * sizeof(int *));
    for(int i = 0 ; i<numRows;  i++){
        (*returnColumnSizes)[i] = i+1;
       ans[i] = (int*)malloc((i + 1) * sizeof(int));
        for (int j = 0; j <= i; j++){
            ans[i][j] = (int)method1(i,j);
        }

    }
    return ans;
}