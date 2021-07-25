/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abridger <abridger@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:01:21 by abridger          #+#    #+#             */
/*   Updated: 2021/07/25 16:21:42 by abridger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorc;

	if (dst == src)
		return (dst);
	dest = (unsigned char *) dst;
	sorc = (unsigned char *) src;
	if (sorc + len > dest && sorc +len < dest + len)
	{
		while (len-- > 0)
			dest[len] = sorc[len];
		return (dst);
	}
	i = 0;
	while (i < len)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (dst);
}
