#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;

    FILE *fp;
    fp=fopen("file1.txt","r");
    if(fp==NULL){
        printf("Unable to open file\n");
        return 0;
    }

    do{
        ch=fgetc(fp);
        printf("%c", ch);
    } while(ch!=EOF);

    printf("\nFile read successfully\n");

    return 0;
}