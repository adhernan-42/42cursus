/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:40:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 19:51:59 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La función ft_memmove copia 'n' bytes del área de memoria 'src' al área de
** memoria 'dst'. A diferencia de ft_memcpy, esta función maneja correctamente
** la superposición de 'dst' y 'src'. Devuelve un puntero al área de memoria
** 'dst'.
*/

void *ft_memmove(void *dst, const void *src, unsigned int n)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    if (d < s)
    {
        while (n--)
        {
            *d++ = *s++;
        }
    }
    else if (d > s)
    {
        d += n;
        s += n;
        while (n--)
        {
            *--d = *--s;
        }
    }

    return dst;
}
