/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   denit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bciss <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 09:23:26 by bciss             #+#    #+#             */
/*   Updated: 2016/04/21 20:21:56 by bciss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh.h"
#include "libft.h"
#include <stdlib.h>

void	denit(void)
{
	ft_putstr("\n\n");
	free_env();
	exit(0);
}