/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:10:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 20:05:24 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La función ft_strlcpy copia hasta 'dstsize - 1' caracteres del
** string 'src' a 'dst', añadiendo un '\0' al final. Devuelve el
** tamaño total del string 'src'.
*/

unsigned int ft_strlcpy(char *dst, const char *src, unsigned int dstsize)
{
    unsigned int i;
    unsigned int src_len;

    i = 0;
    src_len = 0;

    while (src[src_len] != '\0')
    {
        src_len++;
    }

    if (dstsize == 0)
    {
        return src_len;
    }

    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    return src_len;
}
