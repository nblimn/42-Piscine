/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:02:47 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/09/03 17:44:41 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
	{
		return (1);
	}
	while (i < (nb / 2))
	{
		if ((i * i == nb))
		{
			return (i);
		}
		else if (i >= 46431)
			return (0);
		i++;
	}
	return (0);
}
