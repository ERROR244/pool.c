/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:06:01 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/26 18:07:48 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	check_npr_and_bsctwice(char *base)
{
	int	j;
	int	i;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	is_str_in_base(char str, char *base)
{
	int	n2;

	n2 = 0;
	while (base[n2] != '\0')
	{
		if (str == base[n2])
			return (n2);
		n2++;
	}
	return (-1);
}

int	white_space(char *str, int *position)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45) && str[i] != 0)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*position = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	slen;
	int	n1;
	int	n2;

	n1 = 0;
	i = 0;
	slen = check_npr_and_bsctwice(base);
	if (slen >= 2)
	{
		sign = white_space(str, &i);
		n2 = is_str_in_base(str[i], base);
		while (n2 != -1)
		{
			n1 = (n1 * slen) + n2;
			i++;
			n2 = is_str_in_base(str[i], base);
		}
		return (n1 *= sign);
	}
	return (0);
}
/*
int		main(void)
{
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abccef"));
	printf("%d\n", ft_atoi_base("133742", "012345-6789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "0+1"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}*/
