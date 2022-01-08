/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 22:10:58 by msabwat           #+#    #+#             */
/*   Updated: 2021/02/10 13:14:48 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_node	*init_node(t_node **phead, int fd)
{
	t_node	*new;
	t_node	*tmp;

	new = NULL;
	tmp = *phead;
	while (tmp && (tmp->fd != fd))
		tmp = tmp->next;
	if (tmp)
		return (tmp);
	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->fd = fd;
	new->rest = NULL;
	new->next = *phead;
	*phead = new;
	return (new);
}

static int		update_node(t_node *new, char *buf)
{
	char	*tofree;

	tofree = new->rest;
	if (!(new->rest))
	{
		new->rest = ft_strnew(ft_strlen(buf));
		if (!(new->rest))
			return (-1);
		new->rest = ft_strcpy(new->rest, buf);
	}
	else
	{
		new->rest = ft_strjoin(new->rest, buf);
		if (!(new->rest))
		{
			ft_strdel(&tofree);
			return (-1);
		}
		ft_strdel(&tofree);
	}
	return (1);
}

static char		*get_line(t_node *new)
{
	char	*pos;
	char	*str;

	pos = ft_strchr(new->rest, '\n');
	*pos = '\0';
	str = ft_strnew(ft_strlen(new->rest));
	if (!str)
		return (NULL);
	str = ft_strcpy(str, new->rest);
	new->rest = ft_strcpy(new->rest, pos + 1);
	return (str);
}

static int		handle_return(t_node *new, char **line)
{
	if (ft_strchr(new->rest, '\n'))
	{
		*line = get_line(new);
		if (!*line)
			return (-1);
		return (1);
	}
	else if (ft_strlen(new->rest) > 0)
	{
		*line = new->rest;
		return (0);
	}
	return (0);
}

int				get_next_line(int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				r_bytes;
	static t_node	*head = NULL;
	t_node			*new;

	r_bytes = 0;
	if (fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);
	new = init_node(&head, fd);
	if (!new)
		return (-1);
	while (!(ft_strchr(new->rest, '\n')))
	{
		r_bytes = read(fd, buf, BUFF_SIZE);
		if (r_bytes == -1)
			return (-1);
		buf[r_bytes] = '\0';
		if (update_node(new, buf) == -1)
			return (-1);
		if (r_bytes == 0)
			break ;
	}
	return (handle_return(new, line));
}
