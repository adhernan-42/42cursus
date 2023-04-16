/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:00:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 19:46:18 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La función ft_memcpy copia 'n' bytes del área de memoria 'src' al área de
** memoria 'dst'. Si 'dst' y 'src' se solapan, el comportamiento es indefinido.
** Devuelve un puntero al área de memoria 'dst'.
*/

void *ft_memcpy(void *dst, const void *src, unsigned int n)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    while (n--)
    {
        *d++ = *s++;
    }

    return dst;
}
