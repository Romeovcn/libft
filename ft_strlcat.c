/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:04:42 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/04 18:04:55 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int	i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	int dst_len;

	dst_len = ft_strlen(dst);
	while (*dst)
		dst++;
	while ((size - dst_len - 1) && *src)
	{
		*dst = *src;
		size--;
		dst++;
		src++;
	}
	dst = 0;
}

int	main(void)
{
	char	src[6] = "hello\0";
	char	dst[20] = "bonjour\0";
	char	dst2[20] = "bonjour\0";

	strlcat(dst, src, 12);
	ft_strlcat(dst2, src, 12);
	printf("%s-%s", dst, dst2);
	return (0);
}
