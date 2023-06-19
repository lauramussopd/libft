/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:32:03 by laurmuss          #+#    #+#             */
/*   Updated: 2023/06/19 19:28:27 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//c == '\0'
//0 == 0
//(char) (0 + 255) == 0
//(char) (0 + 255 + 255 + 255)  ==   0
char	*ft_strchr(const char *str, int c)
{
	char  character;

	character = c;
	while (*str && *str != character)
		str++;
	if (!*str && character != '\0')
		return (0);
	return ((char *) str);
}
