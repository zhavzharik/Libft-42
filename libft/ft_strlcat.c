/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abridger <abridger@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:42:06 by abridger          #+#    #+#             */
/*   Updated: 2021/07/25 16:25:07 by abridger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;
	void	*ch;

	i = 0;
	j = 0;
	ch = ft_memchr(dst, 0, dstsize);
	if (ch == NULL)
		return (dstsize + ft_strlen(src));
	len = ft_strlen(dst);
	while (dst[j] != '\0')
		j++;
	while (src[i] != '\0' && i < dstsize - len - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (dst[j] != '\0')
		dst[j] = '\0';
	return (len + ft_strlen(src));
}
