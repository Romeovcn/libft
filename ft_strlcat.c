/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:04:42 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 14:14:39 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dst_len;
	int	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
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
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char	src[6] = "hello";
// 	char	dst[20] = "bonjor";
// 	char	dst2[20] = "bonjor";

// 	printf("%ld\n", strlcat(dst, src, 12));
// 	printf("%ld\n", ft_strlcat(dst2, src, 12));
// 	printf("%s-", dst);
// 	printf("%s", dst2);
// 	return (0);
// }
