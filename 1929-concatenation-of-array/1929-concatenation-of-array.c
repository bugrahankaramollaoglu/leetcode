/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

int *getConcatenation(int *nums, int numsSize, int *returnSize)
{
	int *ans = malloc(sizeof(int) * numsSize * 2);
	if (!ans)
		return 0;
	int i;
	for (i = 0; i < numsSize; i++)
	{
		ans[i] = nums[i];
		ans[i+numsSize] = nums[i];
	}
    *returnSize = numsSize * 2;
	return ans;
}