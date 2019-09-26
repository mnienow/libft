/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnienow <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 18:27:32 by mnienow           #+#    #+#             */
/*   Updated: 2019/03/30 18:27:33 by mnienow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isnumber(char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
    {
        if (!ft_isdigit(str[i++]))
            return (0);
    }
    return (1);
}