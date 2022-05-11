/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:13:24 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:58:49 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strrchr(const char *str, int c)
{
	while (*str)
		str++;
	str--;
	while (*str != c && *str)
	{
		str--;
	}
	if (*str == c)
		return ((char *)str);
	return (NULL);
}

// int main(void)
// {
// 	printf("%s-", strrchr("uuuu", 117));
// 	printf("%s", ft_strrchr("uuuu", 117));
// 	// ft_strrchr("saluuut", 117);
// }