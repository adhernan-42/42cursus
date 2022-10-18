/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:39:52 by adhernan          #+#    #+#             */
/*   Updated: 2022/10/04 14:40:30 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int l, size_t len)
{
	unsigned char	*p;

	p = str;
	while (len--)
		*p++ = (unsigned char)l;
	return (str);
}
