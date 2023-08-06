/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:51:59 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/18 09:12:15 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex_helper(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	hexstr;
	int				i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || str[i] == 127)
		{
			ft_putchar('\\');
			hexstr = (unsigned char) str[i];
			hex_helper(hexstr);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
/*int main() {
    char str[] = "Coucou\ntu ©";
    ft_putstr_non_printable(str);
    return 0;
}*/
