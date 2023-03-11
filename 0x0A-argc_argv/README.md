**0x0A. C - argc, argv**
![image](https://user-images.githubusercontent.com/121575345/224479107-f63c7880-2562-461c-aef5-24745e504605.png)
![image](https://user-images.githubusercontent.com/121575345/224479131-2cacb7e0-0fd7-4f60-b2e5-b2dcef5fc51d.png)

Resources
[Arguments to main]
(https://intranet.alxswe.com/rltoken/Jip_nI4tv2ybQZ-jV3fqJg)
argc and argv 
https://intranet.alxswe.com/rltoken/31aLwv8qsXuiUZrOk9Djqg
What does argc and argv mean?
https://intranet.alxswe.com/rltoken/A0pzqslB6Z3Y3OV3hJQ6Tw
how to compile with unused variablesh
https://intranet.alxswe.com/rltoken/MkOUE1ndq1UAx9Erk-AVbg
GENERAL
How to use arguments passed to your program
What are two prototypes of main that you know of, and in which case do you use one or the other
How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters
0-whatsmyname.c: Program that prints its name, followed by a new line.
1-args.c: Program that prints the number of arguments passed into it.
2-args.c: Program that prints all arguments it receives.
3-mul.c: Program that multiplies two numbers.
4-add.c: Program that adds positive numbers.
100-change.c: Program that prints the minimum number of coins to make change for an amount of money.
FILES 📑
0-whatsmyname.c

Program that prints its name, followed by a new line.

julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
1-args.c

Program that prints the number of arguments passed into it.

julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 
2-args.c

Program that prints all arguments it receives.

julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args 
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x0A. argc, argv$ 
3-mul.c

Program that multiplies two numbers.

julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
julien@ubuntu:~/0x0A. argc, argv$ 
4-add.c

Program that adds positive numbers.

julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
julien@ubuntu:~/0x0A. argc, argv$ 
100-change.c

Program that prints the minimum number of coins to make change for an amount of money.

julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 100-change.c -o change
julien@ubuntu:~/0x0A. argc, argv$ ./change 
Error
julien@ubuntu:~/0x0A. argc, argv$ ./change 10
1
julien@ubuntu:~/0x0A. argc, argv$ ./change 100
4
julien@ubuntu:~/0x0A. argc, argv$ ./change 101
5
julien@ubuntu:~/0x0A. argc, argv$ ./change 13
3
julien@ubuntu:~/0x0A. argc, argv$
@Author:Johnsen
