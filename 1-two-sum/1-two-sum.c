int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	int *res = malloc(sizeof(int) * 2);
	if (!res)
		return 0;
	for (int j = 0; j < numsSize; j++)
	{
		for (int k = j + 1; k < numsSize; k++)
		{
			if (nums[j] + nums[k] == target)
			{
				res[0] = j;
				res[1] = k;
				*returnSize = 2;
				return res;
			}
		}
	}
	return 0;
}