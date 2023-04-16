/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:40:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 17:54:22 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La función ft_memset llena los primeros 'n' bytes del área de memoria
** apuntada por 's' con el valor constante 'c'.
** Devuelve un puntero al área de memoria 's'.
*/

void *ft_memset(void *s, int c, unsigned int n)
{
    unsigned char *ptr = (unsigned char *)s;

    while (n--)
    {
        *ptr++ = (unsigned char)c;
    }

    return s;
}