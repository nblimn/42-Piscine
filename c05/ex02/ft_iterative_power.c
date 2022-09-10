/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:55:41 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/09/03 17:42:44 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}

/*int main()
{
	printf("%d",ft_iterative_power(2,3));
}
*/
