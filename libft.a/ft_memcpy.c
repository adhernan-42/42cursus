/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:32:48 by adhernan          #+#    #+#             */
/*   Updated: 2022/10/25 16:37:45 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*pdst;
	const char	*psrc;

	pdst = (char *) dst;
	psrc = (const char *) src;
	if (pdst == NULL && psrc == NULL)
		return (NULL);
	while (n--)
		*(pdst++) = *(psrc++);
	return (dst);
}
