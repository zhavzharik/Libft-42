/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abridger <abridger@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:03:45 by abridger          #+#    #+#             */
/*   Updated: 2021/07/25 16:25:47 by abridger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = ft_strlen(needle);
	if (len == 0 && needle_len > 0)
		return (NULL);
	if (needle_len > ft_strlen(haystack))
		return (NULL);
	if (needle_len == 0)
		return ((char *) haystack);
	if (needle_len > len)
		needle_len = len;
	i = 0;
	while (i <= (len - needle_len))
	{
		if ((haystack[0] == needle[0])
			&& (0 == ft_strncmp(haystack, needle, needle_len)))
			return ((char *) haystack);
		i++;
		haystack++;
	}
	return (NULL);
}
