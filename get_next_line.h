/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:54:13 by matlopes          #+#    #+#             */
/*   Updated: 2023/11/13 16:21:05 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
int		find_current_line(char *str);
char	*read_file(int fd);
char	*return_current_line(char *res);
char	*return_after_sep(char *res);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
