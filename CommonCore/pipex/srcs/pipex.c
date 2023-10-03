/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 01:26:07 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/04 00:27:12 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/pipex.h"

//Recibe infile - cmd1 - cmd2 - outfile
//	(Aplica cmd1 sobre infile y al resultado le aplica cmd2 y guarda el resultado en outfile


//Funcionamiento:
//
//pipe()
//	--fork()
//		-- child // cmd1
//			--dup2()
//			--close end[0]
//			execve(cmd1)
//		-- parent // cmd2
//			--dup2()
//			--close end[1]
//			--execve(cm2)
//
//Cosas ha tener en cuenta: 
//
//	-Argumentos correctos
//	-Comandos existentes (access())
//	-Infile y Outfile correctos
//
//	Donde suele haber fallos: 
//
//		-Falta un '/' al final del PATH al comando
//		-Un extremo del pipe no está cerrado
//		-Permisos de los archivos
//
//	Tips:
//
//		-Debug con perror("Error")
//		-Revisar los permisos al utilizar open()

int	main(int argc, char **argv, char **envp)
{
}
