/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:29:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 20:13:40 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La función ft_strlcat concatena los primeros 'srcsize' caracteres del
** string 'src' al final de 'dst'. Añade un '\0' al final. Devuelve el
** tamaño total del string resultante.
*/

static unsigned int ft_strlen(const char *str)
{
    unsigned int len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    return len;
}

unsigned int ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
    unsigned int dst_len;
    unsigned int src_len;
    unsigned int i;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if (dstsize <= dst_len)
    {
        return dstsize + src_len;
    }

    i = 0;
    while (src[i] != '\0' && (dst_len + i) < dstsize - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';

    return dst_len + src_len;
}
