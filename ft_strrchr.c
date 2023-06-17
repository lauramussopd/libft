/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:15:40 by laurmuss          #+#    #+#             */
/*   Updated: 2023/06/17 17:36:27 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = 0;
	while (*str)
	{
		if (*str == c)
		{
			ptr = (char *) str;
		}
		str++;
	}
	if (*str == c)  // Check the last character separately
    	{
        	ptr = (char *)str;
    	}
	return (ptr);
}
