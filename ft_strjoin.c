/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:50:47 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/12 13:57:42 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	while (s1[i])
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		result[j] = s2[i];
		i++;
		j++;
	}
	result[j] = 0;
	return (result);
}

// int	main(void)
// {
// 	char	s1[] = "lorem ipsum";
// 	char	s2[] = "dolor sit amet";
// 	char *result = ft_strjoin(s1, s2);
// 	printf("%s", result);
// }