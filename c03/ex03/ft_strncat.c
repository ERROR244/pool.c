/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:03:02 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/18 17:51:26 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && nb)
	{
		dest[j + i] = src[i];
		i++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int main(void)
{
    char src[] = ", khalil";
    char dest[20] = "hi";

	ft_strncat(dest, src, 5);
    printf("%s", dest);
    return 0;
}*/
