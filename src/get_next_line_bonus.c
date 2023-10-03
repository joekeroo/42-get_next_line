/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:46:22 by jhii              #+#    #+#             */
/*   Updated: 2021/11/26 13:46:41 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *ft_printnl(char **storage)
{
	char *res;
	char *temp;

	res = ft_substr(*storage, 0, ft_getnl(*storage));
	temp = ft_substr(*storage, ft_getnl(*storage), ft_strlen(*storage));
	if (*storage[0] != '\0')
		free(*storage);
	*storage = temp;
	return (res);
}

static char *ft_check(int fd, char **storage, int size, char *res)
{
	if (*storage[0] == '\0' || size < 0 || fd < 0)
	{
		free(*storage);
		*storage = NULL;
	}
	return (res);
}

static char *ft_combine(int fd, char **storage)
{
	char buffer[BUFFER_SIZE + 1];
	char *temp;
	char *res;
	int size;

	res = NULL;
	size = 0;
	while (size >= 0 && ft_getnl(*storage) == 0)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		buffer[size] = '\0';
		if (buffer[0] == '\0' || size == 0)
		{
			if (*storage[0] != '\0')
				res = *storage;
			else
				free(*storage);
			*storage = NULL;
			return (res);
		}
		temp = ft_strjoin(*storage, buffer);
		free(*storage);
		*storage = temp;
	}
	return (ft_check(fd, &*storage, size, res));
}

char *get_next_line_bonus(int fd)
{
	static char *storage[1024];
	char *res;

	res = NULL;
	if (fd < 0)
		return (NULL);
	if (!storage[fd])
	{
		storage[fd] = malloc(sizeof(char *) * 1);
		storage[fd][0] = '\0';
	}
	res = ft_combine(fd, &storage[fd]);
	if (res != NULL)
		return (res);
	else if (storage[fd] == NULL)
		return (res);
	if (storage[fd][0] != '\0' && ft_getnl(storage[fd]) > 0)
		res = ft_printnl(&storage[fd]);
	return (res);
}
