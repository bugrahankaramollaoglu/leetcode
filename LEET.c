#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// kuvvet alma fonksiyonu
int ft_pow(int taban, int kuvvet)
{
	int res = 1;
	for (int i = 1; i <= kuvvet; i++)
	{
		res *= taban;
	}
	return res;
}

// n sayisi 3'ün kuvveti mi?
int is_power(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ft_pow(3, i) == n)
			return 1;
	}
	return 0;
}

/* n'den küçük 3'ün en büyük kuvvetli halini döndürür */
int biggest_power_of_3(int n)
{
	int p = 0;
	int power = 1;
	while (power * 3 <= n)
	{ // find the largest power of 3 smaller than n
		power *= 3;
		p++;
	}
	return p; // return the value of the largest power of 3
}

// 1 3 9 27 81 243 729...

bool checkPowersOfThree(int n)
{
	int a = biggest_power_of_3(n);
	return a;
}

bool canSumDifferentPowersOf3(int n)
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

int main()
{
	printf("%d\n", canSumDifferentPowersOf3(21));
}
