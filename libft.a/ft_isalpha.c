/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:40:39 by adhernan          #+#    #+#             */
/*   Updated: 2022/09/15 17:17:17 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * DESCRIPTION
 *     The isalpha() function tests whether a character is an alphabetic letter,
 *     i.e., a letter of the alphabet in any case.
 *
 * RETURN VALUES
 *     The isalpha() function returns zero if the character tests false and
 *     returns non-zero if the character tests true.
 */
int isalpha(int c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
