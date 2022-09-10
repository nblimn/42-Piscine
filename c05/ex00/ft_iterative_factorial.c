/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:22:46 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/09/03 17:41:52 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;

	if (nb < 0)
		return (0);
	ans = 1;
	while (nb > 1)
	{
		ans = ans * nb;
		nb--;
	}
	return (ans);
}

/*int main()
{
	printf("%d\n",ft_iterative_factorial(3));
	printf("%d",ft_iterative_factorial(5));
}
*/
