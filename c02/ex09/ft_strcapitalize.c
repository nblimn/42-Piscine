/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 02:24:59 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/08/26 00:31:54 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	z;

	i = 0;
	z = 'z';
	while (str[i])
	{
		j = i - 1;
		if (!((str[j] >= 65 && str[j] <= 90) || (str[j] >= 97 && str[j] <= z)))
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
