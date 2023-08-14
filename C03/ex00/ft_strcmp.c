/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:51:44 by albarre           #+#    #+#             */
/*   Updated: 2023/08/14 13:41:47 by albarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)

{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
/*#include <stdio.h>

int	main()

{
	char 	str1[] = "bonjour";
	char	str2[] = "bonsoir";
	char	str3[] = "bonbon";

	int	result1 = ft_strcmp(str1, str2);
	int	result2 = ft_strcmp(str1, str3);

	printf("comparaison str1 et str2 : %d\n", result1);
	printf("comparaison str1 et str3 : %d\n", result2);

	return (0);
}*/
