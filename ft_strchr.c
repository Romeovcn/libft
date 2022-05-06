/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:13:28 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/05 12:13:49 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
	while (*str != c && *str)
		str++;
	if (*str == c)
		return (char *)str;
	return NULL;
}

int main(void)
{
	printf("%s-", strchr("saluuut", 117));
	printf("%s", ft_strchr("saluuut", 117));
}