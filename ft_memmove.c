/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:50:12 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:54:52 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove( void * destination, const void * source, size_t size )
{
	int	count;

	count = size;
	while (count)
	{
		*(char *)destination = *(char *)source;
		destination++;
		source++;
		count--;
	}
	return (destination - size);
}

// int main(void)
// {
// 	char str[11] = "0123456789";
// 	char dest[11];
// 	ft_memcpy(dest, str, 11);
// 	printf("%s", dest);
// }