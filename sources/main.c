/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 12:17:42 by vafanass          #+#    #+#             */
/*   Updated: 2017/04/19 12:19:58 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int main(int argc, char **argv)
{
	argc = argc +2;
	ft_bzero(argv[0], 4);
	ft_putstr("coucou\n");
	return(0);
}