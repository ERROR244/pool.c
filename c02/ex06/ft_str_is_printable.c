/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:54:13 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/17 15:20:54 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < ' ') || (str[i] > '~'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main() {
    char str[] = ;

    printf(, ft_str_is_printable(str));

    return ;
}*/
