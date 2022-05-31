# How to Run All Programs ?

## a) Deadlock Prevention :

    $ gcc DeadLockPrevention.c && ./a.out

###  Sample Output:

    Deadlock Detection Algo
    Enter the no of Processes	3
    Enter the no of resource instances	3
    Enter the Max Matrix
    3 6 0
    4 3 3
    3 4 4
    Enter the Allocation Matrix
    3 3 3
    2 0 3
    1 2 4
    Enter the available Resources
    1 2 0
    Process	 Allocation	 Max	 Available	
    P1	 3 3 3 		3 6 0 	1 2 0
    P2	 2 0 3 		4 3 3 	
    P3	 1 2 4 		3 4 4 	

    System is in Deadlock and the Deadlock process are
    P0	P1	P2		