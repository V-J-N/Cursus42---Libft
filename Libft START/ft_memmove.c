/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjan-nie <vjan-nie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:20:27 by vjan-nie          #+#    #+#             */
/*   Updated: 2025/01/27 14:36:42 by vjan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str_dest;
	unsigned char	*str_src;
	size_t			i;

	str_dest = (unsigned char *) dest;
	str_src = (unsigned char *) src;
	i = 0;
	if (str_src < str_dest)
	{
		while (i < n)
		{
			str_dest[i] = str_src[i];
			i++;
		}
	}
	else
	{
		while (n - 1 > 0)
		{
			str_dest[n -1] = str_src[n -1];
			n--;
		}
		str_dest[n -1] = str_src[n -1];
	}
	return (dest);
}
/* 
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	void	*dst;
	const void	*srce;
	char	*str_dst;
	char	*str_srce;
	size_t	size = 5;
	size_t	i = 0;

	write(1, "ft_memmove\n\n", 12);
	dst = NULL;
	srce = NULL;
	dst = malloc(size);
	srce = malloc(size);
	if (!dst || !srce)
		return (-1);
	str_dst = (char *) dst;
	str_srce = (char *) srce;
	strcpy(str_srce, "test");
	
	ft_memmove(dst, srce, size);
	
	while (i < size)
	{
		if (str_dst[i] == str_srce[i])
			write(1, "v", 1);
		else
			write(1, "x", 1);	
		i++;
	}
	write(1, "\n", 1);
	
	i = 0;
	memmove(dst, srce, size);

	while (i < size)
	{
		if (str_dst[i] == str_srce[i])
			write(1, "v", 1);
		else
			write(1, "x", 1);
		i++;
	}
	write(1, "\n", 1);
	free(dst);
	free((void *) srce);
	write(1, "\n\n", 2);
	return (0);
} */
