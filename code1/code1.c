/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:52:21 by marvin            #+#    #+#             */
/*   Updated: 2022/11/22 14:24:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Code that prints a character
void code1(void)
{
    int i;
    char *letter;

    i = 0;
    letter = "hello";

    while (i < 5)
    {
        printf("%c\n", letter[i]);
        i++;
    }
}

int main()
{
    code1();
}
