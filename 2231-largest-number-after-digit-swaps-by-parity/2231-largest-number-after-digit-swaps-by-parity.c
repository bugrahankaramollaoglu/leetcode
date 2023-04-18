#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/* 1234 -> 3412

	1) ilk önce numı bir arraye atip ters çevir (num = 35218 --> {3, 5, 2, 1, 8})
	2) sonra ilk rakama bak, ondan büyük türdeşi var mı, en büyüğüyle yer değiştir
	3) eğer yoksa sağındaki rakama bak. onun da büyük türdeşi var mı diye sağa doğru tara
	4) varsa yer değiştir
	5) böyle böyle kontrol et

 */

int digit(int nb)
{
	if (nb == 0 || nb == 1)
		return 1;
	int dig = 0;
	while (nb)
	{
		dig++;
		nb /= 10;
	}
	return dig;
}

void print_arr(int *ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("[%d]", ar[i]);
	}
}

int check(int n, int m)
{
	return ((n % 2) == (m % 2));
}

void ft_rev_int_tab(int *ar, int n)
{
	int i;
	int temp;

	i = -1;
	while (++i < n--)
	{
		temp = ar[i];
		ar[i] = ar[n];
		ar[n] = temp;
	}
}

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int *finder(int num)
{
	int dig = digit(num);
	int *ar;
	ar = malloc(sizeof(int) * dig);
	if (!ar)
		return 0;
	for (int i = 0; i < dig; i++)
	{
		ar[i] = num % 10;
		num = num / 10;
	}
	ft_rev_int_tab(ar, dig);
	for (int i = 0; i < dig; i++)
	{
		for (int i2 = i + 1; i2 < dig; i2++)
		{
			if (ar[i] < ar[i2] && check(ar[i], ar[i2]) == 1)
				swap(&ar[i], &ar[i2]);
		}
	}
	return ar;
}

int arr_to_num(int *ar, int dig)
{
	int nb = 0;
	int dig2 = dig - 1;
	for (int i = 0; i < dig; i++)
	{
		nb += ar[i] * (pow(10, dig2));
		dig2--;
	}
	return nb;
}

int largestInteger(int num)
{
	int *arFinal;
	int dig = digit(num);
	arFinal = malloc(sizeof(int) * dig);
	if (!arFinal)
		return 0;
	arFinal = finder(num);
	int numFinal = arr_to_num(arFinal, dig);
	return numFinal;
}