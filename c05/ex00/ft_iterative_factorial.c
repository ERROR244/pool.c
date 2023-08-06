/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 22:17:38 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/21 22:23:13 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	i = 0;
	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > i)
	{
		res *= nb;
		--nb;
	}
	return (res);
}
/*int main() {
    
    printf("%d", ft_iterative_factorial(5));

    return 0;
}*/
