/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:04:17 by mburson           #+#    #+#             */
/*   Updated: 2016/11/28 13:04:20 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *b, int c, site_t len)
{
	unsigned char	character;
	int				i;

	character = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		b[i] = character;
		i++;
	}
	return (b);
}
