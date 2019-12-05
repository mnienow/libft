/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_word_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnienow <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:50:19 by mnienow           #+#    #+#             */
/*   Updated: 2019/12/05 19:50:22 by mnienow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_arr_word_count(char **arr, int args)
{
	int		row;
	int		ch;
	int		count;
	size_t	len;

	row = 0;
	count = 0;
	while (row < args)
	{
		ch = 0;
		len = ft_strlen(arr[row]);
		while (ch < len)
		{
			if (!ft_isspace(arr[row][ch]) && ch < len)
			{
				while (!ft_isspace(arr[row][ch]) && ch < len)
					ch++;
				count++;
			}
			ch++;
		}
		row++;
	}
	return (count);
}
