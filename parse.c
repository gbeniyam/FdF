/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 09:45:07 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/10/08 16:22:19 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * * get next line? Read in files, get x/y/z coordinates from each point.
 * * x = nth number in row without spaces. 
 * * y = row/line
 * * z = value at row,line.
 * *
 * * Hold values on heap, allocate memory based on size of text file.
 * * strlen of each line, multiply by amount of lines (get_next_line to count i
 * * lines).
 * * 
 * * parse paramters, double pointer, fd. main.c opens file, grabs fd and
 * * passes in fd param. 
 * *
 * *  -> **line will be a double array holding parsed information. Main sends
 * *     in double array to be filled, later? pre-parse (find size), then 
 * *     fill in. Maybe avoid using **line for now. Split parse.c into
 * *     pre-parse.c for loading and parse.c for runtime? 
 * * 
 * *  use gnl() to find width of text map, 
 * *  read() to find size of whole text map,
 * *  then divide by gnl() to find row count. 
 * *  - Use strsplit on gnl to find amount of x coordinates
 * *  - atoi to int array.
 * *  cc -I ~/FdF main.c parse.c -L ~/FdF/libft -lft -L ~/FdF/minilibx -lmlx 
 * * -framework OpenGL -framework AppKit
 * *
 * *
 */
#include "fdf.h"
#include <stdio.h>

int		parse(const char *filename, char *array)
{
	int x;
	int y;
	int z;
	int fd;
	int gnl;
	int linecount;
	char *ptr;

	linecount = 0;
	fd = open(filename, O_RDONLY);

	while (gnl != 0)
	{
		gnl = get_next_line(fd, &array);
		linecount++;
	}
	linecount--;
	printf("THIS MANY LINES OMG: %d\n", linecount);
	&ptr = ft_strsplit(array, ' ');
	
	// strsplit, another function to count indices for columns (x points)
	return (0);
}
