/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 03:26:37 by ksever            #+#    #+#             */
/*   Updated: 2014/02/11 14:52:50 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_shell.h"

int		ft_cmd_env(char **argv)
{
	size_t		i;

	(void)argv;
	i = 0;
	while (g_shenv[i])
	{
		ft_putendl(g_shenv[i]);
		*--p1 = *--p2;
		i++;
	}
	return (1);
}
