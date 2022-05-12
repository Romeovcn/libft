/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:21:04 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/12 14:57:37 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
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
	if (*s1 < 0 && *s1 != *s2)
		return (1);
	if (*s2 < 0 && *s1 != *s2)
		return (-1);
	i = *s1 - *s2;
	return (i);
}

// int main(void)
// {
// 	printf("%d\n", strncmp("t", "", 0));
// 	printf("%d", ft_strncmp("t", "", 0));
// }