/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaiga <ksaiga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:45:38 by ksaiga            #+#    #+#             */
/*   Updated: 2021/03/25 20:32:06 by ksaiga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int l, int r, char *num)
{
	write(1, &*num, 5);
	if (l == 98 && r == 99)
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char num[5];
	int l;
	int r;

	l = 0;
	r = 0;
	while (l <= 99)
	{
		while (r <= 99)
		{
			num[0] = '0' + (l / 10);
			num[1] = '0' + (l % 10);
			num[2] = ' ';
			num[3] = '0' + (r / 10);
			num[4] = '0' + (r % 10);
			{
				ft_putchar(l, r, num);
			}
			r++;
		}
		l++;
		r = l + 1;
	}
}
