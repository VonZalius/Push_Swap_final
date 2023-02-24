/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:06:33 by abarras           #+#    #+#             */
/*   Updated: 2022/11/04 12:50:04 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

/*---------- NBR DE MOTS ----------*/
static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

/*--------- TAILLE DES MOTS ----------*/
static int	ft_size_word(char const *s, char c, int i)
{
	int	t;

	t = 0;
	while (s[i] != c && s[i])
	{
		t++;
		i++;
	}
	return (t);
}

/*---------- BONUS ----------*/
static void	ft_free_split(char **final, int j)
{
	while (j-- > 0)
		free(final[j]);
	free(final);
}

static char	**ft_nop_split(char	**final, int j)
{
	ft_free_split(final, j);
	return (NULL);
}

/*---------- SPLIT ----------*/
char	**ft_split(char const *s, char c)
{
	int		j;
	int		word;
	char	**final;
	int		size;
	int		i;

	i = 0;
	word = ft_count_word(s, c);
	final = (char **)malloc(sizeof(char *) * (word + 1));
	if (!final)
		return (NULL);
	j = -1;
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		final[j] = ft_substr(s, i, size);
		if (!final[j])
			return (ft_nop_split(final, j));
		i += size;
	}
	final[j] = 0;
	return (final);
}

/*static char	*ft_write_split(char *worm, char *save, int k)
{
	int	a;

	a = 0;
	while (k > 0)
	{
		worm[a] = save[a];
		k--;
		a++;
	}
	worm[a] = '\0';
	return (worm);
}

static char	*ft_word_split(char const *s, char c, int i)
{
	int		k;
	char	*worm;
	char	*save;

	k = 0;
	while ((*s != '\0') && (k < i))
	{
		if (*s == c)
			k++;
		s++;
	}
	save = (char *)s;
	k = 0;
	while (*s != '\0' && *s != c)
	{
		k++;
		s++;
	}
	if (k == 0)
		return (NULL);
	worm = (char *)malloc(sizeof(char) * (k + 1));
	if (!worm)
		return (NULL);
	return (ft_write_split(worm, save, k));
}

static int	ft_count_split(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			i++;
			j++;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		i;
	int		h;
	int		v;

	v = ft_count_split(s, c);
	final = (char **)ft_calloc(sizeof(char *), v + 1);
	if (!final || !s)
		return (NULL);
	i = 0;
	h = 0;
	while (i <= (int)ft_strlen(s))
	{
		final[h] = ft_word_split(s, c, i);
		if (final[h] == NULL)
			h--;
		h++;
		i++;
	}
	final[h] = 0;
	return (final);
}*/
/*
int main(int argc,char **argv)
{
	int i = 0;

	argc = 1;
	while (i < 20)
	{
		printf("%s\n", ft_split(argv[1], '-')[i]);
		i++;
	}
}*/
