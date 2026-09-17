
#include <stdio.h>

int main()
{
	int num, reservednum,orig;
	reservednum = 0;
	printf("Введите число");
	scanf_s("%d", &num);
	orig = num;
	while (num != 0) 
	{
		int digit = num % 10;
		reservednum = reservednum * 10 + digit;
		num = num / 10;
		
	}
	if (orig == reservednum)
	{
		printf("Число является палиндромом");
	}
	else 
	{
		printf("Число ne является палиндромом");
	}
	return(0);
}

