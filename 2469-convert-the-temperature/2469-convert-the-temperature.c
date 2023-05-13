/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize){
    double *ans = malloc(sizeof(double) * 2);
    double kelv = celsius + 273.15;
    double faho = celsius * 1.80 + 32.00;
    ans[0] = kelv;
    ans[1] = faho;
    
    *returnSize = 2;
    return ans;
}