/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:46:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 17:26:39 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La función ft_isprint verifica si el carácter pasado como argumento es
** un carácter imprimible ASCII, excluyendo el carácter de espacio (32-126).
** Devuelve 1 si el carácter es imprimible, y 0 si no lo es.
*/

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}
