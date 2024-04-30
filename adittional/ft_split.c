/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:09:01 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/30 10:03:22 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);


static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	ce;

	i = 0;
	ce = c;
	while (str[i] != '\0')
	{
		if (str[i] == ce)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == ce)
		return ((char *)(str + i));
	return (0);
}

static int      count_wds(char const *s, char c)
{
        int     i;
        int     counter;

        i = 0;
        counter = 0;
        while (s[i] != '\0')
        {
                while (s[i] == c)
                        i++;
                if (s[i] == '\0')
                        return (counter);
                counter++;
                while (s[i] != c && s[i] != '\0')
                        i++;
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


static void *ft_free(char **arr, int elem)
{
    int i;

    i = 0;
    while (i < elem)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
    return (NULL);
}

static char **put_word(char **arr, char const *str, int words, char c)
{
        unsigned int    i;
        int             a;
        int             start;

        i = 0;
        a = 0;
        while (str[i] != '\0' && a < words)
        {
                while (str[i] == c)
                        i++;
                if (str[i] != '\0')
                {
                        start = i;
                        while (str[i] != c && str[i] != '\0')
                                i++;
                        arr[a] = ft_substr(str, start, i - start);
                        if (!(arr[a]))
                        {
                                ft_free(arr, a);
                                return NULL;
                        }
                        a++;
                        while (str[i] == c)
                                i++;
                }
        }
        arr[a] = NULL;
        return arr;
}

char    **ft_split(char const *str, char c)
{
        int             words;
        char    **str_arr;

        if (str[0] == '\0')
                words = 0;
        else
        {
                words = count_wds(str, c);
                if (words == 0)
                        words = 1;
        }
        str_arr = (char **)malloc(sizeof(char *) * (words + 1));
        if (str_arr == NULL)
                return (NULL);
        if (ft_strchr(str, c) == 0 && str[0] != '\0')
        {
                str_arr[0] = ft_substr(str, 0, ft_strlen(str));
                if (!(str_arr[0]))
                        ft_free(str_arr, 0);
                str_arr[1] = NULL;
        }
        else
                put_word(str_arr, str, words, c);
        return (str_arr);
}
/*
int	main(void)
{
	char *str = " holische";
	char	c = ' ';

	int num_words = count_wds(str,c);
	printf("num wds %d\n", num_words);
	char **array = ft_split(str, c);
	printf("la palabra %s\n", array[1]);

	return (0);
}*/
