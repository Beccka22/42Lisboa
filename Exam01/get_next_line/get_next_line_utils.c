/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 22:47:57 by rneves-s          #+#    #+#             */
/*   Updated: 2023/03/08 22:27:02 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_len_line(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n' && ++i)
			break ;
		i++;
	}
	return (i);
}

char	*ft_get_buffer(char *buffer, char *line)
{
	char	*temp;
	int		i;
	int		j;

	temp = line;
	i = 0;
	j = 0;
	line = malloc(sizeof(char) * (ft_len_line(buffer) + ft_len_line(line) + 1));
	line[ft_len_line(buffer) + ft_len_line(temp)] = 0;
	while (temp && temp[i] && ++i)
		line[i - 1] = temp[i - 1];
	if (temp)
		free(temp);
	while (buffer && buffer[j] && j < BUFFER_SIZE)
	{
		line[i + j] = buffer[j];
		buffer[j] = 0;
		if (line[i + j] == '\n')
			break ;
		j++;
	}
	ft_remove_read_line(buffer);
	return (line);
}

int	ft_is_line(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	ft_remove_read_line(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < BUFFER_SIZE && buffer[i] == '\0')
		i++;
	while (i < BUFFER_SIZE)
	{
		buffer[j] = buffer[i];
		buffer[i] = '\0';
		j++;
		i++;
	}
}
