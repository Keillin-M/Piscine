/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:06:47 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/16 10:25:43 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	if (argv[2][1] || argv[3][1])
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] != argv[2][0])
			write(1, &argv[1][i], 1);
		else
			write(1, &argv[3][0], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
