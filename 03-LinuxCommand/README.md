# How to Run All Programs ?

## a) ls :

    $ gcc ls.c -o ls

    $ ./ls

###  Sample Output:

    1_ls.c              2_grep.c            3_cp.c              4_rm.c              README.md           ls


## b) Grep:

    $ gcc 2_greo.c -o grep

    $ ./grep include 2_grep.c

### Sample Output:

    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>


## c) cp:

    $ gcc 3_cp.c -o cp

    $ ./cp 3_cp.c copy_cp.c

### Sample Output:

    ** NO OUTPUT
    - Make sure that you have copy file of cp.c program in the same location by using ls and cat.

If you get any warning in this program.
It's okay , It's get warning not a compilation error the program work just fine. ;)


## d) rm:

    $ gcc 4_rm.c -o rm

    $ ./rm copy_cp.c

### Sample Output:
    ** NO OUTPUT
    - Make sure that you don't have copy file of cp.c program in the same location by using ls that you create with cp in last program.

If you get any warning in this program.
It's okay , It's get warning not a compilation error the program work just fine. ;)
    

