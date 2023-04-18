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

/* int numin_soldan_nth_rakami(int num, int n)
{
	int i = 1;
	while (num >= pow(10, n))
	{
		num /= 10;
	}
	return num;
} */

void print_arr(int *ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("[%d]", ar[i]);
	}
}

int check(int n, int m)
{
	if (((n % 2 == 0) && (m % 2 == 0)) || ((n % 2 == 1) && (m % 2 == 1)))
		return 1;
	return 0;
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
	int greatest;
	int i, i2;
	for (i = 0; i < dig; i++)
	{
		for (i2 = i + 1; i2 < dig; i2++)
		{
			greatest = 0;
			if (ar[i] < ar[i2] && check(ar[i], ar[i2]) == 1)
			{ // {2,4,8,1}
				greatest = ar[i2];
				swap(&ar[i], &ar[i2]);
			}
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
