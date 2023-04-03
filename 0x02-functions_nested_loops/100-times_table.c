#include "main.h"


/**
 * print_thousand - print out the digit in the thousand spot
 * @sum: Value to scan for thousand spot
 *
 * Return: Void
 */
static void print_thousand(int sum)
{
	if (sum / 1000 == 0)
	{
		_putchar(32);
	}
	else
	{
		_putchar('0' + (sum / 1000));
	}
}


/**
 * print_hundred - print out the digit in the hundred spot
 * @sum: Value to scan for hundred spot
 *
 * Return: Void
 */
static void print_hundred(int sum)
{
	if (sum / 100 == 0)
	{
		_putchar(32);
	}
	else
	{
		_putchar('0' + (sum / 100));
	}
}


/**
 * print_tenth - print out the digit in the tenth spot
 * @sum: Value to scan for tenth spot
 *
 * Return: Void
 */
static void print_tenth(int sum)
{
	if (sum / 10 == 0)
	{
		_putchar(32);
	}
	else
	{
		if ((sum / 10) > 9)
		{
			_putchar('0' + (sum / 10 % 10));
		}
		else
		{
			_putchar('0' + (sum / 10));
		}
	}
}


