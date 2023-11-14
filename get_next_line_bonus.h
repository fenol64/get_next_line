/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:54:13 by matlopes          #+#    #+#             */
/*   Updated: 2023/11/14 14:50:49 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef MAX_FD
#  define MAX_FD 42
# endif

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
