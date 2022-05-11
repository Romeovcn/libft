/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:51:01 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:58:09 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	result = malloc(ft_strlen(s) * sizeof(char) + 1);
	while (s[i])
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}

char	ft_test(unsigned int i, char c)
{
	char	d;

	d = c + 1;
	return (d);
}

// int	main(void)
// {
// 	char const s[] = "salut";
// 	char *result = ft_strmapi(s, &ft_test);
// 	printf("%s", result);
// 	free(result);
// }