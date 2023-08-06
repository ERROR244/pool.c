/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:26:52 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/17 17:50:56 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (*str);
}

int	check(char c)
{
	int	i;

	i = 0;
	if ((c < '0' || (c > '9' && c < 'A')) || (c > 'Z' && c < 'a') || c > 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if ((str[0] >= 97 && str[0] <= 122))
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
		{
			if (check(str[i - 1]) == 1)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*int main() {
    char str[] = ;

    ft_strcapitalize(str);
    printf(, str);

    return ;
}*/
