/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:58:15 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/04 18:12:39 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	int	i;
	int	res;
	int neg;
	int pos;

	i = 0;
	pos = 0;
	neg = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			i++;
			continue ;
		}
		if (str[i] == 43)
		{
			pos++;
			i++;
			continue ;
		}
		if (str[i] == 45)
		{
			neg++;
			i++;
			continue ;
		}
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			break ;
		if (str[i] >= 48 && str[i] <= 57)
		{
			printf("HERE\n");
			res = (str[i] - '0') + (res * 10);
		}
		i++;
	}
	if (neg > pos)
		printf("-");
	if (res != 0)
	{
		printf("%i", res);
		return res;
	}
	printf("%i", 0);
	return (0);
}

int main(void)
{
	// " ---+--+1234ab567"
	char strn[] = "str";
	ft_atoi(strn);
	return (0);
}
