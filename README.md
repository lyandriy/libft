# libft

## Project Description

The `libft` project is part of the School 42 curriculum, aimed at reinforcing your understanding of fundamental C programming concepts. The goal of this project is to recreate a standard library of functions, similar to those found in `libc`, which will be used in future projects.

## What It Does

The `libft` library provides a collection of standard C functions that can be reused across various projects. These functions include string manipulation, memory management, list operations, and other utility functions.

## Implementation Details

- **Language**: The project is implemented in C.
- **Function Categories**:
  - **String Manipulation**: Functions to handle and manipulate C strings.
  - **Memory Management**: Functions for dynamic memory allocation and manipulation.
  - **Character Checks**: Functions to check character types and convert cases.
  - **List Operations**: Functions to manage linked lists.
  - **Utility Functions**: Miscellaneous helper functions.
- **Headers**:
  - `#include <stdlib.h>`: For memory allocation.
  - `#include <unistd.h>`: For input/output operations.
  - `#include <string.h>`: For string manipulation.
  - `#include <ctype.h>`: For character type checks and conversions.

### How It Works

1. **String Manipulation**: 
   - Functions such as `ft_strlen`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strncat`, `ft_strdup`, and others to handle various string operations.
2. **Memory Management**:
   - Functions like `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, and memory allocation wrappers such as `ft_calloc`.
3. **Character Checks and Conversions**:
   - Functions such as `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
4. **List Operations**:
   - Functions to create and manipulate linked lists, including `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and `ft_lstmap`.
5. **Utility Functions**:
   - Additional helper functions such as `ft_atoi`, `ft_itoa`, and others.

This project is fundamental for building a strong foundation in C programming and serves as a useful library for future projects at School 42.
