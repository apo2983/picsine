/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaiga <ksaiga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:00:58 by ksaiga            #+#    #+#             */
/*   Updated: 2021/03/26 17:11:54 by ksaiga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	change(unsigned int nb, int count, int back_count, char *num)
{
	while (nb != 0)
	{
		num[count] = '0' + (nb % 10);
		nb /= 10;
		count++;
	}
	back_count = count - 1;
	while (back_count >= 0)
	{
		num[count] = num[back_count];
		ft_putchar(num[count]);
		count++;
		back_count--;
	}
}

void	ft_putnbr(int nb)
{
	unsigned	nnb;
	int			count;
	int			back_count;
	char		num[20];

	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nnb = -1 * nb;
		change(nnb, count, back_count, num);
	}
	else if (nb > 0)
	{
		change(nb, count, back_count, num);
	}
	else
	{
		ft_putchar('0');
	}
}
