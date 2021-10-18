/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:32:31 by ivloisy           #+#    #+#             */
/*   Updated: 2021/10/18 01:51:33 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include "./libft/libft.h"
# include <signal.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 422
# endif

typedef struct s_sig
{
	int		c;
	int		bit;
	char	str[BUFFER_SIZE];
	int		i;
}	t_sig;

#endif