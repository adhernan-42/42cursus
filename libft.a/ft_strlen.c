/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:00:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 17:46:13 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La función ft_strlen calcula la longitud de la cadena de caracteres
** pasada como argumento, sin contar el carácter nulo de terminación ('\0').
** Devuelve la longitud de la cadena.
*/

unsigned int ft_strlen(const char *str)
{
    unsigned int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    return len;
}
