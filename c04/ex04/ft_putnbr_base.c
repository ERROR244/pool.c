/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:27:45 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/26 17:54:37 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_duplicates_check(char *base)
{
	int	j;
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	for_neg_sign(unsigned int n, char *base, unsigned int i)
{
	if (n >= i || n != 0)
	{
		for_neg_sign(n / i, base, i);
		ft_putchar(base[n % i]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	while (base[i] != '\0')
		i++;
	if (i <= 1)
		return ;
	else if (base_duplicates_check(base) == 1)
	{
		if (nbr == 0)
			ft_putchar(base[0]);
		if (nbr > 0)
		{
			for_neg_sign(nbr, base, i);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			n = (unsigned int)(nbr * (-1));
			for_neg_sign(n, base, i);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(123, "0123456789");
	return (0);
}*/
