#include "ft_/libftprintf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <wchar.h>
#include <locale.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int	fct;
		int	nb;
		int	i;
		int	r;

		fct = atoi(av[1]);
		i = 1;
		nb = atoi(av[2]);

		// [A - Tests without options].
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("") : ft_printf("");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("1") : ft_printf("1");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%%") : ft_printf("%%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%%%%") : ft_printf("%%%%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%%%%%%") : ft_printf("%%%%%%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%c", '1') : ft_printf("%c", '1');
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%c", -207) : ft_printf("%c", -207);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%c", 256 + 48) : ft_printf("%c", 256 + 48);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{
				r = (fct == 1) ? printf("%c%%", '3') : ft_printf("%c%%", '3');
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("0%c", 0) : ft_printf("0%c", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%c", -129) : ft_printf("%c", -129);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%c", 128) : ft_printf("%c", 128);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%c", '\0') : ft_printf("%c", '\0');
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%s", "Hello") : ft_printf("%s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%s%%", "Hello3") : ft_printf("%s%%", "Hello3");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%s", "") : ft_printf("%s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%s", "1") : ft_printf("%s", "1");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%i", 0) : ft_printf("%i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%i", -1) : ft_printf("%i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%i", -42) : ft_printf("%i", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%i", 1) : ft_printf("%i", 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%i", 42) : ft_printf("%i", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%i", INT_MAX) : ft_printf("%i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%i", INT_MAX + 1) : ft_printf("%i", INT_MAX + 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%i", INT_MIN) : ft_printf("%i", INT_MIN);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%i", 1000) : ft_printf("%i", 1000);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%i", -1000) : ft_printf("%i", -1000);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%d", 0) : ft_printf("%d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%d", -1) : ft_printf("%d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%d", -42) : ft_printf("%d", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%d", 1) : ft_printf("%d", 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%d", 42) : ft_printf("%d", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%d", INT_MAX) : ft_printf("%d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%d", INT_MAX + 1) : ft_printf("%d", INT_MAX + 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%d", INT_MIN) : ft_printf("%d", INT_MIN);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%d", 1000) : ft_printf("%d", 1000);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%d", -1000) : ft_printf("%d", -1000);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%u", 0) : ft_printf("%u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%u", -1) : ft_printf("%u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%u", 1) : ft_printf("%u", 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%u", 42) : ft_printf("%u", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%u", UINT_MAX) : ft_printf("%u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%u", UINT_MAX + 1) : ft_printf("%u", UINT_MAX + 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%u", 1000) : ft_printf("%u", 1000);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%x", 0) : ft_printf("%x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%x", -1) : ft_printf("%x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%x", -42) : ft_printf("%x", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%x", 1) : ft_printf("%x", 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%x", 42) : ft_printf("%x", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%x", INT_MAX) : ft_printf("%x", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%x", INT_MAX + 1) : ft_printf("%x", INT_MAX + 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%x", INT_MIN) : ft_printf("%x", INT_MIN);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%x", 1000) : ft_printf("%x", 1000);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%x", -1000) : ft_printf("%x", -1000);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%X", 0) : ft_printf("%X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%X", -1) : ft_printf("%X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%X", -42) : ft_printf("%X", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%X", 1) : ft_printf("%X", 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%X", 42) : ft_printf("%X", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%X", INT_MAX) : ft_printf("%X", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%X", INT_MAX + 1) : ft_printf("%X", INT_MAX + 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%X", INT_MIN) : ft_printf("%X", INT_MIN);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%X", 1000) : ft_printf("%X", 1000);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%X", -1000) : ft_printf("%X", -1000);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%p", (void*)1) : ft_printf("%p", (void*)1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%p", (void*)-1) : ft_printf("%p", (void*)-1); //pb
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%p", (void*)42) : ft_printf("%p", (void*)42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%p", (void*)1000) : ft_printf("%p", (void*)1000);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%p", (void*)ULONG_MAX) : ft_printf("%p", (void*)ULONG_MAX); //pb
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%p", (void*)ULONG_MAX + 1) : ft_printf("%p", (void*)ULONG_MAX + 1);
				printf("\n%d\n", r);
			}
		}

		// [B - Tests with minimum field width].
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*c", -1000, 'a') : ft_printf("%*c", -1000, 'a');
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*s", -1000, "") : ft_printf("%*s", -1000, "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1%") : ft_printf("%1%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2%") : ft_printf("%2%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10%") : ft_printf("%10%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1c", '1') : ft_printf("%1c", '1');
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2c", '1') : ft_printf("%2c", '1');
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10c", '1') : ft_printf("%10c", '1');
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1s", "") : ft_printf("%1s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%5s", "Hello") : ft_printf("%5s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%6s", "Hello") : ft_printf("%6s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1i", 0) : ft_printf("%1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2i", 0) : ft_printf("%2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10i", 0) : ft_printf("%10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1i", -1) : ft_printf("%1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2i", -1) : ft_printf("%2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3i", -1) : ft_printf("%3i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9i", INT_MAX) : ft_printf("%9i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10i", INT_MAX) : ft_printf("%10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11i", INT_MAX) : ft_printf("%11i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1d", 0) : ft_printf("%1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2d", 0) : ft_printf("%2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10d", 0) : ft_printf("%10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1d", -1) : ft_printf("%1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2d", -1) : ft_printf("%2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3d", -1) : ft_printf("%3d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9d", INT_MAX) : ft_printf("%9d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10d", INT_MAX) : ft_printf("%10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11d", INT_MAX) : ft_printf("%11d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1u", 0) : ft_printf("%1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2u", 0) : ft_printf("%2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10u", 0) : ft_printf("%10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1u", -1) : ft_printf("%1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2u", -1) : ft_printf("%2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3u", -1) : ft_printf("%3u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9u", UINT_MAX) : ft_printf("%9u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10u", UINT_MAX) : ft_printf("%10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11u", UINT_MAX) : ft_printf("%11u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1x", 0) : ft_printf("%1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2x", 0) : ft_printf("%2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10x", 0) : ft_printf("%10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1x", -1) : ft_printf("%1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2x", -1) : ft_printf("%2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3x", -1) : ft_printf("%3x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9x", UINT_MAX) : ft_printf("%9x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10x", UINT_MAX) : ft_printf("%10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11x", UINT_MAX) : ft_printf("%11x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1X", 0) : ft_printf("%1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2X", 0) : ft_printf("%2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10X", 0) : ft_printf("%10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1X", -1) : ft_printf("%1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2X", -1) : ft_printf("%2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3X", -1) : ft_printf("%3X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9X", UINT_MAX) : ft_printf("%9X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10X", UINT_MAX) : ft_printf("%10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11X", UINT_MAX) : ft_printf("%11X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1p", (void*)42) : ft_printf("%1p", (void*)42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%5p", (void*)42) : ft_printf("%5p", (void*)42);
				printf("\n%d\n", r);
			}
		}

		// [C - Tests with flag -].
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1%") : ft_printf("%-1%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2%") : ft_printf("%-2%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10%") : ft_printf("%-10%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1c", '1') : ft_printf("%-1c", '1');
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2c", '1') : ft_printf("%-2c", '1');
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10c", '1') : ft_printf("%-10c", '1');
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1s", "") : ft_printf("%-1s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-5s", "Hello") : ft_printf("%-5s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-6s", "Hello") : ft_printf("%-6s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1i", 0) : ft_printf("%-1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2i", 0) : ft_printf("%-2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10i", 0) : ft_printf("%-10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1i", -1) : ft_printf("%-1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2i", -1) : ft_printf("%-2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3i", -1) : ft_printf("%-3i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9i", INT_MAX) : ft_printf("%-9i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10i", INT_MAX) : ft_printf("%-10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11i", INT_MAX) : ft_printf("%-11i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1d", 0) : ft_printf("%-1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2d", 0) : ft_printf("%-2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10d", 0) : ft_printf("%-10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1d", -1) : ft_printf("%-1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2d", -1) : ft_printf("%-2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3d", -1) : ft_printf("%-3d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9d", INT_MAX) : ft_printf("%-9d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10d", INT_MAX) : ft_printf("%-10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11d", INT_MAX) : ft_printf("%-11d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1u", 0) : ft_printf("%-1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2u", 0) : ft_printf("%-2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10u", 0) : ft_printf("%-10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1u", -1) : ft_printf("%-1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2u", -1) : ft_printf("%-2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3u", -1) : ft_printf("%-3u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9u", UINT_MAX) : ft_printf("%-9u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10u", UINT_MAX) : ft_printf("%-10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11u", UINT_MAX) : ft_printf("%-11u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1x", 0) : ft_printf("%-1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2x", 0) : ft_printf("%-2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10x", 0) : ft_printf("%-10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1x", -1) : ft_printf("%-1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2x", -1) : ft_printf("%-2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3x", -1) : ft_printf("%-3x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9x", UINT_MAX) : ft_printf("%-9x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10x", UINT_MAX) : ft_printf("%-10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11x", UINT_MAX) : ft_printf("%-11x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1X", 0) : ft_printf("%-1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2X", 0) : ft_printf("%-2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10X", 0) : ft_printf("%-10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1X", -1) : ft_printf("%-1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2X", -1) : ft_printf("%-2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3X", -1) : ft_printf("%-3X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9X", UINT_MAX) : ft_printf("%-9X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10X", UINT_MAX) : ft_printf("%-10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11X", UINT_MAX) : ft_printf("%-11X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1p", (void*)42) : ft_printf("%-1p", (void*)42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-5p", (void*)42) : ft_printf("%-5p", (void*)42);
				printf("\n%d\n", r);
			}
		}

		// [D - Tests with flag 0].
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01i", 0) : ft_printf("%01i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02i", 0) : ft_printf("%02i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010i", 0) : ft_printf("%010i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01i", -1) : ft_printf("%01i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02i", -1) : ft_printf("%02i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03i", -1) : ft_printf("%03i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09i", INT_MAX) : ft_printf("%09i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010i", INT_MAX) : ft_printf("%010i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011i", INT_MAX) : ft_printf("%011i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01d", 0) : ft_printf("%01d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02d", 0) : ft_printf("%02d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010d", 0) : ft_printf("%010d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01d", -1) : ft_printf("%01d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02d", -1) : ft_printf("%02d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03d", -1) : ft_printf("%03d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09d", INT_MAX) : ft_printf("%09d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010d", INT_MAX) : ft_printf("%010d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011d", INT_MAX) : ft_printf("%011d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01u", 0) : ft_printf("%01u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02u", 0) : ft_printf("%02u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010u", 0) : ft_printf("%010u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01u", -1) : ft_printf("%01u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02u", -1) : ft_printf("%02u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03u", -1) : ft_printf("%03u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09u", UINT_MAX) : ft_printf("%09u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010u", UINT_MAX) : ft_printf("%010u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011u", UINT_MAX) : ft_printf("%011u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01x", 0) : ft_printf("%01x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02x", 0) : ft_printf("%02x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010x", 0) : ft_printf("%010x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01x", -1) : ft_printf("%01x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02x", -1) : ft_printf("%02x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03x", -1) : ft_printf("%03x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09x", UINT_MAX) : ft_printf("%09x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010x", UINT_MAX) : ft_printf("%010x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011x", UINT_MAX) : ft_printf("%011x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01X", 0) : ft_printf("%01X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02X", 0) : ft_printf("%02X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010X", 0) : ft_printf("%010X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01X", -1) : ft_printf("%01X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02X", -1) : ft_printf("%02X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03X", -1) : ft_printf("%03X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09X", UINT_MAX) : ft_printf("%09X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010X", UINT_MAX) : ft_printf("%010X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011X", UINT_MAX) : ft_printf("%011X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%0-10d", 42) : ft_printf("%0-10d", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-010d", 42) : ft_printf("%-010d", 42);
				printf("\n%d\n", r);
			}
		}

		// [E - Tests with .].
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0%") : ft_printf("%.0%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0%") : ft_printf("%.0%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1%") : ft_printf("%.1%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2%") : ft_printf("%.2%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.10%") : ft_printf("%.10%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0s", "") : ft_printf("%.0s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1s", "") : ft_printf("%.1s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3s", "") : ft_printf("%.3s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0s", "Hello") : ft_printf("%.0s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1s", "Hello") : ft_printf("%.1s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2s", "Hello") : ft_printf("%.2s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.5s", "Hello") : ft_printf("%.5s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.6s", "Hello") : ft_printf("%.6s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.7s", "Hello") : ft_printf("%.7s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.s", 42) : ft_printf("%.s", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0d", 0) : ft_printf("%.0d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1d", 0) : ft_printf("%.1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2d", 0) : ft_printf("%.2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0d", 5) : ft_printf("%.0d", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1d", 5) : ft_printf("%.1d", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2d", 5) : ft_printf("%.2d", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0d", 42) : ft_printf("%.0d", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1d", 42) : ft_printf("%.1d", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2d", 42) : ft_printf("%.2d", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3d", 42) : ft_printf("%.3d", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.10d", 42) : ft_printf("%.10d", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.6d", 100) : ft_printf("%.6d", 100);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0d", -1) : ft_printf("%.0d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1d", -1) : ft_printf("%.1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2d", -1) : ft_printf("%.2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3d", -1) : ft_printf("%.3d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0d", -42) : ft_printf("%.0d", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1d", -42) : ft_printf("%.1d", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3d", -42) : ft_printf("%.3d", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.4d", -42) : ft_printf("%.4d", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20d", INT_MAX) : ft_printf("%.20d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20d", INT_MAX + 1) : ft_printf("%.20d", INT_MAX + 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20d", INT_MIN) : ft_printf("%.20d", INT_MIN);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20d", INT_MIN - 1) : ft_printf("%.20d", INT_MIN - 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0i", 0) : ft_printf("%.0i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1i", 0) : ft_printf("%.1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2i", 0) : ft_printf("%.2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0i", 5) : ft_printf("%.0i", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1i", 5) : ft_printf("%.1i", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2i", 5) : ft_printf("%.2i", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0i", 42) : ft_printf("%.0i", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1i", 42) : ft_printf("%.1i", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2i", 42) : ft_printf("%.2i", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3i", 42) : ft_printf("%.3i", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.10i", 42) : ft_printf("%.10i", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.6i", 100) : ft_printf("%.6i", 100);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0i", -1) : ft_printf("%.0i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1i", -1) : ft_printf("%.1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2i", -1) : ft_printf("%.2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3i", -1) : ft_printf("%.3i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0i", -42) : ft_printf("%.0i", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1i", -42) : ft_printf("%.1i", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3i", -42) : ft_printf("%.3i", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.4i", -42) : ft_printf("%.4i", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20i", INT_MAX) : ft_printf("%.20i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20i", INT_MAX + 1) : ft_printf("%.20i", INT_MAX + 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20i", INT_MIN) : ft_printf("%.20i", INT_MIN);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20i", INT_MIN - 1) : ft_printf("%.20i", INT_MIN - 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0u", 0) : ft_printf("%.0u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1u", 0) : ft_printf("%.1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2u", 0) : ft_printf("%.2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0u", 5) : ft_printf("%.0u", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1u", 5) : ft_printf("%.1u", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2u", 5) : ft_printf("%.2u", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0u", 42) : ft_printf("%.0u", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1u", 42) : ft_printf("%.1u", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2u", 42) : ft_printf("%.2u", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3u", 42) : ft_printf("%.3u", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.10u", 42) : ft_printf("%.10u", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.6u", 100) : ft_printf("%.6u", 100);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0u", -1) : ft_printf("%.0u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1u", -1) : ft_printf("%.1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2u", -1) : ft_printf("%.2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3u", -1) : ft_printf("%.3u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0u", -42) : ft_printf("%.0u", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1u", -42) : ft_printf("%.1u", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3u", -42) : ft_printf("%.3u", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.4u", -42) : ft_printf("%.4u", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20u", UINT_MAX) : ft_printf("%.20u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20u", UINT_MAX + 1) : ft_printf("%.20u", UINT_MAX + 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0x", 0) : ft_printf("%.0x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1x", 0) : ft_printf("%.1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2x", 0) : ft_printf("%.2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0x", 5) : ft_printf("%.0x", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1x", 5) : ft_printf("%.1x", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2x", 5) : ft_printf("%.2x", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0x", 42) : ft_printf("%.0x", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1x", 42) : ft_printf("%.1x", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2x", 42) : ft_printf("%.2x", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3x", 42) : ft_printf("%.3x", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.10x", 42) : ft_printf("%.10x", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.6x", 100) : ft_printf("%.6x", 100);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0x", -1) : ft_printf("%.0x", -1);
				printf("\n%d\n", r); //pb
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1x", -1) : ft_printf("%.1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2x", -1) : ft_printf("%.2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3x", -1) : ft_printf("%.3x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0x", -42) : ft_printf("%.0x", -42); //pb
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1x", -42) : ft_printf("%.1x", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3x", -42) : ft_printf("%.3x", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.4x", -42) : ft_printf("%.4x", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20x", UINT_MAX) : ft_printf("%.20x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20x", UINT_MAX + 1) : ft_printf("%.20x", UINT_MAX + 1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0X", 0) : ft_printf("%.0X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1X", 0) : ft_printf("%.1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2X", 0) : ft_printf("%.2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0X", 5) : ft_printf("%.0X", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1X", 5) : ft_printf("%.1X", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2X", 5) : ft_printf("%.2X", 5);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0X", 42) : ft_printf("%.0X", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1X", 42) : ft_printf("%.1X", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2X", 42) : ft_printf("%.2X", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3X", 42) : ft_printf("%.3X", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.10X", 42) : ft_printf("%.10X", 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.6X", 100) : ft_printf("%.6X", 100);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0X", -1) : ft_printf("%.0X", -1); //pb
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1X", -1) : ft_printf("%.1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.2X", -1) : ft_printf("%.2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3X", -1) : ft_printf("%.3X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.0X", -42) : ft_printf("%.0X", -42); //pb
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.1X", -42) : ft_printf("%.1X", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.3X", -42) : ft_printf("%.3X", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.4X", -42) : ft_printf("%.4X", -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20X", UINT_MAX) : ft_printf("%.20X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.20X", UINT_MAX + 1) : ft_printf("%.20X", UINT_MAX + 1);
				printf("\n%d\n", r);
			}
		}

		// [F - Tests with minimum field width and .].
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0%") : ft_printf("%1.0%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1%") : ft_printf("%1.1%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2%") : ft_printf("%1.2%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10%") : ft_printf("%1.10%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0%") : ft_printf("%2.0%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1%") : ft_printf("%2.1%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2%") : ft_printf("%2.2%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10%") : ft_printf("%2.10%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0%") : ft_printf("%10.0%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1%") : ft_printf("%10.1%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2%") : ft_printf("%10.2%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10%") : ft_printf("%10.10%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0s", "") : ft_printf("%1.0s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1s", "") : ft_printf("%1.1s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2s", "") : ft_printf("%1.2s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10s", "") : ft_printf("%1.10s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%5.0s", "Hello") : ft_printf("%5.0s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%5.1s", "Hello") : ft_printf("%5.1s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%5.2s", "Hello") : ft_printf("%5.2s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%5.10s", "Hello") : ft_printf("%5.10s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%6.0s", "Hello") : ft_printf("%6.0s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%6.1s", "Hello") : ft_printf("%6.1s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%6.2s", "Hello") : ft_printf("%6.2s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%6.10s", "Hello") : ft_printf("%6.10s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0i", 0) : ft_printf("%1.0i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1i", 0) : ft_printf("%1.1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2i", 0) : ft_printf("%1.2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10i", 0) : ft_printf("%1.10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0i", 0) : ft_printf("%2.0i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1i", 0) : ft_printf("%2.1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2i", 0) : ft_printf("%2.2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10i", 0) : ft_printf("%2.10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0i", 0) : ft_printf("%10.0i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1i", 0) : ft_printf("%10.1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2i", 0) : ft_printf("%10.2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10i", 0) : ft_printf("%10.10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0i", -1) : ft_printf("%1.0i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1i", -1) : ft_printf("%1.1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2i", -1) : ft_printf("%1.2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10i", -1) : ft_printf("%1.10i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0i", -1) : ft_printf("%2.0i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1i", -1) : ft_printf("%2.1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2i", -1) : ft_printf("%2.2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10i", -1) : ft_printf("%2.10i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.0i", -1) : ft_printf("%3.0i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.1i", -1) : ft_printf("%3.1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.2i", -1) : ft_printf("%3.2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.10i", -1) : ft_printf("%3.10i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.0i", INT_MAX) : ft_printf("%9.0i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.1i", INT_MAX) : ft_printf("%9.1i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.2i", INT_MAX) : ft_printf("%9.2i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.10i", INT_MAX) : ft_printf("%9.10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0i", INT_MAX) : ft_printf("%10.0i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1i", INT_MAX) : ft_printf("%10.1i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2i", INT_MAX) : ft_printf("%10.2i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10i", INT_MAX) : ft_printf("%10.10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.0i", INT_MAX) : ft_printf("%11.0i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.1i", INT_MAX) : ft_printf("%11.1i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.2i", INT_MAX) : ft_printf("%11.2i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.10i", INT_MAX) : ft_printf("%11.10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0d", 0) : ft_printf("%1.0d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1d", 0) : ft_printf("%1.1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2d", 0) : ft_printf("%1.2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10d", 0) : ft_printf("%1.10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0d", 0) : ft_printf("%2.0d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1d", 0) : ft_printf("%2.1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2d", 0) : ft_printf("%2.2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10d", 0) : ft_printf("%2.10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0d", 0) : ft_printf("%10.0d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1d", 0) : ft_printf("%10.1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2d", 0) : ft_printf("%10.2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10d", 0) : ft_printf("%10.10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0d", -1) : ft_printf("%1.0d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1d", -1) : ft_printf("%1.1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2d", -1) : ft_printf("%1.2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10d", -1) : ft_printf("%1.10d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0d", -1) : ft_printf("%2.0d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1d", -1) : ft_printf("%2.1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2d", -1) : ft_printf("%2.2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10d", -1) : ft_printf("%2.10d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.0d", -1) : ft_printf("%3.0d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.1d", -1) : ft_printf("%3.1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.2d", -1) : ft_printf("%3.2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.10d", -1) : ft_printf("%3.10d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.0d", INT_MAX) : ft_printf("%9.0d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.1d", INT_MAX) : ft_printf("%9.1d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.2d", INT_MAX) : ft_printf("%9.2d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.10d", INT_MAX) : ft_printf("%9.10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0d", INT_MAX) : ft_printf("%10.0d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1d", INT_MAX) : ft_printf("%10.1d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2d", INT_MAX) : ft_printf("%10.2d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10d", INT_MAX) : ft_printf("%10.10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.0d", INT_MAX) : ft_printf("%11.0d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.1d", INT_MAX) : ft_printf("%11.1d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.2d", INT_MAX) : ft_printf("%11.2d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.10d", INT_MAX) : ft_printf("%11.10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0u", 0) : ft_printf("%1.0u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1u", 0) : ft_printf("%1.1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2u", 0) : ft_printf("%1.2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10u", 0) : ft_printf("%1.10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0u", 0) : ft_printf("%2.0u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1u", 0) : ft_printf("%2.1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2u", 0) : ft_printf("%2.2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10u", 0) : ft_printf("%2.10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0u", 0) : ft_printf("%10.0u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1u", 0) : ft_printf("%10.1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2u", 0) : ft_printf("%10.2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10u", 0) : ft_printf("%10.10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0u", -1) : ft_printf("%1.0u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1u", -1) : ft_printf("%1.1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2u", -1) : ft_printf("%1.2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10u", -1) : ft_printf("%1.10u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0u", -1) : ft_printf("%2.0u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1u", -1) : ft_printf("%2.1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2u", -1) : ft_printf("%2.2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10u", -1) : ft_printf("%2.10u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.0u", -1) : ft_printf("%3.0u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.1u", -1) : ft_printf("%3.1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.2u", -1) : ft_printf("%3.2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.10u", -1) : ft_printf("%3.10u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.0u", UINT_MAX) : ft_printf("%9.0u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.1u", UINT_MAX) : ft_printf("%9.1u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.2u", UINT_MAX) : ft_printf("%9.2u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.10u", UINT_MAX) : ft_printf("%9.10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0u", UINT_MAX) : ft_printf("%10.0u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1u", UINT_MAX) : ft_printf("%10.1u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2u", UINT_MAX) : ft_printf("%10.2u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10u", UINT_MAX) : ft_printf("%10.10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.0u", UINT_MAX) : ft_printf("%11.0u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.1u", UINT_MAX) : ft_printf("%11.1u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.2u", UINT_MAX) : ft_printf("%11.2u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.10u", UINT_MAX) : ft_printf("%11.10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0x", 0) : ft_printf("%1.0x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1x", 0) : ft_printf("%1.1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2x", 0) : ft_printf("%1.2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10x", 0) : ft_printf("%1.10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0x", 0) : ft_printf("%2.0x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1x", 0) : ft_printf("%2.1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2x", 0) : ft_printf("%2.2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10x", 0) : ft_printf("%2.10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0x", 0) : ft_printf("%10.0x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1x", 0) : ft_printf("%10.1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2x", 0) : ft_printf("%10.2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10x", 0) : ft_printf("%10.10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0x", -1) : ft_printf("%1.0x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1x", -1) : ft_printf("%1.1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2x", -1) : ft_printf("%1.2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10x", -1) : ft_printf("%1.10x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0x", -1) : ft_printf("%2.0x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1x", -1) : ft_printf("%2.1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2x", -1) : ft_printf("%2.2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10x", -1) : ft_printf("%2.10x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.0x", -1) : ft_printf("%3.0x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.1x", -1) : ft_printf("%3.1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.2x", -1) : ft_printf("%3.2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.10x", -1) : ft_printf("%3.10x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.0x", UINT_MAX) : ft_printf("%9.0x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.1x", UINT_MAX) : ft_printf("%9.1x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.2x", UINT_MAX) : ft_printf("%9.2x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.10x", UINT_MAX) : ft_printf("%9.10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0x", UINT_MAX) : ft_printf("%10.0x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1x", UINT_MAX) : ft_printf("%10.1x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2x", UINT_MAX) : ft_printf("%10.2x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10x", UINT_MAX) : ft_printf("%10.10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.0x", UINT_MAX) : ft_printf("%11.0x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.1x", UINT_MAX) : ft_printf("%11.1x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.2x", UINT_MAX) : ft_printf("%11.2x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.10x", UINT_MAX) : ft_printf("%11.10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0X", 0) : ft_printf("%1.0X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1X", 0) : ft_printf("%1.1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2X", 0) : ft_printf("%1.2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10X", 0) : ft_printf("%1.10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0X", 0) : ft_printf("%2.0X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1X", 0) : ft_printf("%2.1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2X", 0) : ft_printf("%2.2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10X", 0) : ft_printf("%2.10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0X", 0) : ft_printf("%10.0X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1X", 0) : ft_printf("%10.1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2X", 0) : ft_printf("%10.2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10X", 0) : ft_printf("%10.10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.0X", -1) : ft_printf("%1.0X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.1X", -1) : ft_printf("%1.1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.2X", -1) : ft_printf("%1.2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%1.10X", -1) : ft_printf("%1.10X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.0X", -1) : ft_printf("%2.0X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.1X", -1) : ft_printf("%2.1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.2X", -1) : ft_printf("%2.2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%2.10X", -1) : ft_printf("%2.10X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.0X", -1) : ft_printf("%3.0X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.1X", -1) : ft_printf("%3.1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.2X", -1) : ft_printf("%3.2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%3.10X", -1) : ft_printf("%3.10X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.0X", UINT_MAX) : ft_printf("%9.0X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.1X", UINT_MAX) : ft_printf("%9.1X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.2X", UINT_MAX) : ft_printf("%9.2X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%9.10X", UINT_MAX) : ft_printf("%9.10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.0X", UINT_MAX) : ft_printf("%10.0X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.1X", UINT_MAX) : ft_printf("%10.1X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.2X", UINT_MAX) : ft_printf("%10.2X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.10X", UINT_MAX) : ft_printf("%10.10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.0X", UINT_MAX) : ft_printf("%11.0X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.1X", UINT_MAX) : ft_printf("%11.1X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.2X", UINT_MAX) : ft_printf("%11.2X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%11.10X", UINT_MAX) : ft_printf("%11.10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}

		// [G - Tests with minimum field width, flag - and .].

		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0%") : ft_printf("%-1.0%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1%") : ft_printf("%-1.1%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2%") : ft_printf("%-1.2%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10%") : ft_printf("%-1.10%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0%") : ft_printf("%-2.0%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1%") : ft_printf("%-2.1%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2%") : ft_printf("%-2.2%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10%") : ft_printf("%-2.10%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0%") : ft_printf("%-10.0%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1%") : ft_printf("%-10.1%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2%") : ft_printf("%-10.2%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10%") : ft_printf("%-10.10%");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0s", "") : ft_printf("%-1.0s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1s", "") : ft_printf("%-1.1s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2s", "") : ft_printf("%-1.2s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10s", "") : ft_printf("%-1.10s", "");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-5.0s", "Hello") : ft_printf("%-5.0s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-5.1s", "Hello") : ft_printf("%-5.1s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-5.2s", "Hello") : ft_printf("%-5.2s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-5.10s", "Hello") : ft_printf("%-5.10s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-6.0s", "Hello") : ft_printf("%-6.0s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-6.1s", "Hello") : ft_printf("%-6.1s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-6.2s", "Hello") : ft_printf("%-6.2s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-6.10s", "Hello") : ft_printf("%-6.10s", "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0i", 0) : ft_printf("%-1.0i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1i", 0) : ft_printf("%-1.1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2i", 0) : ft_printf("%-1.2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10i", 0) : ft_printf("%-1.10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0i", 0) : ft_printf("%-2.0i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1i", 0) : ft_printf("%-2.1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2i", 0) : ft_printf("%-2.2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10i", 0) : ft_printf("%-2.10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0i", 0) : ft_printf("%-10.0i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1i", 0) : ft_printf("%-10.1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2i", 0) : ft_printf("%-10.2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10i", 0) : ft_printf("%-10.10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0i", -1) : ft_printf("%-1.0i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1i", -1) : ft_printf("%-1.1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2i", -1) : ft_printf("%-1.2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10i", -1) : ft_printf("%-1.10i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0i", -1) : ft_printf("%-2.0i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1i", -1) : ft_printf("%-2.1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2i", -1) : ft_printf("%-2.2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10i", -1) : ft_printf("%-2.10i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.0i", -1) : ft_printf("%-3.0i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.1i", -1) : ft_printf("%-3.1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.2i", -1) : ft_printf("%-3.2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.10i", -1) : ft_printf("%-3.10i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.0i", INT_MAX) : ft_printf("%-9.0i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.1i", INT_MAX) : ft_printf("%-9.1i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.2i", INT_MAX) : ft_printf("%-9.2i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.10i", INT_MAX) : ft_printf("%-9.10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0i", INT_MAX) : ft_printf("%-10.0i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1i", INT_MAX) : ft_printf("%-10.1i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2i", INT_MAX) : ft_printf("%-10.2i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10i", INT_MAX) : ft_printf("%-10.10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.0i", INT_MAX) : ft_printf("%-11.0i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.1i", INT_MAX) : ft_printf("%-11.1i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.2i", INT_MAX) : ft_printf("%-11.2i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.10i", INT_MAX) : ft_printf("%-11.10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0d", 0) : ft_printf("%-1.0d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1d", 0) : ft_printf("%-1.1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2d", 0) : ft_printf("%-1.2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10d", 0) : ft_printf("%-1.10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0d", 0) : ft_printf("%-2.0d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1d", 0) : ft_printf("%-2.1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2d", 0) : ft_printf("%-2.2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10d", 0) : ft_printf("%-2.10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0d", 0) : ft_printf("%-10.0d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1d", 0) : ft_printf("%-10.1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2d", 0) : ft_printf("%-10.2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10d", 0) : ft_printf("%-10.10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0d", -1) : ft_printf("%-1.0d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1d", -1) : ft_printf("%-1.1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2d", -1) : ft_printf("%-1.2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10d", -1) : ft_printf("%-1.10d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0d", -1) : ft_printf("%-2.0d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1d", -1) : ft_printf("%-2.1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2d", -1) : ft_printf("%-2.2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10d", -1) : ft_printf("%-2.10d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.0d", -1) : ft_printf("%-3.0d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.1d", -1) : ft_printf("%-3.1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.2d", -1) : ft_printf("%-3.2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.10d", -1) : ft_printf("%-3.10d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.0d", INT_MAX) : ft_printf("%-9.0d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.1d", INT_MAX) : ft_printf("%-9.1d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.2d", INT_MAX) : ft_printf("%-9.2d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.10d", INT_MAX) : ft_printf("%-9.10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0d", INT_MAX) : ft_printf("%-10.0d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1d", INT_MAX) : ft_printf("%-10.1d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2d", INT_MAX) : ft_printf("%-10.2d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10d", INT_MAX) : ft_printf("%-10.10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.0d", INT_MAX) : ft_printf("%-11.0d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.1d", INT_MAX) : ft_printf("%-11.1d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.2d", INT_MAX) : ft_printf("%-11.2d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.10d", INT_MAX) : ft_printf("%-11.10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0u", 0) : ft_printf("%-1.0u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1u", 0) : ft_printf("%-1.1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2u", 0) : ft_printf("%-1.2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10u", 0) : ft_printf("%-1.10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0u", 0) : ft_printf("%-2.0u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1u", 0) : ft_printf("%-2.1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2u", 0) : ft_printf("%-2.2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10u", 0) : ft_printf("%-2.10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0u", 0) : ft_printf("%-10.0u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1u", 0) : ft_printf("%-10.1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2u", 0) : ft_printf("%-10.2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10u", 0) : ft_printf("%-10.10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0u", -1) : ft_printf("%-1.0u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1u", -1) : ft_printf("%-1.1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2u", -1) : ft_printf("%-1.2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10u", -1) : ft_printf("%-1.10u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0u", -1) : ft_printf("%-2.0u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1u", -1) : ft_printf("%-2.1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2u", -1) : ft_printf("%-2.2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10u", -1) : ft_printf("%-2.10u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.0u", -1) : ft_printf("%-3.0u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.1u", -1) : ft_printf("%-3.1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.2u", -1) : ft_printf("%-3.2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.10u", -1) : ft_printf("%-3.10u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.0u", UINT_MAX) : ft_printf("%-9.0u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.1u", UINT_MAX) : ft_printf("%-9.1u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.2u", UINT_MAX) : ft_printf("%-9.2u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.10u", UINT_MAX) : ft_printf("%-9.10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0u", UINT_MAX) : ft_printf("%-10.0u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1u", UINT_MAX) : ft_printf("%-10.1u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2u", UINT_MAX) : ft_printf("%-10.2u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10u", UINT_MAX) : ft_printf("%-10.10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.0u", UINT_MAX) : ft_printf("%-11.0u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.1u", UINT_MAX) : ft_printf("%-11.1u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.2u", UINT_MAX) : ft_printf("%-11.2u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.10u", UINT_MAX) : ft_printf("%-11.10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0x", 0) : ft_printf("%-1.0x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1x", 0) : ft_printf("%-1.1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2x", 0) : ft_printf("%-1.2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10x", 0) : ft_printf("%-1.10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0x", 0) : ft_printf("%-2.0x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1x", 0) : ft_printf("%-2.1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2x", 0) : ft_printf("%-2.2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10x", 0) : ft_printf("%-2.10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0x", 0) : ft_printf("%-10.0x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1x", 0) : ft_printf("%-10.1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2x", 0) : ft_printf("%-10.2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10x", 0) : ft_printf("%-10.10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0x", -1) : ft_printf("%-1.0x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1x", -1) : ft_printf("%-1.1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2x", -1) : ft_printf("%-1.2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10x", -1) : ft_printf("%-1.10x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0x", -1) : ft_printf("%-2.0x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1x", -1) : ft_printf("%-2.1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2x", -1) : ft_printf("%-2.2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10x", -1) : ft_printf("%-2.10x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.0x", -1) : ft_printf("%-3.0x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.1x", -1) : ft_printf("%-3.1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.2x", -1) : ft_printf("%-3.2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.10x", -1) : ft_printf("%-3.10x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.0x", UINT_MAX) : ft_printf("%-9.0x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.1x", UINT_MAX) : ft_printf("%-9.1x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.2x", UINT_MAX) : ft_printf("%-9.2x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.10x", UINT_MAX) : ft_printf("%-9.10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0x", UINT_MAX) : ft_printf("%-10.0x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1x", UINT_MAX) : ft_printf("%-10.1x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2x", UINT_MAX) : ft_printf("%-10.2x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10x", UINT_MAX) : ft_printf("%-10.10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.0x", UINT_MAX) : ft_printf("%-11.0x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.1x", UINT_MAX) : ft_printf("%-11.1x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.2x", UINT_MAX) : ft_printf("%-11.2x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.10x", UINT_MAX) : ft_printf("%-11.10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0X", 0) : ft_printf("%-1.0X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1X", 0) : ft_printf("%-1.1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2X", 0) : ft_printf("%-1.2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10X", 0) : ft_printf("%-1.10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0X", 0) : ft_printf("%-2.0X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1X", 0) : ft_printf("%-2.1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2X", 0) : ft_printf("%-2.2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10X", 0) : ft_printf("%-2.10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0X", 0) : ft_printf("%-10.0X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1X", 0) : ft_printf("%-10.1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2X", 0) : ft_printf("%-10.2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10X", 0) : ft_printf("%-10.10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.0X", -1) : ft_printf("%-1.0X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.1X", -1) : ft_printf("%-1.1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.2X", -1) : ft_printf("%-1.2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-1.10X", -1) : ft_printf("%-1.10X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.0X", -1) : ft_printf("%-2.0X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.1X", -1) : ft_printf("%-2.1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.2X", -1) : ft_printf("%-2.2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-2.10X", -1) : ft_printf("%-2.10X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.0X", -1) : ft_printf("%-3.0X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.1X", -1) : ft_printf("%-3.1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.2X", -1) : ft_printf("%-3.2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-3.10X", -1) : ft_printf("%-3.10X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.0X", UINT_MAX) : ft_printf("%-9.0X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.1X", UINT_MAX) : ft_printf("%-9.1X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.2X", UINT_MAX) : ft_printf("%-9.2X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-9.10X", UINT_MAX) : ft_printf("%-9.10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.0X", UINT_MAX) : ft_printf("%-10.0X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.1X", UINT_MAX) : ft_printf("%-10.1X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.2X", UINT_MAX) : ft_printf("%-10.2X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-10.10X", UINT_MAX) : ft_printf("%-10.10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.0X", UINT_MAX) : ft_printf("%-11.0X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.1X", UINT_MAX) : ft_printf("%-11.1X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.2X", UINT_MAX) : ft_printf("%-11.2X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-11.10X", UINT_MAX) : ft_printf("%-11.10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}

		// [H - Tests with minimum field width, flag 0 and .].
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.0i", 0) : ft_printf("%01.0i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.1i", 0) : ft_printf("%01.1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.2i", 0) : ft_printf("%01.2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.10i", 0) : ft_printf("%01.10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.0i", 0) : ft_printf("%02.0i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.1i", 0) : ft_printf("%02.1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.2i", 0) : ft_printf("%02.2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.10i", 0) : ft_printf("%02.10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.0i", 0) : ft_printf("%010.0i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.1i", 0) : ft_printf("%010.1i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.2i", 0) : ft_printf("%010.2i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.10i", 0) : ft_printf("%010.10i", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.0i", -1) : ft_printf("%01.0i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.1i", -1) : ft_printf("%01.1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.2i", -1) : ft_printf("%01.2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.10i", -1) : ft_printf("%01.10i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.0i", -1) : ft_printf("%02.0i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.1i", -1) : ft_printf("%02.1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.2i", -1) : ft_printf("%02.2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.10i", -1) : ft_printf("%02.10i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.0i", -1) : ft_printf("%03.0i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.1i", -1) : ft_printf("%03.1i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.2i", -1) : ft_printf("%03.2i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.10i", -1) : ft_printf("%03.10i", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.0i", INT_MAX) : ft_printf("%09.0i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.1i", INT_MAX) : ft_printf("%09.1i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.2i", INT_MAX) : ft_printf("%09.2i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.10i", INT_MAX) : ft_printf("%09.10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.0i", INT_MAX) : ft_printf("%010.0i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.1i", INT_MAX) : ft_printf("%010.1i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.2i", INT_MAX) : ft_printf("%010.2i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.10i", INT_MAX) : ft_printf("%010.10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.0i", INT_MAX) : ft_printf("%011.0i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.1i", INT_MAX) : ft_printf("%011.1i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.2i", INT_MAX) : ft_printf("%011.2i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.10i", INT_MAX) : ft_printf("%011.10i", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.0d", 0) : ft_printf("%01.0d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.1d", 0) : ft_printf("%01.1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.2d", 0) : ft_printf("%01.2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.10d", 0) : ft_printf("%01.10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.0d", 0) : ft_printf("%02.0d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.1d", 0) : ft_printf("%02.1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.2d", 0) : ft_printf("%02.2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.10d", 0) : ft_printf("%02.10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.0d", 0) : ft_printf("%010.0d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.1d", 0) : ft_printf("%010.1d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.2d", 0) : ft_printf("%010.2d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.10d", 0) : ft_printf("%010.10d", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.0d", -1) : ft_printf("%01.0d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.1d", -1) : ft_printf("%01.1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.2d", -1) : ft_printf("%01.2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.10d", -1) : ft_printf("%01.10d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.0d", -1) : ft_printf("%02.0d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.1d", -1) : ft_printf("%02.1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.2d", -1) : ft_printf("%02.2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.10d", -1) : ft_printf("%02.10d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.0d", -1) : ft_printf("%03.0d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.1d", -1) : ft_printf("%03.1d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.2d", -1) : ft_printf("%03.2d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.10d", -1) : ft_printf("%03.10d", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.0d", INT_MAX) : ft_printf("%09.0d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.1d", INT_MAX) : ft_printf("%09.1d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.2d", INT_MAX) : ft_printf("%09.2d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.10d", INT_MAX) : ft_printf("%09.10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.0d", INT_MAX) : ft_printf("%010.0d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.1d", INT_MAX) : ft_printf("%010.1d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.2d", INT_MAX) : ft_printf("%010.2d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.10d", INT_MAX) : ft_printf("%010.10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.0d", INT_MAX) : ft_printf("%011.0d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.1d", INT_MAX) : ft_printf("%011.1d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.2d", INT_MAX) : ft_printf("%011.2d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.10d", INT_MAX) : ft_printf("%011.10d", INT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.0u", 0) : ft_printf("%01.0u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.1u", 0) : ft_printf("%01.1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.2u", 0) : ft_printf("%01.2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.10u", 0) : ft_printf("%01.10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.0u", 0) : ft_printf("%02.0u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.1u", 0) : ft_printf("%02.1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.2u", 0) : ft_printf("%02.2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.10u", 0) : ft_printf("%02.10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.0u", 0) : ft_printf("%010.0u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.1u", 0) : ft_printf("%010.1u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.2u", 0) : ft_printf("%010.2u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.10u", 0) : ft_printf("%010.10u", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.0u", -1) : ft_printf("%01.0u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.1u", -1) : ft_printf("%01.1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.2u", -1) : ft_printf("%01.2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.10u", -1) : ft_printf("%01.10u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.0u", -1) : ft_printf("%02.0u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.1u", -1) : ft_printf("%02.1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.2u", -1) : ft_printf("%02.2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.10u", -1) : ft_printf("%02.10u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.0u", -1) : ft_printf("%03.0u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.1u", -1) : ft_printf("%03.1u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.2u", -1) : ft_printf("%03.2u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.10u", -1) : ft_printf("%03.10u", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.0u", UINT_MAX) : ft_printf("%09.0u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.1u", UINT_MAX) : ft_printf("%09.1u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.2u", UINT_MAX) : ft_printf("%09.2u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.10u", UINT_MAX) : ft_printf("%09.10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.0u", UINT_MAX) : ft_printf("%010.0u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.1u", UINT_MAX) : ft_printf("%010.1u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.2u", UINT_MAX) : ft_printf("%010.2u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.10u", UINT_MAX) : ft_printf("%010.10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.0u", UINT_MAX) : ft_printf("%011.0u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.1u", UINT_MAX) : ft_printf("%011.1u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.2u", UINT_MAX) : ft_printf("%011.2u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.10u", UINT_MAX) : ft_printf("%011.10u", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.0x", 0) : ft_printf("%01.0x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.1x", 0) : ft_printf("%01.1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.2x", 0) : ft_printf("%01.2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.10x", 0) : ft_printf("%01.10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.0x", 0) : ft_printf("%02.0x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.1x", 0) : ft_printf("%02.1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.2x", 0) : ft_printf("%02.2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.10x", 0) : ft_printf("%02.10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.0x", 0) : ft_printf("%010.0x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.1x", 0) : ft_printf("%010.1x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.2x", 0) : ft_printf("%010.2x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.10x", 0) : ft_printf("%010.10x", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.0x", -1) : ft_printf("%01.0x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.1x", -1) : ft_printf("%01.1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.2x", -1) : ft_printf("%01.2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.10x", -1) : ft_printf("%01.10x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.0x", -1) : ft_printf("%02.0x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.1x", -1) : ft_printf("%02.1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.2x", -1) : ft_printf("%02.2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.10x", -1) : ft_printf("%02.10x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.0x", -1) : ft_printf("%03.0x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.1x", -1) : ft_printf("%03.1x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.2x", -1) : ft_printf("%03.2x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.10x", -1) : ft_printf("%03.10x", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.0x", UINT_MAX) : ft_printf("%09.0x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.1x", UINT_MAX) : ft_printf("%09.1x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.2x", UINT_MAX) : ft_printf("%09.2x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.10x", UINT_MAX) : ft_printf("%09.10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.0x", UINT_MAX) : ft_printf("%010.0x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.1x", UINT_MAX) : ft_printf("%010.1x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.2x", UINT_MAX) : ft_printf("%010.2x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.10x", UINT_MAX) : ft_printf("%010.10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.0x", UINT_MAX) : ft_printf("%011.0x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.1x", UINT_MAX) : ft_printf("%011.1x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.2x", UINT_MAX) : ft_printf("%011.2x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.10x", UINT_MAX) : ft_printf("%011.10x", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.0X", 0) : ft_printf("%01.0X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.1X", 0) : ft_printf("%01.1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.2X", 0) : ft_printf("%01.2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.10X", 0) : ft_printf("%01.10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.0X", 0) : ft_printf("%02.0X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.1X", 0) : ft_printf("%02.1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.2X", 0) : ft_printf("%02.2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.10X", 0) : ft_printf("%02.10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{
				r = (fct == 1) ? printf("%010.0X", 0) : ft_printf("%010.0X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.1X", 0) : ft_printf("%010.1X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.2X", 0) : ft_printf("%010.2X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.10X", 0) : ft_printf("%010.10X", 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.0X", -1) : ft_printf("%01.0X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.1X", -1) : ft_printf("%01.1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.2X", -1) : ft_printf("%01.2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%01.10X", -1) : ft_printf("%01.10X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.0X", -1) : ft_printf("%02.0X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.1X", -1) : ft_printf("%02.1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.2X", -1) : ft_printf("%02.2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%02.10X", -1) : ft_printf("%02.10X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.0X", -1) : ft_printf("%03.0X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.1X", -1) : ft_printf("%03.1X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.2X", -1) : ft_printf("%03.2X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%03.10X", -1) : ft_printf("%03.10X", -1);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.0X", UINT_MAX) : ft_printf("%09.0X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.1X", UINT_MAX) : ft_printf("%09.1X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.2X", UINT_MAX) : ft_printf("%09.2X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%09.10X", UINT_MAX) : ft_printf("%09.10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.0X", UINT_MAX) : ft_printf("%010.0X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.1X", UINT_MAX) : ft_printf("%010.1X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.2X", UINT_MAX) : ft_printf("%010.2X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%010.10X", UINT_MAX) : ft_printf("%010.10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.0X", UINT_MAX) : ft_printf("%011.0X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.1X", UINT_MAX) : ft_printf("%011.1X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.2X", UINT_MAX) : ft_printf("%011.2X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%011.10X", UINT_MAX) : ft_printf("%011.10X", UINT_MAX);
				printf("\n%d\n", r);
			}
		}

		// [I - Tests with *].

		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*d", 0, 42) : ft_printf("%*d", 0, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*d", 0, 0) : ft_printf("%*d", 0, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*d", 10, 42) : ft_printf("%*d", 10, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*d", -10, 42) : ft_printf("%*d", -10, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%0*d", -10, 42) : ft_printf("%0*d", -10, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%0*d", 10, 42) : ft_printf("%0*d", 10, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%0*d", 10, -42) : ft_printf("%0*d", 10, -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%0*d", 0, 42) : ft_printf("%0*d", 0, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%0*d", 10, 0) : ft_printf("%0*d", 10, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%0*d", -10, 0) : ft_printf("%0*d", -10, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*d", 010, 42) : ft_printf("%*d", 010, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*s", 10, "Hello") : ft_printf("%*s", 10, "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*s", -10, "Hello") : ft_printf("%*s", -10, "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-*d", 10, 42) : ft_printf("%-*d", 10, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-*d", -10, 42) : ft_printf("%-*d", -10, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%-*d", -10, -42) : ft_printf("%-*d", -10, -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.*d", 0, 42) : ft_printf("%.*d", 0, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.*d", 10, 42) : ft_printf("%.*d", 10, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.*d", -10, 42) : ft_printf("%.*d", -10, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.*d", 0, 0) : ft_printf("%.*d", 0, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.*d", 10, 0) : ft_printf("%.*d", 10, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.*d", -10, 0) : ft_printf("%.*d", -10, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.*d", -0, 0) : ft_printf("%.*d", -0, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.*d", -0, 42) : ft_printf("%.*d", -0, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.*d", -0, -42) : ft_printf("%.*d", -0, -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%.*s", -3, "Hello") : ft_printf("%.*s", -3, "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%10.*d", 10, 42) : ft_printf("%10.*d", 10, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.10d", 10, 42) : ft_printf("%*.10d", 10, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*d", 0, 0, 0) : ft_printf("%*.*d", 0, 0, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*d", 0, 0, 42) : ft_printf("%*.*d", 0, 0, 42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*d", 0, 0, -42) : ft_printf("%*.*d", 0, 0, -42);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*d", 0, 5, 0) : ft_printf("%*.*d", 0, 5, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*d", 0, -5, 0) : ft_printf("%*.*d", 0, -5, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*d", 5, 0, 0) : ft_printf("%*.*d", 5, 0, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*d", -5, 0, 0) : ft_printf("%*.*d", -5, 0, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*d", 5, 5, 0) : ft_printf("%*.*d", 5, 5, 0);
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*s", 0, 0, "Hello") : ft_printf("%*.*s", 0, 0, "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*s", 0, 0, "Hello") : ft_printf("%*.*s", 0, 0, "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*s", 0, 0, "Hello") : ft_printf("%*.*s", 0, 0, "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*s", 0, 5, "Hello") : ft_printf("%*.*s", 0, 5, "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*s", 0, -5, "Hello") : ft_printf("%*.*s", 0, -5, "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*s", 5, 0, "Hello") : ft_printf("%*.*s", 5, 0, "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
				r = (fct == 1) ? printf("%*.*s", -5, 0, "Hello") : ft_printf("%*.*s", -5, 0, "Hello");
				printf("\n%d\n", r);
			}
		}
		if (nb == i++)
		{
			if (fct == 0)
				printf("cas%d - ligne: %d\n", nb, __LINE__ + 3);
			else if (fct == 1 || fct == 2)
			{	
					r = (fct == 1) ? printf("%*.*s", 5, 5, "Hello") : ft_printf("%*.*s", 5, 5, "Hello");
					printf("\n%d\n", r);
				}
		}
	}
}
