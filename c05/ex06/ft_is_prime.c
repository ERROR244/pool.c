/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:09:28 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/24 11:09:33 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb != 2 && nb % 2 == 0)
		return (0);
	while (i <= 46340)
	{
		if (i == nb)
			return (1);
		else if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*int main(int ac, char *av[])
{
	(void) ac;
    printf("%d", ft_is_prime(atoi(av[1])));
    return (0);
}*/
