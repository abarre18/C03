/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:41:47 by albarre           #+#    #+#             */
/*   Updated: 2023/08/14 13:53:33 by albarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*#include <stdio.h>

int main()
{
	char str1[] = "boulle";
	char str2[] = "bouffe";
	unsigned int n = 5;

	int result1 = ft_strncmp(str1, str2, n);

	if (result1 < 0)
	{
		printf("Les premiers %d caracteres de str1 sont inferieur a str2.\n", n);
	}
	else if (result1 > 0)
	{
		printf("Les premiers %d caracteres de str1 sont superieur a str2.\n", n);
	}
	else
	{
		printf("Les premiers %d caracteresde str1 sont identiques a str2.\n", n);
	}
	return (0);
}*/
