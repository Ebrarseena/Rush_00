/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekucukar <ekucukar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:50:53 by ekucukar          #+#    #+#             */
/*   Updated: 2023/09/03 18:13:03 by ekucukar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_c;
	int	y_c;

	if (x < 1 || y < 1)
		return ;
	y_c = 1;
	while (y_c <= y)
	{
		x_c = 1;
		while (x_c <= x)
		{
			if ((y_c == y || y_c == 1) && (x_c == x || x_c == 1))
				ft_putchar('o');
			else if ((y_c == 1 || y_c == y) && (x_c != 1 || x_c != x))
				ft_putchar('-');
			else if ((y_c != 1 || y_c != y) && (x_c == 1 || x_c == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			x_c++;
		}
		ft_putchar('\n');
		y_c++;
	}
}
