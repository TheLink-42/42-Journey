/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 01:26:43 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/09 23:44:43 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <errno.h>
# include <string.h>
# include <sys/types.h>
# include <sys/wait.h>

void	error(int n);
char	*path_finder(char *cmd, char **envp);
void	solve(char *argv, char **envp);

#endif
