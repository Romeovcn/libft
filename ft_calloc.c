/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:49:44 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:49:44 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	int	*value;
	int	i;

	i = 0;
	value = malloc(elementCount * elementSize);
	while (elementCount)
	{
		printf("%d\n", i + 1);
		value[i] = '\0';
		i++;
		elementCount--;
	}
	return (value);
}

// int	main(void)
// {
// 	int i = 0;
// 	char *pointer = (char *)ft_calloc(10, sizeof(char));
// 	// char *pointer = malloc(10);

// 	pointer[2] = 'r';
// 	while (i < 10)
// 	{
// 		printf("%c - %d\n", pointer[i], i + 1);
// 		i++;
// 	}
// }