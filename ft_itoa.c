/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:54:45 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/12 12:50:26 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	get_size(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

void	ft_revstr(char *str, int size)
{
	int		i;
	int		len;
	char	swap;

	i = 0;
	len = size;
	while (i < size / 2)
	{
		swap = str[i];
		str[i] = str[len - 1];
		str[len - 1] = swap;
		i++;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	int		size;
	int		i;

	nbr = n;
	i = 0;
	if (n < 0)
		nbr = nbr * -1;
	size = get_size(n);
	result = malloc((size + 1) * sizeof(char));
	if (n == 0)
		result[i++] = '0';
	if (!result)
		return (NULL);
	while (nbr)
	{
		result[i++] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		result[i++] = '-';
	result[i] = '\0';
	ft_revstr(result, size);
	return (result);
}

// int	main(void)
// {
// 	int	n = 0;
// 	char *result = ft_itoa(n);
// 	printf("%s\n", result);
//	free(result);
// }