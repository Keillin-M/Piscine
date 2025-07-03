/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:18:33 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/16 16:31:45 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char c, char *printed)
{
	while (*printed)
	{
		if(*printed == c)
			return (1);
		printed++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	printed[256] = {};
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!ft_check(argv[1][i], printed))
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
					{
						write(1, &argv[1][i], 1);
						printed[k] = argv [1][i];
						k++;
						break ;
					}
					j++;
				}
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
