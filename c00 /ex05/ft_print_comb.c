/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:49:58 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/08/19 15:57:31 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print(int x, int y, int z)
{
	if (x != y || y != z || z != x)
	{
		if (z != 50)
		{
			write(1, ", ", 3);
		}
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, &z, 1);
	}		
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	o;

	i = 48;
	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			o = j + 1;
			while (o <= 57)
			{
				ft_print(i, j, o);
				o++ ;
			}
		j++;
		}
	i++ ;
	}
}
