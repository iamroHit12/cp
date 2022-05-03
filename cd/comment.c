#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *input;
    
    printf("Enter the length of the string: ");
    scanf("%d", &n);
    
    input=(char*)malloc(n*sizeof(char));
    printf("Enter the string: ");
    scanf("%s", input);
    
    if(input[0]=='/' && input[1]=='/' && input[2]!='/')
        printf("It is a single-line comment\n");
    else if(input[0]=='/' && input[1]=='*' && input[n-2]!='*' && input[n-1]!='/')
        printf("It is a multi-line comment\n");
    else
        printf("It is not a comment\n");

    return 0;
}
