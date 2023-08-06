/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 07:17:33 by ksohail-          #+#    #+#             */
/*   Updated: 2023/07/19 11:39:35 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i] && i < n -1)
	{
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*int main() {
    char s1[7] = "khalil ";
    char s2[6] = "khalil";

    printf("%d", ft_strncmp(s1, s2, 22));

    return 0;
}*/
