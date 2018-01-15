/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 09:03:23 by dseabela          #+#    #+#             */
/*   Updated: 2018/01/15 09:46:10 by dseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	factorial;
	int x;

	factorial = 1;
	x = 1;
	while (x <= nb)
	{
		factorial = factorial * x;
		x++;
	}
	return (factorial);
}
