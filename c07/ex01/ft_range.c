/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:15:19 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/27 13:10:33 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;
	int	size;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	ptr = (int *)malloc(sizeof(int) * (size));
	if (ptr == NULL)
		return (0);
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
/*
int main()
{
    int a = 11;
    int b = 111;
    int *n = ft_range(a, b);
    int i = 0;
    while (i < b - a)
    {
        printf("%d ", n[i]);
        i++;
    }
    free(n);
    return (0);
}*/
