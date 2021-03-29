/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaiga <ksaiga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 20:23:58 by ksaiga            #+#    #+#             */
/*   Updated: 2021/03/29 20:28:12 by ksaiga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int tmp;

	a = 0;
	b = 0;
	while (b < size - 1)
	{
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				tmp = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = tmp;
			}
			a++;
		}
		a = 0;
		b++;
	}
}
