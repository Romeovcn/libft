/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:54:45 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 18:25:38 by rvincent         ###   ########.fr       */
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

char	*get_value(char *result, long int n, int i)
{
	int			power;
	long int	nbr;

	power = 1;
	nbr = n;
	while (n > 0)
	{
		while (nbr > 9)
		{
			nbr = nbr / 10;
			power = power * 10;
		}
		result[i] = nbr + '0';
		n = n - (nbr * power);
		nbr = n;
		power = 1;
		i++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (n == -2147483648)
		return ("-2147483648");
	count = get_size(n);
	result = malloc((count + 1) * sizeof(char));
	if (n < 0)
	{
		result[i] = '-';
		i++;
		n = n * -1;
	}
	get_value(result, n, i);
	result[count] = 0;
	return (result);
}

int	main(void)
{
	int	n = 1054;
	char *result = ft_itoa(n);
	printf("%s", result);
}