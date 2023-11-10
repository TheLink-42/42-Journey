/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:09:59 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/10 00:23:01 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../incl/pipex.h"

void	error(int n)
{
	if (!n)
		ft_putstr_fd("\033[31mError: Wrong number of arguments.\n\e[0m", 2);
	else if (n == 1)
		ft_putstr_fd("\033[31mError: Problem in pipe().\n\e[0m", 2);
	else if (n == 2)
		ft_putstr_fd("\033[31mError: Problem in fork().\n\e[0m", 2);
	else if (n == 3)
		ft_putstr_fd("\033[31mError: Problem opening the infile.\n\e[0m", 2);
	else if (n == 4)
		ft_putstr_fd("\033[31mError: Problem opening the outfile.\n\e[0m", 2);
	else if (n == 5)
		ft_putstr_fd("\033[31mError: Command not found.\n\e[0m", 2);
	else if (n == 6)
		ft_putstr_fd("\033[31mError: Problem executing command.\n\e[0m", 2);
	else
		ft_putstr_fd("\033[31mError.\n\e[0m", 2);
	exit(0);
}

static void	free_paths(char **paths)
{
	int	i;

	i = -1;
	while(paths[++i])
		free(paths[i]);
	free(paths[i]);
	free(paths);
}

char	*path_finder(char *cmd, char **envp)
{
	int		i;
	char	*path;
	char	**path_set;

	i = 0;
	while (!ft_strnstr(envp[i], "PATH", 4))
		i++;
	path_set = ft_split(envp[i] + 5, ':');
	i = 0;
	while (path_set[i])
	{
		path = ft_strjoin(path_set[i], "/");
		path = ft_strjoin(path, cmd);
		if (!access(path, F_OK))
		{
			free_paths(path_set);
			return (path);
		}
		free(path);
		i++;
	}
	free_paths(path_set);
	return (NULL);
}

void	solve(char *argv, char **envp)
{
	int		i;
	char	*path;
	char	**cmd;

	i = -1;
	cmd = ft_split(argv, ' ');
	path = path_finder(cmd[0], envp);
	if (!path)
	{
		while (cmd[++i])
			free(cmd[i]);
		free(cmd[i]);
		error(5);
	}
	if (execve(path, cmd, envp) == -1)
		error(6);
}