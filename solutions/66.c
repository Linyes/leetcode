/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    bool all_nine = true;
    int i = digitsSize - 1;
    int *ret = NULL;
    while (i >= 0) {
        if (digits[i] != 9) {
            digits[i]++;
            *returnSize = digitsSize;
            ret = (int *)malloc(sizeof(int) * digitsSize);
            memcpy(ret, digits, sizeof(int) * digitsSize);
            return ret;
        } else {
            digits[i] = 0;
        }
        
        i--;
    }
    
    *returnSize = digitsSize + 1;
    ret = (int *)malloc(sizeof(int) * (*returnSize));
    memset(ret, 0, sizeof(int) * (*returnSize));
    ret[0] = 1;
    return ret;
}
