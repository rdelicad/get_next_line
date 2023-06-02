/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:32:29 by rdelicad          #+#    #+#             */
/*   Updated: 2023/06/02 13:56:37 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	char	*temp;
	int		s1_len;
	int		s2_len;

	if (s1 == NULL)
		s1 = ft_calloc(1, 1);
	if (!s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = ft_calloc(s1_len + s2_len + 1, 1);
	if (!str)
		return (free(s1), s1 = NULL, NULL);
	temp = str;
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	free(s1 - s1_len);
	return (str);
}

int	ft_strlen(char *s)
{
	int	n;

	n = 0;
	while (*s++)
		n++;
	return (n);
}

int	ft_strchr(char *s)
{
	if (s == NULL)
		return (0);
	while (*s != '\n' && *s)
		s++;
	return (*s == '\n');
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}
