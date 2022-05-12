/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:49:44 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/12 20:47:41 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	ft_set_zero(void *result, int total_count)
{
	while (total_count)
	{
		*(char *)result = 0;
		result++;
		total_count--;
	}
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*result;
	int		total_count;

	if (elementCount == 0 || elementSize == 0)
		return (NULL);
	total_count = elementCount * elementSize;
	result = malloc(total_count);
	ft_set_zero(result, total_count);
	return (result);
}

// int	main(void)
// {
// 	int i = 0;
// 	char *str;
// 	str = (char *)calloc(5, 1);
// 	printf("%d", *str);
// 	free(str);
// }