/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:33:58 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/16 14:42:16 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				c = (argv[1][i] - 'A' + 1) % 26 + 'A';
				write(1, &c, 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				c = (argv[1][i] - 'a' + 1) % 26 + 'a';
				write(1, &c, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
