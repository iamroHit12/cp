#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp1, *fp2;
    char ch;

    fp1=fopen("file1.txt", "r");
    if(fp1==NULL){
        printf("Unable to open file\n");
        return 0;
    }

    fp2=fopen("file2.txt", "w");
    if(fp2==NULL){
        printf("Unable to open file\n");
        return 0;
    }

    do{
        ch = fgetc(fp1);
        fputc(ch, fp2);
    } while(ch!=EOF);

    fclose(fp1);
    fclose(fp2);

    return 0;
}