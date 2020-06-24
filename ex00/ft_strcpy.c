/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:55:11 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/24 10:03:40 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcpy(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    while(dest[i] != '\0')
     i++;
     while(src[j] != '\0')
     {
         dest[i] = src[j];
         i++;
         j++;
     }
     dest[i] = '\0';
}