/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:24:45 by laurmuss          #+#    #+#             */
/*   Updated: 2023/06/17 15:05:18 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
    char c = 'A';
    int fileDescriptor = 1;

    ft_putchar_fd(c, fileDescriptor);

    return 0;
}
*/
