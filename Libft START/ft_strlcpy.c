/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjan-nie <vjan-nie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:32:18 by vjan-nie          #+#    #+#             */
/*   Updated: 2025/01/27 14:38:47 by vjan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = (ft_strlen(src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "HellyeahRnR";
	char	destiny[] = "RocknRoll";
	char	destiny2[] = "RocknRoll";
	unsigned int	len = 4;

	printf("ft_strlcpy\n\n");
	printf("My ft length of original sentence: 11\n");
	printf("My ft length after: %lu\n", ft_strlcpy(destiny, source, len +1));
	printf("My ft copied sentence: %s\n", destiny);
	printf("Strd length after: %lu\n", strlcpy(destiny2, source, len +1));
	printf("Strd copied sentence: %s\n", destiny2);
	printf("\n\n");

	return (0);
} */