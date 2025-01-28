/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjan-nie <vjan-nie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:12:06 by vjan-nie          #+#    #+#             */
/*   Updated: 2025/01/28 13:01:48 by vjan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	s1 = malloc(i + 1);
	s2 = malloc((ft_strlen(s) - i) + 1);
	if ((i + 1) > (ft_strlen(s) - i) + 1)
		split = ft_calloc(2, i + 1);
	else
		split = ft_calloc(2, (ft_strlen(s) - i) + 1);
	if (!s1 || !s2 || !split)
		return (NULL);
	ft_strlcpy(s1, s, (i + 1));
	ft_strlcpy(s2, (const char *) &s[i], (ft_strlen(s) - i) + 1);
	split[0] = s1;
	split[1] = s2;
	return (split);
}
/* 
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	//should the character where the split is done 
	//be included in s1, s2, or ignored??
	//memory handling? free?
	char const	*string;
	char		**splits;
	
	printf("ft_split.c\n\n");
	string = "Where do you want to split this?";
	printf("Sentence to split: %s\n", string);
	splits = ft_split(string, 'a');
	printf("split 1: %s\n", splits[0]);
	printf("split 2: %s\n", splits[1]);
	printf("\n\n");
	return (0);
} */