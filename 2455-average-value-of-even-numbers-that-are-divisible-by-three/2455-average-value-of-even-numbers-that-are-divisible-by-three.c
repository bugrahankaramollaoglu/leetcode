int averageValue(int* nums, int numsSize) {
    float sum = 0.0;
	int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 6 == 0) {
            sum += nums[i];
			count++;
		}
    }
	if (!count)
		return 0;
    return (sum/count);
}