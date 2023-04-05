/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

char** fizzBuzz(int n, int* returnSize) {
    char** result = (char**) malloc(sizeof(char*) * n);
    *returnSize = n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            result[i - 1] = (char*) malloc(sizeof(char) * 9);
            strcpy(result[i - 1], "FizzBuzz");
        } else if (i % 3 == 0) {
            result[i - 1] = (char*) malloc(sizeof(char) * 5);
            strcpy(result[i - 1], "Fizz");
        } else if (i % 5 == 0) {
            result[i - 1] = (char*) malloc(sizeof(char) * 5);
            strcpy(result[i - 1], "Buzz");
        } else {
            int num_len = snprintf(NULL, 0, "%d", i);
            result[i - 1] = (char*) malloc(sizeof(char) * (num_len + 1));
            sprintf(result[i - 1], "%d", i);
        }
    }

    return result;
}