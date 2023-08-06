/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:46:55 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/27 13:08:48 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

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
/*
int main(void)
{
	char src[] = "khalil sohail";

	printf("%s\n", src);
	char* dup = ft_strdup(src);
	if (dup != NULL)
	{
	    printf("%s\n", dup);
        free(dup);
	}
    return (0);
}*/
