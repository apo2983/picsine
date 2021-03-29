/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaiga <ksaiga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 20:18:05 by ksaiga            #+#    #+#             */
/*   Updated: 2021/03/29 20:22:51 by ksaiga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int b;
	int tab_sub[size];

	a = 0;
	b = 1;
	while (a < size)
	{
		tab_sub[a] = tab[a];
		a++;
	}
	a = 0;
	while (size - b >= 0)
	{
		tab[a] = tab_sub[size - b];
		a++;
		b++;
	}
}
