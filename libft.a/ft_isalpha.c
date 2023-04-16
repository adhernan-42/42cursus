/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:26:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 13:33:18 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 La función ft_isalpha verifica si el carácter pasado como argumento es
 alfabético. Devuelve 1 si el carácter es alfabético (mayúscula o minúscula),
 y 0 si no lo es.
*/

int ft_isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
