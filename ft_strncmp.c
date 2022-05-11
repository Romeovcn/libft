/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:21:04 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:58:22 by rvincent         ###   ########.fr       */
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
	i = *s1 - *s2;
	return (i);
}

// int main(void)
// {
// 	printf("%d-", strncmp("bonjour", "boojour", 3));
// 	printf("%d", ft_strncmp("bonjour", "boojour", 3));
// }