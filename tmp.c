#include <stdio.h>

int ft_is_num(char str)
{
	if (str >= 48 && str <= 57)
		return (1);
	return (0);
}

void ft_str_converter(char str, unsigned int *res, int *lock)
{
	if (ft_is_num(str) == 1)
	{
		*lock = 1;
		*res = (str - '0') + ((*res) * 10);
	}
}

void ft_signs_and_spaces(char str,int *i, int *sign)
{
	if (str == 32)
		i++;
	if (str == 43)
	{
		*sign = *sign + 1;
		i++;
	}
	if (str == 45)
	{
		*sign = *sign - 1;
		i++;
	}
}

int ft_atoi(char *str)
{
	int				i;
	unsigned int	res;
	int 			lock;
	int 			sign;

	i = 0;
	lock = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (lock == 1 && ft_is_num(str[i]) != 1)
			break ;
		ft_signs_and_spaces(str[i], &i,&sign);
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			break ;
		ft_str_converter(str[i], &res, &lock);
		i++;
	}
	if (sign < 0 && res != 0)
		return (-res);
	if (res != 0)
		return (res);
	return (0);
}

int main(void)
{
	char strn[] = "1234";
	// char strn[] = "str";
	// char strn[] = " ---+--+1234ab567";
	printf("%d",ft_atoi(strn));
	return (0);
}