/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:17:45 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/25 13:29:59 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_size_of_all(int size, char **str)
{
	int	allsize;
	int	i;

	i = 0;
	allsize = 0;
	while (i < size)
	{
		allsize += ft_strlen(str[i]);
		i++;
	}
	return (allsize);
}

char	*ft_fill_in_the_table(char *ptr, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			ptr[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			ptr[k++] = sep[j++];
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		k;
	int		i;
	char	*ptr;

	i = 0;
	if (size == 0)
	{
		ptr = (char *)malloc(sizeof(int));
		ptr[size] = '\0';
		return (ptr);
	}
	k = ((size - 1) * ft_strlen(sep)) + ft_size_of_all(size, strs);
	ptr = (char *)malloc(k + 1);
	if (ptr == NULL)
		return (NULL);
	ft_fill_in_the_table(ptr, size, strs, sep);
	return (ptr);
}
/*int	main()
{
    char *strs[] = {"khalil", "sohail"};
    char sep[] = "++it'swork++";
    printf("%s\n", ft_strjoin(2, strs, sep));
    return (0);
}*/
