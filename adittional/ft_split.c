/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:09:01 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/29 10:25:56 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);


static int	count_wds(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
			i++;
		else
		{
			while(s[i] != c)
				i++;
			counter++;
		}
	}
	return (counter);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	while (i < len && s)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

static char	**put_word(char **arr, char const *str, int words, char c)
{
	unsigned int	i;
	size_t	j;
	int		a;

	i = 0;
	j = 0;
	a = 0;
	while(str[i] != '\0' && a < words)
    {
        if(str[i] == c)
            i++;
        else
        {
            while(str[i + j] != c)
                j++;
            arr[a] = ft_substr(str, i, j);
            i = i + j;
            j = 0;
            a++;
        }
    }
	arr[a] = ft_substr(str, 0, 0);
	return (arr);
}

char	**ft_split(char const *str, char c)
{
	int	words;
	char **str_arr;

	words = count_wds(str,c);
	str_arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (str_arr == NULL)
		return (NULL);
	put_word(str_arr, str, words, c);
	return (str_arr);
}

int	main(void)
{
	char *str = "  Esta wea qlia fome del ort ";
	char	c = ' ';

	int num_words = count_wds(str,c);
	printf("num wds %d\n", num_words);

	return (0);
}
