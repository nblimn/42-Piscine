/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:35:47 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/09/06 19:20:29 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*str;
	int	i;

	i = 0;
	if (min >= max)
	{
		str = (NULL);
		return (0);
	}
	str = (int *)malloc(sizeof(int) * (max - min));
	if (!str)
		return (-1);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	*range = str;
	return (i);
}

int main()
{
	int *a;
	int i;
	int j;

	i = ft_ultimate_range(&a, 5 , 10);
	printf("%d\n", i);
	j = -1;
	while (++j < 5)
		printf("%d, ", a[j]); 
}	
