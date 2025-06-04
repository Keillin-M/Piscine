/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:58:44 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/31 12:04:42 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = 10;
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Array before: \n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	printf("\nArray after: \n");
	ft_rev_int_tab(tab, size);
	while (j < size)
        {
		printf("%d ", tab[j]);
		j++;
	}
}
