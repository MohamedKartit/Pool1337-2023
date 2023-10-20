/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:49:45 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/04 16:44:22 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	l;

	l = 0;
	count = 0;
	while (l < length)
	{
		if ((*f)(tab[l]))
			count++;
		l++;
	}
	return (count);
}
