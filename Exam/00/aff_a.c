/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 09:53:04 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/28 11:00:52 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_a(char *str)
{
	while (*str != '\0')
	{
		if (*str == 'a')
		{
			write(1, "a", 1);
			break ;
		}
		++str;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		aff_a(argv[1]);
	else
		write(1, "a\n", 2);
	return (0);
}
