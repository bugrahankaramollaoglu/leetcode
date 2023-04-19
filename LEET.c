int digit(int nb) {
	if (nb == 0 || nb == 1)
		return 1;
	int dig = 0;
	while (nb) {
		++dig;
		nb /= 10;
	}
	return dig;
}

int	findNumbers(int *nums, int numsSize)
{
	int counter = 0;
	for (int i = 0; i < numsSize; i++) {
		if (digit(nums[i]) % 2 == 0)
			counter++;
	}
	return counter;
}
