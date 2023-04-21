
int pow_sum(int n)
{
	int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += pow_sum(3, i);
	}
	return sum;
}
