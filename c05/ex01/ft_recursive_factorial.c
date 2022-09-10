/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:42:25 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/09/03 17:42:24 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
}

/*int main()
{
	printf("%d\n",ft_recursive_factorial(3));
	printf("%d",ft_recursive_factorial(5));
}
*/
