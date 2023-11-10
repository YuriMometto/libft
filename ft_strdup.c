/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:40:40 by ymometto          #+#    #+#             */
/*   Updated: 2023/10/26 13:55:16 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		srclen;
	int		index;

	srclen = ft_strlen(s);
	str = malloc((srclen + 1) * sizeof(char));
	index = 0;
	if (!s)
		return (NULL);
	while (s[index] != '\0')
	{
		str[index] = (char)s[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
