/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42kl.edu.my>           +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:10:41 by jhii              #+#    #+#             */
/*   Updated: 2023/10/03 17:10:41 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void print_input(void)
{
	write(1, "input: ", 8);
}

void run_gnl(void)
{
	char *res = get_next_line(0);
	printf("return: %s", res);
}

int main(void)
{
	print_input();
	run_gnl();
	return (0);
}
