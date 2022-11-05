/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:50:03 by beccka            #+#    #+#             */
/*   Updated: 2022/11/04 21:30:42 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{	
	if ((c >= 48 && c <= 57))
		return (8);
	if else (c >= 65 && c <= 91)
		return (8);
	if else (c >= 97 && c <= 122)
		return (8);
	else
		return (0);
}
