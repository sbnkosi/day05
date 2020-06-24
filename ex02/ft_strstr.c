/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:59:45 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/24 10:00:44 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char     *ft_strstr(char *str, char *to_find)
{
    int i =0;
    char *newstr;
    int v = 0;
    int count = 0;
    if(to_find[0] == '\0')
     return str;
     while(to_find[count] != '\0')
     count++;
    while(str[i] != '\0')
    {
        if(str[i] == to_find[0])
        {
            while(str[i + v] == to_find[v])
               v++;
              if(v == count)
              {
                newstr = str + i;
                return newstr;
              }
            v = 0;
        }
        i++;
    }
}
