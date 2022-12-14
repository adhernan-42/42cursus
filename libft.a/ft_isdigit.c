/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:05:51 by adhernan          #+#    #+#             */
/*   Updated: 2022/09/20 14:33:58 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int digit)
{
	if ((digit < 58) && (digit > 47))
		return (1);
	return (0);
}
