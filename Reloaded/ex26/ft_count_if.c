/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:06:22 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/09 12:20:35 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	a_start(char *str)
{
	char	first;

	first = str[0];
	if (first == 'a')
		return (1);
	return (0);
}*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int	main(void)
{
	char	*tab[] = {"apple", "banana", "avocado", "cherry", NULL};
	int	result;

	result = ft_count_if(tab, a_start);
	printf("%d\n", result);
	return (0);
}*/
