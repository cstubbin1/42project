/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:52:34 by marvin            #+#    #+#             */
/*   Updated: 2022/11/22 14:25:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//prints some more characters
void code3(void)
{
    int i;
    char *letter;

    i = 0;
    letter = "abcde";

    while (i < 5)
    {
        printf("%c\n", letter[i]);
        i++;
    }
}

int main()
{
    code3();
}
