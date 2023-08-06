/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:21:13 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/31 15:54:06 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_combn(int n, char *str, int n1, int n2)
{
	int		i;
	char	c;

	if (n1 == n)
	{
		i = 0;
		while (i < n)
		{
			c = str[i] + '0';
			write(1, &c, 1);
			i++;
		}
		if (str[0] != 10 - n)
		{
			write(1, ", ", 2);
		}
		if (str[0] != 10 - n)
			return ;
	}	
	while (n2 <= 9)
	{
		str[n1] = n2;
		print_combn(n, str, n1 + 1, n2 + 1);
		n2++;
	}
}

void	ft_print_combn(int n)
{
	char	str[10];

	if (n <= 0 && n >= 10)
		return ;
	print_combn(n, str, 0, 0);
}
/*
int	main(void)
{
	ft_print_combn(0);
	write(1, "\n", 1);
	ft_print_combn(1);
	write(1, "\n", 1);
	ft_print_combn(2);
	write(1, "\n", 1);
	ft_print_combn(3);
	write(1, "\n", 1);
	ft_print_combn(4);
	write(1, "\n", 1);
	ft_print_combn(5);
	write(1, "\n", 1);
	ft_print_combn(6);
	write(1, "\n", 1);
	ft_print_combn(7);
	write(1, "\n", 1);
	ft_print_combn(8);
	write(1, "\n", 1);
	ft_print_combn(9);
	write(1, "\n", 1);
	ft_print_combn(10);
	write(1, "\n", 1);
	ft_print_combn(11);
	write(1, "\n", 1);
	ft_print_combn(12);
	return (0);
}*/
