# simple_shell

![Image of shell](https://www.google.com/url?sa=i&rct=j&q=&esrc=s&source=images&cd=&ved=2ahUKEwiavpe96obmAhWRtVkKHckSCAoQjRx6BAgBEAQ&url=http%3A%2F%2Fwww.mangadaku.com%2F&psig=AOvVaw31r4tz95sxHGZo_vbWT4Z2&ust=1574821781104449)

## Files:
* [AUTHORS](https://github.com/OscarDRT/simple_shell/blob/master/AUTHORS): This file lists all individuals having contributed content to the repository.
* [man_1_simple_shell](https://github.com/OscarDRT/simple_shell/blob/master/man_1_simple_shell): man of the simple shell.
* [shell.h](https://github.com/OscarDRT/simple_shell/blob/master/shell.h): header file for the simple_shell.
* [shell.c](https://github.com/OscarDRT/simple_shell/blob/master/shell.c): The main function to execute the shell.
* [getline.c](https://github.com/OscarDRT/simple_shell/blob/master/getline.c): read a line from an input stream.
* [strtok.c](https://github.com/OscarDRT/simple_shell/blob/master/strtok.c): separe the words of a string.
* [search.c](https://github.com/OscarDRT/simple_shell/blob/master/search.c): find and execute a function.
* [strcmp.c](https://github.com/OscarDRT/simple_shell/blob/master/strcmp.c): compares two strings.
* [new_process.c](https://github.com/OscarDRT/simple_shell/blob/master/new_process.c): perfom parent an child procress to the shell.
* [lipath.c](https://github.com/OscarDRT/simple_shell/blob/master/lipath.c): makes a linked list of the path.
* [getenv.c](https://github.com/OscarDRT/simple_shell/blob/master/getenv.c): gets variable's value of enviroment.
* [add_node.c](https://github.com/OscarDRT/simple_shell/blob/master/add_node.c): adds a new node at the end of a linked list.
* [concat.c](https://github.com/OscarDRT/simple_shell/blob/master/concat.c): concatenate two strings.

## Requirements:
simple_shell is designed to run in the Ubuntu 14.04 LTS linux environment and to be compiled using the GNU compiler collection v. gcc 4.8.4 with flags-Wall, -Werror, -Wextra, and -pedantic.

## Example:
after compile the file with the next structure
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
run the program;

./hsh
#cisfun$ ls -l
total 284
-rwxr-xr-x 1 paula paula    226 Nov 25 21:28 AUTHORS
-rw-r--r-- 1 paula paula    491 Nov 25 21:28 IntToChar.c
-rw-r--r-- 1 paula paula   1974 Nov 25 22:07 README.md
-rwxr-xr-x 1 paula paula   8632 Nov 25 21:28 a.out
-rw-r--r-- 1 paula paula    626 Nov 25 21:28 add_node.c
-rw-r--r-- 1 paula paula    356 Nov 25 21:28 atoi.c
-rw-r--r-- 1 paula paula    902 Nov 25 21:28 command_options.c
-rw-r--r-- 1 paula paula    675 Nov 25 21:28 concat.c
-rw-r--r-- 1 paula paula    418 Nov 25 21:28 error_msn.c
-rw-r--r-- 1 paula paula    251 Nov 25 21:28 free.c
-rw-r--r-- 1 paula paula    264 Nov 25 21:28 freelist.c
-rw-r--r-- 1 paula paula    490 Nov 25 21:28 getenv.c
-rw-r--r-- 1 paula paula    337 Nov 25 21:28 getline.c
-rwxr-xr-x 1 paula paula 143024 Nov 25 21:28 hsh
drwxr-xr-x 3 paula paula   4096 Nov 25 21:28 hsh.dSYM
-rw-r--r-- 1 paula paula    491 Nov 25 21:28 lipath.c
-rw-r--r-- 1 paula paula     15 Nov 25 21:28 man_1_simple_shell
-rw-r--r-- 1 paula paula   2070 Nov 25 21:28 new_process.c
-rw-r--r-- 1 paula paula    330 Nov 25 21:28 print_node.c
-rwxr-xr-x 1 paula paula   9104 Nov 25 21:28 prueba
-rw-r--r-- 1 paula paula    257 Nov 25 21:28 putchar.c
-rw-r--r-- 1 paula paula    651 Nov 25 21:28 search.c
-rwxr-xr-x 1 paula paula  14224 Nov 25 21:28 shell
-rw-r--r-- 1 paula paula    761 Nov 25 21:28 shell.c
drwxr-xr-x 3 paula paula   4096 Nov 25 21:28 shell.dSYM
-rw-r--r-- 1 paula paula   1160 Nov 25 21:28 shell.h
-rw-r--r-- 1 paula paula    282 Nov 25 21:28 strcmp.c
-rw-r--r-- 1 paula paula    210 Nov 25 21:28 strlen.c
-rw-r--r-- 1 paula paula    539 Nov 25 21:28 strtok.c
-rw-r--r-- 1 paula paula     16 Nov 25 21:28 test_ls_2
#cisfun$ exit

