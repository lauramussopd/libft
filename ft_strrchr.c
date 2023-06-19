/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:15:40 by laurmuss          #+#    #+#             */
/*   Updated: 2023/06/19 19:32:22 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	char let;

	let = c;
	ptr = 0;
	while (*str)
	{
		if (*str == let)
		{
			ptr = (char *) str;
		}
		str++;
	}
	if (*str == let)      
	{
        	ptr = (char *)str;
    	}
	return (ptr);
}
