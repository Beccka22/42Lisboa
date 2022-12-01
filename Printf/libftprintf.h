/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:29:08 by rneves-s          #+#    #+#             */
/*   Updated: 2022/12/01 00:55:06 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include<stdlib.h>
# include<stdio.h>

/*                        
args;    	# arg to print out                    
wdt;        # width                
prc;        # precision              
zero;       # zero padding               
pnt;        # .     
dash;       # -               
tl;         # total_length (return value)              
sign;       # pos or neg number               
is_zero;    # is number zero                 
perc;       # %               
sp;         # space flag ' '            
*/
typedef struct s_print
{
	va_list	args;
	int		wdt;
	int		prc;
	int		zero;
	int		pnt;
	int		dash;
	int		tl;
	int		sign;
	int		is_zero;
	int		perc;
	int		sp;
}	t_print;

#endif