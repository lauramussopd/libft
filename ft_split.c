/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:16:27 by laurmuss          #+#    #+#             */
/*   Updated: 2023/06/09 18:45:16 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int  ft_counter(const char *s, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;

	while(s[i])
	{
		if(s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return(count);
}

void	ft_free(char **split,  int num)
{
	while(num > 0)
	{
		num--;
		free(split[num]);
	}
	free (split);
}

/*void ft_init(int *contadores)
{
	cc[0] = 0;
	cc[1] = 0;
	cc
*/
char **ft_split(char const *s, char c)
{
	char **split;
	int start;
	int num;
	int i;

	i = 0;
	num = 0;
	start = 0;
	
	split = ft_calloc((ft_counter(s, c) + 1), sizeof(char *));
	if(!split)
		return NULL;
	while (s[i])
	{	
		if (i > 0 && s[i] != c  && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i+ 1] == c || s[i + 1 ] == '\0'))
		{
			split[num] = ft_substr(s, start, i - start + 1);			
			if (split[num] == NULL)
			{
				ft_free(split, num);
				return (NULL);
			}
			num++;
		}
		i++;
	}
	return(split);
}

/*

int main() {
	char **split;
	int i;
	i = 0;
	split = ft_split("hola que tal", ' ');
	while(split[i])
	{
		printf("La columan %d es: |%s|\n", i, split[i]);
		i++;
	}
}*/
