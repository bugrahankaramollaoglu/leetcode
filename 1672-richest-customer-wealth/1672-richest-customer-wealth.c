#include <stdio.h>

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int max = 0;
    int sum = 0;
    for (int i = 0; i < accountsSize; i++) {
        for (int i2 = 0; i2 < *accountsColSize; i2++) {
            sum += accounts[i][i2];
        }
        if (sum > max)
            max = sum;
        sum = 0;
    }
    return max;
}