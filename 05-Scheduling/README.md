# How to Run All Programs ?

## a) FCFS Scheduling :

    $ gcc 1_FCFS.c -o FCFS && ./FCFS

###  Sample Output:

    Enter no. of process : 5
    Burst time for process P1 (in ms) : 10
    Burst time for process P2 (in ms) : 3
    Burst time for process P3 (in ms) : 21
    Burst time for process P4 (in ms) : 19
    Burst time for process P5 (in ms) : 9

    FCFS Scheduling

    ----------------------------
    Process B-Time T-Time W-Time
    ----------------------------
    P1       10     10      0
    P2        3     13     10
    P3       21     34     13
    P4       19     53     34
    P5        9     62     53
    ----------------------------

    Average waiting time : 22.00ms
    Average turn around time : 34.40ms


    GANTT Chart
    -------------------------------------------------------------------------
    |     P1    | P2 |          P3          |         P4         |    P5    |
    -------------------------------------------------------------------------
    0          10   13                     34                   53         62

## b) SJF Scheduling:

    $ gcc 2_SJF.c -o SJF && ./SJF

### Sample Output:
    
    Enter no. of process : 4
    Burst time for process P1 (in ms) : 10
    Burst time for process P2 (in ms) : 20
    Burst time for process P3 (in ms) : 30
    Burst time for process P4 (in ms) : 5

    SJF Scheduling

    ----------------------------
    Process B-Time T-Time W-Time
    ----------------------------
    P4        5      5      0
    P1       10     15      5
    P2       20     35     15
    P3       30     65     35
    ----------------------------

    Average waiting time : 13.75ms
    Average turn around time : 30.00ms


    GANTT Chart
    --------------------------------------------------------------------------
    |  P4  |     P1    |          P2         |               P3              |
    --------------------------------------------------------------------------
    0      5          15                    35                              65

## c) Priority Scheduling:

    $ gcc 3_Priority.c -o Priority && ./Priority

### Sample Output:

    Enter no. of process : 4
    Burst time for process P1 (in ms) : 10
    Priority for process P1 : 2
    Burst time for process P2 (in ms) : 20
    Priority for process P2 : 1
    Burst time for process P3 (in ms) : 30
    Priority for process P3 : 4
    Burst time for process P4 (in ms) : 40
    Priority for process P4 : 3

            Priority Scheduling

    --------------------------------------
    Process B-Time Priority T-Time W-Time
    --------------------------------------
    P2       20      1       20       0
    P1       10      2       30      20
    P4       40      3       70      30
    P3       30      4      100      70
    --------------------------------------

    Average waiting time : 30.00ms
    Average turn around time : 55.00ms


    GANTT Chart
    -------------------------------------------------------------------------------------------------------------
    |          P2         |     P1    |                    P4                   |               P3              |
    -------------------------------------------------------------------------------------------------------------
    0                    20          30                                        70                              100

## d) Round Robin Scheduling:

    $ gcc 4_RRS.c -o RRS && ./RRS

### Sample Output:
    
    
    
