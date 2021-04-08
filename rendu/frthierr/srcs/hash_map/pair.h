/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:51:18 by frthierr          #+#    #+#             */
/*   Updated: 2021/04/08 10:44:29 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PAIR_H

# define	PAIR_H

#include <string.h>
#include "stdlib.h"

typedef struct	s_pair {
	char	*key;
	char	*value;
}				t_pair;

void			init_pair(t_pair *pair, char *line);

#endif