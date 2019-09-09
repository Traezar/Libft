#  Libft
This Library is the first project of the 42 cursus. 42 has a rule in which you are not allowed to use code you did not write. Libft stands for Library Forty-Two. I assume:)
 
Disclaimer : THIS WILL NOT WORK ON WINDOWS. 
 
## List of functions implemented

| Boolean Checks | Transformation |List|Memory|String|String|String|
|---|---|---|---|--------|-------|------|
|ft_isalnum|ft_tolower|ft_lstadd|ft_memalloc|ft_putchar_fd|ft_strcat|ft_strlcat|ft_strrchr|
|ft_isalpha|ft_toupper|ft_lstdel|ft_memccpy|ft_putchar|ft_strchr|ft_strlen|ft_strsplit|
|ft_isascii|ft_bzero|ft_lstdelone|ft_memchr|ft_putendl_fd|ft_strclr|ft_strmap|ft_strstr|
|ft_isdigit|ft_atoi|ft_lstiter|ft_memcmp|ft_putendl|ft_strcmp|ft_strcpy|ft_strmapi|ft_strsub|
|ft_isprint|ft_itoa|ft_lstmap|ft_memcpy|ft_putnbr_fd|ft_strdel|ft_strncat|ft_strtrim|
|||ft_lstnew|ft_memdel|ft_putnbr|ft_putstr_fd|ft_strdup|ft_strncmp|ft_strncpy|
||||ft_memmove|ft_putstr|ft_strequ|ft_strnequ|
||||ft_memset||ft_striter|ft_striteri|ft_strnew|
||||||ft_strjoin|ft_strnstr|


### Getting Started
This repo has a Makefile included.

The Makefile has the following commands:
- `make` this compiles the binaries to object files, then uses the object files to compile the `Libft.a`:  Library.
- `make clean` : This removes just the directory containing the object files
- `make fclean` : This executes ` make clean` and removes the Libft.a file.
- `make re` : This executes `make fclean` and then recompiles using `make`

To get started simply type `make` then hit `Enter`

Your shell, should output  `libft compiled`.

## Licensing
"The code in this project is licensed under MIT license."
