/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:40:07 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/15 17:47:57 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	letter_count(char c)
{
	int	repeat;

	repeat = 0;
	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' +1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int argc, char **argv)
{
	int	repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = letter_count(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
