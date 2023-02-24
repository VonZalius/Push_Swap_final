/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:28:22 by abarras           #+#    #+#             */
/*   Updated: 2022/11/02 11:32:31 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

static int	ft_checklen(char const *s1, char const *set, int len, int direction)
{
	int	i;
	int	k;
	int	l;

	k = 0;
	l = 0;
	while (s1[l] != '\0')
	{
		i = 0;
		while (set[i] != '\0')
		{
			if ((set[i] == s1[l] && direction == 0)
				|| (set[i] == s1[len] && direction == 1))
			{
				k++;
				break ;
			}
			i++;
			if (set[i] == '\0')
				return (k);
		}
		len--;
		l++;
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		av;
	int		ap;
	int		i;
	char	*final;

	len = ft_strlen(s1);
	av = ft_checklen(s1, set, len - 1, 0);
	ap = ft_checklen(s1, set, len - 1, 1);
	i = 0;
	if (len - av - ap < 0)
		ap = 0;
	final = (char *)malloc((sizeof(char)) * (len - av - ap + 1));
	if (!final)
		return (NULL);
	while ((len - av - ap) > 0)
	{
		final[i] = s1[i + av];
		i++;
		len--;
	}
	final[i] = '\0';
	return (final);
}
/*
int main(int argc, char **argv)
{
	argc = 1;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
}*/
