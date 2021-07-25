/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abridger <abridger@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:01:09 by abridger          #+#    #+#             */
/*   Updated: 2021/07/25 16:21:11 by abridger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorc;

	i = 0;
	if (dst == src)
		return (dst);
	if (n == 0)
		return (NULL);
	dest = (unsigned char *) dst;
	sorc = (unsigned char *) src;
	while (i < n)
	{
		dest[i] = sorc[i];
		i++;
		if (dest[i - 1] == (unsigned char) c)
			return ((void *) &dest[i]);
	}
	return (NULL);
}
