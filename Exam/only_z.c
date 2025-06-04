/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:59:10 by kmaeda            #+#    #+#             */
/*   Updated: 2025/04/15 15:01:31 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	only_z(void)
{
	write(1, "z", 1);
//	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	return only_z();
}*/
