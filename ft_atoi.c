/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:07:29 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/06 14:07:30 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	long int result;
	int i;

	result = 0;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] =='+')
	{
		if (str[i + 1] < '0' || str[i + 1] > '9')
			return 0;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		result = result * -1;
	return result;
}

int main(void)
{
	const char* str = "+9a94343aa4343";
	printf("%d\n", atoi(str));
	printf("%d", ft_atoi(str));
}
