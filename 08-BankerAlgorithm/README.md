# How to Run All Programs ?

## a) Banker Algorithm :

    $ gcc BackerAlgorithm.c && ./a.out

###  Sample Output:

    Enter the number of processes in a system : 3
    Enter the number of resources in a system : 3
    Enter no. of instances of resource R1 :10
    Enter no. of instances of resource R2 :7
    Enter no. of instances of resource R3 :7
    Enter the allocation matrix :
    3 2 1
    1 1 2
    4 1 2
    Enter the maximum matrix :
    4 4 4
    3 4 5
    5 2 4
    pocess P1
    allocated 3	maximum 4	need 1	
    allocated 2	maximum 4	need 2	
    allocated 1	maximum 4	need 3	
    _________________________
    pocess P2
    allocated 1	maximum 3	need 2	
    allocated 1	maximum 4	need 3	
    allocated 2	maximum 5	need 3	
    _________________________
    pocess P3
    allocated 4	maximum 5	need 1	
    allocated 1	maximum 2	need 1	
    allocated 2	maximum 4	need 2	
    _________________________

    Availability R1 2	R2 3	R3 2	
    ____________
    safe sequence
    P3 	 Availability R1 6	R2 4	R3 4	
    P1 	 Availability R1 9	R2 6	R3 5	
    P2 	 Availability R1 10	R2 7	R3 7	