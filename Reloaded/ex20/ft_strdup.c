/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:11:33 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/07 15:50:18 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = malloc(i + 1);
	if (!copy)
		return (NULL);
	j = 0;
	while (j < i)
	{
		copy[j] = src[j];
		j++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char *original = "Hello";
	char *copy = ft_strdup(original);

	if (copy)
	{
		printf("%s", copy);
		free(copy);
	}
	return (0);
}*/
