# How to Run All Programs ?

## a) Fork System Call:

    $ gcc 1_forkSystemCall.c -o fork

    $ ./fork 

###  Sample Output:

    Parent process : 
    Process id is 7675
    Value of x is 6
    Process id of parent is 6441

    Child Process : 
    Process id is 7676
    Value of x is 6
    Process id of parent is 904


## b) Wait System Call:

    $ gcc 2_waitSystemCall.c -o wait

    $ ./wait

### Sample Output:

    Child starts
    Odd Nos: 1 3 5 7 9 
    Child ends

    Parent starts
    Even Nos: 2 4 6 8 10 
    Parent ends


## c) Exec System Call:

    $ gcc 3_execSystemCall.c -o exec

    $ ./exec

### Sample Output:

    Child process
    Wednesday 25 May 2022 05:45:11 PM IST
    Child Terminated

If you get any warning in this program.
It's okay , It's get warning not a compilation error the program work just fine. ;)


## d) Stat System Call:

    $ gcc 4_statSystemCall.c -o stat

    $ ./stat 4_statSystemCall.c

### Sample Output:

    User id : 1000
    Group id : 1000
    Block size : 4096
    Blocks allocated : 8
    Inode no. : 7864391
    Last accessed : Wed May 25 17:27:18 2022
    Last modified : Wed May 25 17:27:18 2022
    File size : 1501 bytes
    No. of links : 1
    Permissions : -rw-r--r--
    File type : Regular

## e) Readdir System Call:

    $ gcc 5_readdirSystemCall.c -o readdir

    $ ./readdir ../02-SystemCall

### Sample Output:

    8_writeSystemCall.c
    7_readSystemCall.c
    .
    5_readdirSystemCall.c
    1_forkSystemCall.c
    readdir
    6_openSystemCall.c
    4_statSystemCall.c
    2_waitSystemCall.c
    ..
    3_execSystemCall.c

    
** This output might not be same for us but make sure that this output and `ls` command output is same. ;))


## f) Open System Call:

    $ gcc 6_openSystemCall.c -o open

    $ ./open test.txt

### Sample Output:
    Press Ctrl+D at end in a new line:
    Hi I am Happy/Sad Programmer ;)

After writing your text press Ctrl + D to exit and save the file make sure that a file name test.txt have that content you gave and ignore warning if happen so .


## g) Read System Call:

    $ gcc 7_readSystemCall.c -o read

    $ read test.txt

### Sample Output:
    Contents of the file test.txt is : 
    Hi I am Happy/Sad Programmer ;)

## h) Write System Call:
     
    $ gcc 8_writeSystemCall.c -o write

    $ ./write test.txt

### Sample Output:
    Press Ctrl+D at end in a new line:
    Hi, This is another Happy/Sad Programmer ;)

After writing your text press Ctrl + D to exit and save the file make sure that a file name test.txt have that content you gave and ignore warning if happen so .