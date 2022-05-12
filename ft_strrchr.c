/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:13:24 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/12 15:25:34 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (str[i] != c && i)
	{
		i--;
	}
	if (str[i] == c)
		return ((char *)str + (i));
	return (NULL);
}

// int main(void)
// {
// 	char		str2[] = "bonjour";
// 	printf("%s\n", ft_strrchr(str2, '\0'));
// 	printf("%s", strrchr(str2, '\0'));
// 	// ft_strrchr("saluuut", 117);
// }