/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    /*int *result = NULL;
    result=malloc(digitsSize * sizeof(int));

    for(int i=0;i<digitsSize;i++){
        result[i]=digits[i];
    }
    if(result[digitsSize-1]==9){
        digitsSize++;
        result=realloc(result, digitsSize * sizeof(int));
        result[digitsSize-2]=1;
        result[digitsSize-1]=0;
    }
    else{
        result[digitsSize-1]++;
    }
    *returnSize=digitsSize;

    return returnSize;*/
   
    int *result = malloc(digitsSize * sizeof(int));

    for(int i = 0; i < digitsSize; i++) {
        result[i] = digits[i];
    }

    int i = digitsSize - 1;

    while(i >= 0 && result[i] == 9) {
        result[i] = 0;
        i--;
    }

    if(i >= 0) {
        result[i]++;
        *returnSize = digitsSize;
        return result;
    }

    // Every digit was 9
    digitsSize++;

    result = realloc(result, digitsSize * sizeof(int));

    result[0] = 1;

    for(int j = 1; j < digitsSize; j++) {
        result[j] = 0;
    }

    *returnSize = digitsSize;

    return result;

    
}