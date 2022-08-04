/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:18:35 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/04 12:52:34 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAX 100

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	rem;
	int	i;
	int	j;
	int	arr[MAX];

	i = 0;
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	while (nb > 0)
	{
		rem = nb % 10;
		arr[i] = rem ;
		i++;
		nb = nb / 10;
	}
	j = i - 1;
	while (j > -1)
	{
		ft_putchar ((char)(arr[j]) + '0');
		j--;
	}
}

// int main(void)
// {
// 	ft_putnbr(-42);
// 	return (0);
// }