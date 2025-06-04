/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:25:03 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/15 14:33:06 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	aff_a(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
		{
			write(1, "a", 1);
			break ;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	return aff_a(argc, argv);
}
