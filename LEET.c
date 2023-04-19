#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

bool containsDuplicate(int *nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		for (int i2 = i + 1; i2 < numsSize; i2++)
		{
			if (nums[i] == nums[i2])
				return true;
		}
	}
	return false;
}

int main()
{
	int ar[] = {14, 20, 3, 1, 22};
	int size = sizeof(ar) / sizeof(ar[0]);
	printf("%d\n", containsDuplicate(ar, size));
}
