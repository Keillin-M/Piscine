/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:58:17 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/09 15:23:04 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;
	char	buffer[1024];
	ssize_t	bytes_read;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 18);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], 0);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	while ((bytes_read = read(fd, buffer, sizeof (buffer))) > 0)
		write(1, buffer, bytes_read);
	close(fd);
	return (0);
}
