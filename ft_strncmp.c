/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:28:51 by laurmuss          #+#    #+#             */
/*   Updated: 2023/05/31 16:54:37 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2 && --n && *s1 != '\0')
	{
			s1++;
			s2++;
	}
	return (*s1 - *s2);
}
/*
int main()
{
	char str1[15] = "e";
	char str2[15]  = "f";

	int res;
	res =  ft_strncmp(str1, str2, 2);

	if(res < 0){
		printf("string uno e ppiu piccola della due\n");
	} else if(res > 0){
		printf("la due e piu ppiccola della uno\n");
	} else {
		printf("sono uguali\n");
	}
}	
*/
