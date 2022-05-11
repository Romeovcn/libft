/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:37:42 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:53:38 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memchr(const void *memoryBlock, int c, size_t size)
{
	while (size)
	{
		if (*(char *)memoryBlock == c)
			return ((char *)memoryBlock);
		size--;
		memoryBlock++;
	}
	return (NULL);
}

// int main(void)
// {
//     char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//     const unsigned int size = 10;
// 	char *adress = ft_memchr( data, 50, size );
// 	printf("%d", *adress);
// }