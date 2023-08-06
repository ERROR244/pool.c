/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 09:00:20 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/30 10:31:09 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void ft_putnbr_base_recursive(unsigned int nbr, char *base, char *result, unsigned int *index)
{
    unsigned int base_len = 0;
    while (base[base_len] != '\0')
        base_len++;

    if (nbr >= base_len)
    {
        ft_putnbr_base_recursive(nbr / base_len, base, result, index);
        ft_putnbr_base_recursive(nbr % base_len, base, result, index);
    }
    else
    {
        result[(*index)++] = base[nbr];
    }
}

char *ft_putnbr_base(int nbr, char *base)
{
    unsigned int base_len;
	unsigned int index;
	char *reuslt;
	base_len = 0;
    while (base[base_len] != '\0')
        base_len++;
    if (base_len <= 1 || check_npr_and_bsctwice(base) != 1)
        return (0);

    result = (char *)malloc(33 * sizeof(char));
	if (result == 0)
        return (0);
    index = 0;
	write(1, "y", 1);
    if (nbr == 0)
    {
        result[index++] = base[0];
    }
    else if (nbr < 0)
    {
        result[index++] = '-';
        ft_putnbr_base_recursive(-nbr, base, result, &index);
    }
    else
    {
        ft_putnbr_base_recursive(nbr, base, result, &index);
    }
    result[index] = '\0';
	return (result);
}
