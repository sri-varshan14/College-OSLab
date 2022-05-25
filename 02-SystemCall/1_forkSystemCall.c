#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
    pid_t pid;
    int x=5;
    pid = fork();
    x++;
    if(pid < 0){
        printf("Process creation error");
        exit(-1);
    }
    else if(pid == 0){
        printf("\nChild Process : \n");
        printf("Process id is %d\n",getpid());
        printf("Value of x is %d\n",x);
        printf("Process id of parent is %d\n",getppid());
    }
    else{
        printf("\nParent process : \n");
        printf("Process id is %d\n",getpid());
        printf("Value of x is %d\n",x);
        printf("Process id of parent is %d\n",getppid());
    }
    return 0;
}