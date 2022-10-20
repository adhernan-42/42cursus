/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:32:37 by adhernan          #+#    #+#             */
/*   Updated: 2022/10/20 15:37:07 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*dest;
	const char	*ori;

	dest = str1;
	ori = str2;
	while (n--)
		dest[n] = ori[n];
	return (str1);
}
