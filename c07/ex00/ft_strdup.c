/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 03:40:01 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/09/06 19:09:42 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*out;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	out = malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	while (src[i])
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

int main()
{
	char *s1 = "hello";
	char *s2 = "cat";

	printf("%s", ft_strdup(s1));
}
