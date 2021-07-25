/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abridger <abridger@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:39:56 by abridger          #+#    #+#             */
/*   Updated: 2021/07/25 16:24:57 by abridger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	size_t			len_s1;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (len_s1 + ft_strlen(s2)) + 1);
	i = 0;
	if (str)
	{
		str = ft_memcpy(str, s1, len_s1);
		while (i < ft_strlen(s2))
		{
			str[len_s1] = s2[i];
			i++;
			len_s1++;
		}
		str[len_s1] = '\0';
	}
	return (str);
	if (!str)
		return (NULL);
}
