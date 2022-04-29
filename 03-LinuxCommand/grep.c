#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    FILE *fd;
    char str[100];
    char c;
    int i,flag,j,m,k;
    char temp[30];
    if(argc != 3){
        printf("Usage : gcc grep.c -o grep\n");
        printf("Usage : ./grep [search_text] [filename]\n");
        exit(-1);
    }
    fd = fopen(argv[2],"r");
    if(fd == NULL){
        printf("%s is not exist\n",argv[2]);
        exit(-1);
    }
    while(!feof(fd)){
        i=0;
        while (1){
           c = fgetc(fd);
           if(feof(fd)){
               str[i++] = '\0';
               break;
           }
           if(c == '\n'){
               str[i++] = '\0';
               break;
           }
           str[i++] = c;
        }
        if(strlen(str) >=  strlen(argv[1])){
            for(j=0;j<=strlen(str)-strlen(argv[1]);j++){
                for(k=0;k<strlen(argv[1]);k++){
                    temp[k] = str[k+j];
                }
                temp[k] = '\0';
                if(strcmp(temp,argv[1]) == 0){
                    printf("%s\n",str);
                    break;
                }   
            }
        }
    }
    return 0;
}