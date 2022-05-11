/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:50:52 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:57:50 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (size - 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	*src;
// 	char	dest[6];
// 	char	dest2[6];

// 	src = "";
// 	ft_strlcpy(dest2, src, 5);
// 	printf("%ld ", strlcpy(dest, src, 5));
// 	printf("%ld ", ft_strlcpy(dest, src, 5));
// 	printf("%s-%s", dest, dest2);
// }

// gcc -o test file.c -lbsd