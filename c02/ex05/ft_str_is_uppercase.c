/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:08:07 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/17 22:21:20 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		if (!(str[l] >= 'A' && str[l] <= 'Z'))
			return (0);
		l++;
	}
	return (1);
}
