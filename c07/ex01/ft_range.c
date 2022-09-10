/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 03:57:00 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/09/06 19:11:58 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	str = (int *)malloc(sizeof(*str) * (max - min));
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
