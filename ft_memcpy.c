/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:27:14 by ymometto          #+#    #+#             */
/*   Updated: 2023/10/27 09:24:27 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*source;
	size_t	index;

	source = (char *)src;
	dst = (char *)dest;
	index = 0;
	if (!n || dst == source)
		return (dest);
	while (index < n)
	{
		dst[index] = source[index];
		index++;
	}
	return (dst);
}
