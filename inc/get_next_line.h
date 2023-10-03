/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:11:30 by jhii              #+#    #+#             */
/*   Updated: 2023/10/03 17:54:38 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

// #define BUFFER_SIZE 500

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int ft_strlen(char *s);
int ft_getnl(char *s);
char *ft_strjoin(char *s1, char *s2);
char *ft_substr(char *s, int start, int len);
char *get_next_line(int fd);
char *get_next_line_bonus(int fd);

#endif
