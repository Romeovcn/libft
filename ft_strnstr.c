/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:51:07 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:58:38 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n - 1 && *s1 && *s1 == *s2)
	{
		n--;
		s1++;
		s2++;
	}
	i = *s1 - *s2;
	return (i);
}

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	int	size;
	int	count;
	int	i;

	size = ft_strlen(str2);
	count = 0;
	i = 0;
	if (*str2 == 0)
		return ((char *)str1);
	while (*str1 && count <= len)
	{
		if ((count + ft_strlen(str2)) <= len && ft_strncmp(str1, str2,
				ft_strlen(str2)) == 0)
			return ((char *)str1);
		str1++;
		count++;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *largestring = "salut allo";
//     const char *smallstring = "allo";
// 	int size = 9;
//     char *ptr;
//     char *ptr2;

//     // ft_strnstr(largestring, smallstring, 7);
//     ptr = ft_strnstr(largestring, smallstring, size);
//     ptr2 = strnstr(largestring, smallstring, size);
// 	printf("%s-", ptr);
// 	printf("%s", ptr2);
// }
