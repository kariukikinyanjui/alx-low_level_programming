#!/bin/bash
gcc -c _abs.c -o _abs.o
gcc -c _atoi.c -o _atoi.o
gcc -c _isalpha.c -o _isalpha.o
gcc -c _isdigit.c -o _isalpha.o
gcc -c _islower.c -o _islower.o
gcc -c _isupper.c -o _isupper.o
gcc -c _memcpy.c -o _memcpy.o
gcc -c _memset.c -o _memset.o
gcc -c _putchar.c -o _putchar.o
gcc -c _puts.c -o _puts.o
gcc -c _strcat.c -o _strcat.o
gcc -c _strchr.c -o _strchr.o
gcc -c _strcmp.c -o _strcmp.o
gcc -c _strcpy.c -o _strcpy.o
gcc -c _strlen.c -o _strlen.o
gcc -c _strncat.c -o _strncat.o
gcc -c _strncpy.c -o _strncpy.o
gcc -c _strpbrk.c -o _strpbrk.o
gcc -c _strspn.c -o _strspn.o
gcc -c _strstr.c -o _strstr.o
ar rc liball.a _abs.o _atoi.o _isalpha.o _isalpha.o _islower.o _isupper.o _memcpy.o _memset.o _putchar.o _puts.o _strcat.o _strchr.o _strcmp.o _strcpy.o _strlen.o _strncat.o _strncpy.o _strpbrk.o _strspn.o _strstr.o
