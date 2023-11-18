# 42 Get_next_line

## MANDATORY

Protoypr: char	*get_next_line(int fd);
Write a function that returns a line read from a file descriptor.

*	Calling the function repeatedly (for example using a loop), will let you read the whole file the file descriptor is pointing to, line by line.
*	The function should return the line it just read. In case of error or end of file, it should return NULL.
*	It should work both for an external file and stdin.
*	The returned line should contain the `'\n'` except at the eof.
*	You should be able to compile with `-D BUFFER_SIZE=xx`, which will determine the size of the buffer your get_next_line should use to read.
* It is considered to have an undefined behaviour when the file has been changed in between calls when read() has not reached the end of the file or when it reads a binary file.

### TIP: Learn what a static variable is and how to use them.

## BONUS

*	Make it work with only one static variable.
*	Make it work for several files at the same time with out messing the information between each of them.
