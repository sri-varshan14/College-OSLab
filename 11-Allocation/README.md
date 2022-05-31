# How to Run All Programs ?

## a) First Fit Allocation :

    $ gcc 1_FirstFitAllocation.c && ./a.out

###  Sample Output:

    Enter the number of Holes : 5
    Enter size for hole H0 : 100
    Enter size for hole H1 : 500
    Enter size for hole H2 : 200
    Enter size for hole H3 : 300
    Enter size for hole H4 : 600

    Enter number of process : 4
    enter the size of process P0 : 212
    enter the size of process P1 : 417
    enter the size of process P2 : 112
    enter the size of process P3 : 426

        First fit

    Process	PSize	Hole
    P0	212	H1
    P1	417	H4
    P2	112	H1
    P3	426	Not allocated

    Hole	Actual	Available
    H0	100	100
    H1	500	176
    H2	200	200
    H3	300	300
    H4	600	183

## b) Best Fit Allocation :

    $ gcc 2_BestFitAllocation.c && ./a.out

### Sample Output:
    
    Enter the number of Holes : 5
    Enter size for hole H0 : 100
    Enter size for hole H1 : 500
    Enter size for hole H2 : 200
    Enter size for hole H3 : 300
    Enter size for hole H4 : 600

    Enter number of process : 4
    enter the size of process P0 : 212
    enter the size of process P1 : 417
    enter the size of process P2 : 112
    enter the size of process P3 : 426

        Best fit

    Process	PSize	Hole
    P0	212	H3
    P1	417	H1
    P2	112	H2
    P3	426	H4

    Hole	Actual	Available
    H1	500	83
    H3	300	88
    H2	200	88
    H0	100	100
    H4	600	174
