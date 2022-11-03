/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:26 by beccka            #+#    #+#             */
/*   Updated: 2022/11/02 23:51:35 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c){
	if((c >= 65 && c <= 91) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}