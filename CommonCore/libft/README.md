## LIBFT

In this project you have to create your own library which you can use in future projects.
It must contain the following functions with the prefix `ft_`:

## 1. Functions included in libc
- **atoi**					
- bzero
- isalnum				
- isalpha
- isascii				
- isdigit
- isprint				
- memchr
- memcmp				
- memcpy
- memmove				
- memset
- strchr				
- strlcat
- strlcpy				
- strlen
- strncmp				
- strnstr
- strrchr				
- tolower
- toupper


You may use malloc for these functions:

- strdup
- calloc


## 2. Other functions to add tou your library
* **substr**

	**Prototype**:	char *ft_substr(const char *s, unsigned int start, size_t len);

	**Parameters**:	`s` -> Source string to create the substring.
		`start` -> Index of the char in `s` from where to start the substring.
		`len` -> Max length of the substring.

	**Return Values**:	The substring.
			NULL if memory allocation fails.

	**Authorized 
	Functions**:	malloc

	**Description**:	Allocates memory with malloc(3) and returns the substring from string `s`.
			The substring strats at `strat` index with the max length of `len`.




* strjoin


	**Protoype**:	char *ft_strjoin(const char *s1, const char *s2);

	**Parameters**:
 			 `s1` -> First string.
 			 `s2` -> String to add to s1;

	**Return Values**:	The new string.
			NULL if memory allocation fails.

	**Authorized
	Functions**:	malloc

	**Description**:	Allcoates memory with malloc(3) and returns the new string created by the
			concatenation of s1 and s2.



* strtrim

	**Prototype**:	char *ft_strtrim(const char *s1, const char *set);

	**Parameters**:	`s1` -> String to be trimmed.
			`set` -> Set of characters to trim.

	**Return Values**:	The trimmed string.
			NULL if memory allocation fails.

	**Authorized
	Functions:**:	malloc

	**Description**:	Remove every character of string `set` from the beginning and end of
			the sting `s1`. The resulting string must be allocated with malloc(3).



* split

	**Prototype**:	char **ft_split(const char *s, char c)

	**Parameters**:	`s` -> The string to be divided.
			`c` -> character to use as delimitator.

	**Return Values**:	An array of the strings obtained by the resulting division.
			NULL if memory allocation fails.

	**Authorized
	Functions**:	malloc, free

	**Description**:	Allocate a string array (using malloc(3)) and store the result of dividing
			the string `s` into substrings using the character `c` as delimitator.
			The array must end with NULL pointer.
