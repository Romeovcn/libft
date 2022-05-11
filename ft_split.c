/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:50:34 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 11:56:33 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	check_c(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

int	get_array_size(char const *str, char charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (check_c(str[i], charset) && str[i])
			i++;
		if (!check_c(str[i], charset) && str[i])
			count++;
		while (!check_c(str[i], charset) && str[i])
			i++;
	}
	return (count);
}

char	*get_next_word(char const *str, char charset)
{
	char	*word;
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (!check_c(str[count], charset))
		count++;
	word = malloc((count + 1) * sizeof(char));
	while (!check_c(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**result;

	i = 0;
	count = get_array_size(s, c);
	result = malloc((count + 1) * sizeof(char *));
	while (*s)
	{
		while (*s && check_c(*s, c))
			s++;
		if (*s && !check_c(*s, c))
		{
			result[i] = get_next_word(s, c);
			i++;
		}
		while (*s && !check_c(*s, c))
			s++;
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char **result = ft_split("-o-salut--tu--vas-bien--", '-');
// 	printf("%s ", result[0]);
// 	printf("%s ", result[1]);
// 	printf("%s ", result[2]);
// 	printf("%s ", result[3]);
// 	printf("%s", result[4]);
// }