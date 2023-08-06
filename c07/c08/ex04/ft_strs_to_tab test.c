/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:31:33 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/29 11:11:08 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (src[0] == '\0')
	{
		ptr = (char *)malloc(1 * sizeof(char));
		return (ptr);
	}
	while (src[i])
		i++;
	ptr = (char *) malloc ((i + 1) * sizeof(char));
	while (j < i)
	{
		ptr[j] = src[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL )
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = &av[i][0];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*
int main()
{
    char *strings[] = {"khalil", "sohail", "is", "me"};
    int num_strings = sizeof(strings) / sizeof(strings[0]);

    t_stock_str *stock_strings = ft_strs_to_tab(num_strings, strings);

    if (stock_strings == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < num_strings; i++)
    {
        printf("String %d:\n", i + 1);
        printf("Size: %d\n", stock_strings[i].size);
        printf("Original String: %s\n", stock_strings[i].str);
        printf("Copy: %s\n", stock_strings[i].copy);
        printf("\n");
    }
    for (int i = 0; i < num_strings; i++)
    {
        free(stock_strings[i].copy);
    }
	free(stock_strings);
    return 0;
}*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
		ft_putnbr(nb);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		par++;
	}
}

int main()
{
    char *strings[] = {"khalil", "sohail", "is", "me"};
    int num_strings = sizeof(strings) / sizeof(strings[0]);

    t_stock_str *stock_strings = ft_strs_to_tab(num_strings, strings);

    /*if (stock_strings == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }*/
    //for (int i = 0; i < num_strings; i++)
    //{
	ft_show_tab(stock_strings);
    //}
    for (int i = 0; i < num_strings; i++)
    {
    	free(stock_strings[i].copy);
    }
	free(stock_strings);
    return 0;
}
