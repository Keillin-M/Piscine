/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:25:38 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/16 15:40:20 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	j;
	char	*new_str;

	i = 0;
	while (src[i])
		i++;
	new_str = malloc(i + 1);
	if(!new_str)
		return (NULL);
	j = 0;
	while (j < i)
	{
		new_str[j] = src[j];
		j++;
	}
	new_str[i] = '\0';
	return new_str;
}
/*
#include <stdio.h>

int	main(void)
{
	char *original = "Hello!";
	char *copy = ft_strdup(original);

	if (copy)
	{
		printf("Original: %s\nCopy: %s\n", original, copy);
		free(copy);
	}
	return (0);
}*/
