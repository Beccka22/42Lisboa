/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:34:40 by rneves-s          #+#    #+#             */
/*   Updated: 2023/03/08 22:52:40 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	buffer[BUFFER_SIZE + 1];

	line = NULL;
	while (1)
	{
		if (!buffer[0] && read(fd, buffer, BUFFER_SIZE) <= 0)
			return (line);
		line = ft_get_buffer(buffer, line);
		if (ft_is_line(line))
			break ;
	}
	return (line);
}

// int	main(int argc, char **argv)
// {
// 	int		fd;
// 	char* teste;
// 	if (argc <= 0 || !argv)
// 		return (0);
// 	fd = open(argv[1], O_RDONLY);
// 	teste = get_next_line(fd);
// 	while (teste) {
// 		printf("s - %s\n\n", teste);
// 		free(teste);
// 		teste = get_next_line(fd);
// 	}
// 	close(fd);
// 	return (0);
// }
