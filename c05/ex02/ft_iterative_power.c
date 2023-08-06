/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:04:32 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/22 09:39:06 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power != 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*int main() {

    printf("%d", ft_iterative_power(-2, 2));

    return 0;
}*/
