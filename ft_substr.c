/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:51:15 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:59:27 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(len * sizeof(char));
	while (s[start] && len - 1)
	{
		result[i] = s[start];
		i++;
		start++;
		len--;
	}
	result[i] = 0;
	return (result);
}

// int main(void)
// {
// 	char *str = ft_substr("salut", 2, 3);
// 	printf("%s", str);
// }