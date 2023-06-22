/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:10:55 by hbalasan          #+#    #+#             */
/*   Updated: 2023/06/21 20:21:48 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <sys/wait.h>
# include "get_next_line.h"

//____________________/ft_split.c/____________________//
char	**ft_split(char const *s, char c);

//_____________________/pipex.c/_____________________//
int     open_file(char *argv, int i);
void    heredoc(char *delimiter, int argc);
// void    process_new(int **pipes, char *argv, char **env, int i, int file, int argc);
void    close_and_free(int **pipes, int i);
//____________________/pipex_utils___________________//
void    error(void);
int     slash_check(char *cmd);
char    *find_path(char *cmd, char **env);
void    execute(char *argv, char **env);
//____________________/utils/________________________//
int	    ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif