## LIBFT

In this project you have to create your own library which you can use in future projects.
It must contain the following functions (all with ft_ prefix):

1. Functions included in libc
* [atoi]
* [bzero]
* [calloc]
* [isalnum]
* [isalpha]
* [isascii]
* [isdigit]
* [isprint]
* [memchr]
* [memcmp]
* [memcpy]
* [memmove]
* [memset]
* [strchr]
* [strdup]
* [strlcat]
* [strlcpy]
* [strlen]
* [strncmp]
* [strnstr]
* [strrchr]
* [tolower]
* [toupper]

2. Other functions to add tou your library
* [substr](https://github.com/Afromaaaan/42-Journey/blob/main/CommonCore/libft/ft_substr.c)

	Prototype:	char *ft_substr(const char *s, unsigned int start, size_t len);

	Parameters:	s -> Source string to create the substring.
			start -> Index of the char in 's' from where to start the substring.
			len -> Max length of the substring.

	Return values:	The substring.
			NULL if memory allocation fails.

	Authorized 
	Functions:	malloc

	Description:	Allocates memory with malloc(3) and returns the substring from string 's'.
			The substring strats at 'strat' index with the max length of 'len'.

* [strjoin]
	Protoype:	char *ft_strjoin(const char *s1, const char *s2);
	Parameters:	s1 -> First string.
			s2 -> String to add to s1;
	Return values:	The new string.
			NULL if memory allocation fails.
	Authorized
	Functions:	malloc
	Description:	Allcoates memory with malloc(3) and returns the new string created by the
			concatenation of s1 and s2.
