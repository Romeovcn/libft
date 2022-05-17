/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:50:34 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 18:13:25 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int	check_c(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static int	get_array_size(char const *str, char charset)
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

static char	*get_next_word(char const *str, char charset)
{
	char	*word;
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[count] && !check_c(str[count], charset))
		count++;
	word = malloc((count + 1) * sizeof(char));
	if (word == NULL)
		return (0);
	while (str[i] && !check_c(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
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
	if (result == NULL)
		return (0);
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
	result[i] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char **result = ft_split("lorem ipsum dolor sit amet,
// 			consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
// 	printf("\n\n");
// 	printf("%s\n", result[0]);
//  	printf("%s\n", result[1]);
//  	printf("%s\n", result[2]);
// 		printf("%s\n", result[3]);
// 		printf("%s\n", result[4]);
// 		printf("%s\n", result[5]);
// 		printf("%s\n", result[6]);
// 		printf("%s\n", result[7]);
// 		printf("%s\n", result[8]);
// 	rintf("%s\n", result[9]);
// 		printf("%s\n", result[10]);
//  	printf("%s\n", result[11]);
// 	free(result);
// }