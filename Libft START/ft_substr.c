/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjan-nie <vjan-nie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:05:52 by vjan-nie          #+#    #+#             */
/*   Updated: 2025/01/27 14:39:48 by vjan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = NULL;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}
/* 
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char const		*string;
	unsigned int	index = 10;
	size_t			size = 5;

	string = NULL;
	string = malloc(25);
	if (!string)
		return (-1);
	string = "is this a piece of cake?";
	printf("ft_substr\n\n");
	printf("full string: %s\n", string);
	printf("ft_substr should print 'piece'\n");
	printf("substr with my ft: %s\n", ft_substr(string, index, size));
	//original ft??
	printf("\n\n");
	return (0);
} */