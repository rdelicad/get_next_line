/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:51:54 by rdelicad          #+#    #+#             */
/*   Updated: 2023/06/02 19:58:32 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
    int     fd;
    char    *line;

    fd = open("1char.txt", O_RDONLY);
    line = get_next_line(fd);
    while (line != NULL)
    {
        printf("%s\n", line);
        line = get_next_line(fd);
    }
    free(line);
    close(fd);
    
    return (0);
}
