/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:45:08 by albarre           #+#    #+#             */
/*   Updated: 2023/08/14 13:46:54 by albarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src [j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main()
{
	char src[] = " ca va";
	char dest[50] = "bonjour";
	unsigned int	y = 3;

	char	*resultat = ft_strncat(dest, src, y);
	printf("resultat: %s\n", resultat);
	return (0);
}*/
