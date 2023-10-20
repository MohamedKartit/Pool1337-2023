/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:54:55 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/17 14:55:11 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		if (str[l] >= 'A' && str[l] <= 'Z')
			str[l] = str[l] + 32;
		l++;
	}
	return (str);
}
