/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:11:49 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/09/09 00:12:35 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;

	len = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!(str))
		return (NULL);
	len = 0;
	while (src[len] != '\0')
	{
		str[len] = src[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*output;

	struc_output = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(struc_output))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		output[i].size = ft_strlen(av[i]);
		output[i].str = av[i];
		output[i].copy = ft_strdup(av[i]);
		i++;
	}
	struc_output[i].str = NULL;
	return (struc_output);
}
