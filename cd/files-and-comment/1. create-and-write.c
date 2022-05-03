#include<stdio.h>
#include<stdlib.h>
#define DATA_SIZE 1000

int main(){
    char data[DATA_SIZE];

    FILE *fp;
    fp=fopen("file1.txt","w");
    if(fp==NULL){
        printf("Unable to create file\n");
        return 0;
    }

    printf("Enter the conents of the file: ");
    fgets(data, DATA_SIZE, stdin);
    fputs(data, fp);
    fclose(fp);

    printf("File created and saved successfully\n");

    return 0;
}