# How to Run All Programs ?

## a) Fibonacci and Prime Number :

    $ gcc 1_FibonacciAndPrimeNumber.c && ./a.out

###  Sample Output:

    Child process generates Fibonacci series
    0       1       1       2       3       5       8       13      21      34      55      89      144     233     377     610     987     1597    2584    4181    6765    10946   17711   28657   46368
    Parent prints Fibonacci that are Prime
    2       3       5       13      89      233     1597    28657

## b) who | wc -l :

    $ gcc 2_whoWC.c && ./a.out

### Sample Output:
    
    1

    Me may have diffrent output the refers to number of user's in logged in currently.

## c) Chat Messaging :

        For this program we have to diffrentlly , We need to run two program in Two diffrent terminal
        Open two terminal and cd to directory where the code is present.

        Terminal 1:

        $ gcc 3_ChatMessagingServer.c -o cms && ./cms

        Terminal 2:

        $ gcc 3_ChatMessagingClient.c -o cmc && ./cmc

Make sure that you run the Server program(Terminal 1) first.
And then you can send message between two terminal , Just type your message and press enter you message will show up in another teminal ;)
## Sample Output:

    Terminal 1:

        Enter text, ^D to quit:
        hi
        From Client: "Hi"
        How are you?
        From Client: "I am fine"
        Ok, bye
        From Client: "Hmmm, Bye"

    Terminal 2:

        Client ready :
        From Server: "hi"
        Hi
        From Server: "How are you?"
        I am fine
        From Server: "Ok, bye"
        Hmmm, Bye
        Server Disconnected

    After completing your conversation press Ctrl + D in Terminal 1 to quit the program and make sure that you recieve a message in Terminal 2 that
    "Server Disconnected" then your program output is verified.
## d) Shared Memory :

    This Program must be executed in two terminal similar to last program
    Open Two terminal and cd to directory where code is present

    Terminal 1:

        $ gcc 4_SharedMemoryServer.c -o sms && ./sms

    Terminal 2:

        $ gcc 4_SharedMemoryClient.c -o smc && ./smc

Make sure that you run the Server program(Terminal 1) first.
And then you can send message between two terminal , Just type your message and press enter you message will show up in another teminal ;)

### Sample Output:
    
    Terminal 1:

        Shared memory id : 32818
        Writing (a-z) onto shared memory
        Client finished reading

    Terminal 2:

        Accessing shared memory id : 32818
        Shared memory contents:
        abcdefghijklmnopqrstuvwxyz
        
## e) Producer Consumer problem :

    $ gcc 5_ProducerConsumer.c && ./a.out

### Sample Output:

    Enter data for producer to produce : 5
    Enter data for producer to produce : 8

    Enter data for producer to produce : 4
    Consumer consumes data 5
    Enter data for producer to produce : 2
    Consumer consumes data 8
    Enter data for producer to produce : 9
    Consumer consumes data 4
    Consumer consumes data 2
    Consumer consumes data 9