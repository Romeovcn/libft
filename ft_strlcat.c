/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:04:42 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/12 19:01:18 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dst_len)
		return (src_len + size);
	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while (src[i] && size - 1 > i + j)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = 0;
	return (dst_len + src_len);
}

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>

// int	main(void)
// {
// 	// char	src[] = "lorem ipsum dolor sit amet";
// 	// char	dst[15] = "rrrrrrrrrrrrrrr";
// 	char	dst2[15] = "rrrrrrrrrrrrrrr";
// // ft_strlcat(dst2, "lorem ipsum dolor sit amet", 5);
// 	// printf("%ld\n", ft_strlcat(dst2, "lorem ipsum dolor sit amet", 5));
// 	printf("%ld\n", ft_strlcat(dst2, "lorem ipsum dolor sit amet", 5));

// 	// printf("%s\n", dst);
// 	// printf("%s", dst2);
// 	return (0);
// }
