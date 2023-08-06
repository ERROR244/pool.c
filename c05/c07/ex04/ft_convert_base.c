/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 09:01:36 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/30 10:31:16 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int check_npr_and_bsctwice(char *base);
int is_str_in_base(char str, char *base);
int white_space(char *str, int *position);
int ft_atoi_base(char *str, char *base);
void ft_putnbr_base(int nbr, char *base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int base_from_len;
	int base_to_len;
	int decimal_value;
	char *result;
	unsigned int size;
	int temp_value;

	if (nbr == 0 || base_from == 0|| base_to == 0)
        return (0);
    base_from_len = check_npr_and_bsctwice(base_from);
    base_to_len = check_npr_and_bsctwice(base_to);

    if (base_from_len < 2 || base_to_len < 2)
        return (0);
    decimal_value = ft_atoi_base(nbr, base_from);
    if (decimal_value == 0)
	{
        result = (char *)malloc(2 * sizeof(char));
        result[0] = base_to[0];
        result[1] = '\0';
    }
	else
	{
        size = 0;
        temp_value = decimal_value;
        while (temp_value != 0)
		{
            size++;
            temp_value /= base_to_len;
        }
        if (decimal_value < 0)
            size++;
        result = (char *)malloc((size + 1) * sizeof(char));
        result[size + 1] = '\0';
		printf("yes\n");
        result = ft_putnbr_base(decimal_value, base_to);
    }
    return (result);
}

int main()
{
    char *number = "101010";
	char *base_from = "01";
	char *base_to = "0123456789";
    char *result = ft_convert_base(number, base_from, base_to);
	printf("%s", result);

    return 0;
}
