/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:52:24 by marvin            #+#    #+#             */
/*   Updated: 2022/11/22 14:25:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//prints the first 5 letters
void code2(void)
{
    int i;
    char *letter;

    i = 0;
    letter = "world";

    while (i < 5)
    {
        printf("%c\n", letter[i]);
        i++;
    }
}

int main()
{
    code2();
}
