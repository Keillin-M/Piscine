/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:25:00 by kmaeda            #+#    #+#             */
/*   Updated: 2025/03/28 12:31:49 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_z(char *str)
{
	if (*str == '\0')
	{
		if (*str == 'z')
		{
			write(1, "z\n", 1);
		}
		++str;
	}
	else 
		write(1, "z\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		aff_z(argv[1]);
	else
		write(1, "z\n", 2);
	return (0);
}
