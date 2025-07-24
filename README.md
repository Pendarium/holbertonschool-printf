# README of project Printf for Holberton's school

<img alt="printfC" width="250" src="https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExMWc3bmFsM3U2MGh0NWNwOGV1eWJteHU2Z25wcjVxZ3B4aHh2NDFycyZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/YYW0hHizzIOrlhimPG/giphy.gif" style="display: block; margin-left: auto; margin-right: auto;">

\
\
Personal rewrite of the `printf` function in C language, as part of the Holberton School curriculum.

## 📘 Description

This project is a custom implementation of the printf function in C, developed as part of the Holberton curriculum.\
It supports multiple format specifiersand prints the formatted string to standard output, returning the number of characters printed.
| Specifier | Description                              |
|-----------|------------------------------------------|
| `%c`      | Prints a single character                |
| `%s`      | Prints a string                          |
| `%d`      | Prints a decimal (base 10) integer       |
| `%i`      | Same as `%d`, prints an integer          |
| `%%`      | Prints a literal percent sign `%`        |

## 🧭 Index

1 - [⚙️ Cloning and Compilation](#-cloning)\
2 - [📚 Files in Repository](#-files)\
3 - [📄 Man Page](#-man-page)\
4 - [ 🗺️ Flowchart](#-flowchart)\
5 - [🧪 Tests](#-tests)\
6 - [📁 Project Structure](#-structure-du-projet)\
7 - [👥 Authors](#-authors)\
8 - [📜 Licence](#-licence)


## ⚙️ Cloning and Compilation <a id=-cloning></a>

| cloning |CMD|
|-----------------------|-------------------------------------------------------|
| `Cloning` | `git clone https://github.com/Pendarium/holbertonschool-printf.git` |



| compilation |CMD|
|-----------------------|-------------------------------------------------------|
| `Compile with` | `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c` |

| Run |CMD|
|-----------------------|-------------------------------------------------------|
| `To run:` | `./a.out` |



## 📚 Files in Repository <a id="-files"></a>

| File | Description |
|-----------------------|-------------------------------------------------------|
| `main.h` | Header file containing function prototypes |
| `_printf.c` | Main function that parses and prints |
| `_putchar.c` | Contain the function to print |
| `_strlen.c` | Contains the function to calculate the length |
| `_print_numbers.c` | Contains the fonction to print numbers |


## 📋 Man page <a id="-man-page"></a>

A custom manual is provided in the file `man_3_printf`. It describes the usage, arguments, and return value of the `_printf` function.

To view the manual in your terminal:

| Run |CMD|
|-----------------------|-------------------------------------------------------|
| `To run:` | `man ./man_3_printf` |


## 🗺️ Flowchart <a id="-flowchart"> </a>
![Flowchart of _printf logic](https://github.com/Pendarium/holbertonschool-printf/blob/main/printf-Flowchart.drawio.png)

## 🧪 Tests <a id="-tests"></a>


## 📁 Project Structure <a id="-structure-du-projet"></a>

├── _printf.c\
├── _putchar.c\
├── _puts.c\
├── _strlen.c\
├── main.c\
├── main.h\
├── man_3_printf\
└── README.md



## 👥 Authors <a id="-authors"></a>
This project was collaboratively developed by Holberton students as a peer programming exercise.\
\
**Thomas SORLI** https://github.com/Pendarium \
**Cécile LAROCHE** https://github.com/CecileLAROCHE

## 📜 License <a id="-licence"></a>

This project is for educational purposes only as part of Holberton School.