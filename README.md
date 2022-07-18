# Libft 

### Index:
+ [Function comments](#function-comments)
+ [Mandatory function from the subject + bonus:](#mandatory-function-from-the-subject--bonus)
+ [Custom functions:](#custom-functions) 

I made my own library in which I recreated functions from the standard C library. This is because we have to make everything from scratch in the school I attend. So in further projects we are allowed to reuse this and potentially other projects, like ft_printf and get_next_line. 

In this project we learn about many concepts: creating a static library, using a makefile and a header, data type conversion, dynamic memory allocation, pointers vs arrays, memory functions, function pointers, file descriptors, 2D array or an array of strings, typecasting, guards, structs and linked lists.

## Function comments

In my [header](https://github.com/Raspurrin/libft/blob/main/includes/libft.h) you can find descriptions of all the functions!
If you use a doxygen extension in Vscode you can also see these descriptions whenever you mouse over these functions.

<img src="https://user-images.githubusercontent.com/13866954/179558332-e459556f-263e-4af2-8714-00739c7a3739.png" height="150"/> <img src="https://user-images.githubusercontent.com/13866954/179558352-512cbaf7-ac23-423e-9999-29131349ae67.png" height="150"/>



## Mandatory function from the subject + bonus:
| String | Ascii check | Memory | Linked list | Data type | Function pointer| 
| --- | --- | --- | --- | --- | --- | 
| strchr | isalpha  | memchr |  lstnew | putchar_fd  | strmapi| 
| strrchr | isdigit  | memcmp  |  lstadd_front | putstr_fd | striteri| 
| strncmp | isalnum  |  memset |  lstsize | putendl_fd | |
| strdup | isascii  | bzero | lstadd_back | putnbr_fd | |
| strlcpy | isprint  | memcpy  | lstlast | itoa | |
| substr | toupper | memmove |  strlcat | atoi |
| strjoin |  tolower | calloc |  | strlen| |
|  strtrim | | |  | | |
|  strnstr | | |  | | |
|  strlen | | |  | | |
|  split | | |  | | |

## Custom functions: 
Free_2d_guard, free_2d, abs, atoll, intlen, isspace, pow, realloc, strlen_ignore, wcount, getncount, print_2d_fd, I also include my get_next_line and printf in my library now. 
