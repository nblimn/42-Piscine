/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:17:24 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/09/07 16:31:43 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		write(1, &"0123456789"[nb], 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	print_all(int j, int i)
{
	if (j < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(j);
	ft_putchar(' ');
	if (i < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(i);
	if (!(j == 98 && i == 99))
		write(1, ", ", 2);
}
	
void	ft_print_comb2()
{
	int i;
	int j;

	i = 0;
	while (j < 99)
	{
		while (i < 100)
		{
			print_all(j, i);
			i++;
		}
		j++;
		i = j + 1;
	}
}
