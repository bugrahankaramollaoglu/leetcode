int *runningSum(int *nums, int numsSize, int *returnSize)
{
	int *nums2 = malloc(sizeof(int) * numsSize);
	*returnSize = numsSize;
	int sum = 0;
	for (int i = 0; i < numsSize; i++) {
		for (int i2=i; i2 < i+1; i2++)
			sum += nums[i2];
		nums2[i] = sum;
	}
	return nums2;
}

/* daha kısa yolu
for(int i=1;i<numsSize;i++)
    {
        nums[i]+=nums[i-1];
    }
    return nums;
} */