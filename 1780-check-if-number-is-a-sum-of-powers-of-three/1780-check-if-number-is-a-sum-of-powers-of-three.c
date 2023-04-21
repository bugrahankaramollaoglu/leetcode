bool checkPowersOfThree(int n)
{
	if (n < 1)
	{
		return false;
	}
	while (n > 0)
	{
		int r = n % 3;
		if (r == 2)
		{
			return false;
		}
		n /= 3;
	}
	return true;
}