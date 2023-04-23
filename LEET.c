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
	return ans;
	*
}

int main()
{
	int ar[] = {1, 2, 1};
	int *ar2 = malloc(sizeof(int) * 6);
	ar2 = getConcatenation(ar, 3, NULL);
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", ar2[i]);
	}
}
