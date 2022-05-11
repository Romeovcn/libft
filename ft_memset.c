/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:55:12 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:55:16 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t count)
{
	while (count)
	{
		*(char *)ptr = value;
		ptr++;
		count--;
	}
}

// int main(void)
// {
//     char str[11] = "0123456789";
//     ft_memset(str, 65, 3);
//     printf("%s", str);
// }