/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 10:12:39 by dseabela          #+#    #+#             */
/*   Updated: 2018/01/15 14:43:47 by dseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int x;

	x = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		while (power > 0)
		{
			x = x * nb;
			power--;
		}
	return (x);
}
