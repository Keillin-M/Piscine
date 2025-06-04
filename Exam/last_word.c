/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:14:23 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/16 12:39:40 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	end;

	if (argc ==2)
	{
		i = 0;
		while (argv[1][i] != '\0')
			i++;
		while (i > 0 && (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
			i--;
		end = i;
		while (i > 0 && (argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t'))
			i--;
		while (i < end)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
