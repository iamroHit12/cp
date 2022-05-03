#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *input;
    
    printf("Enter the length of the identifier: ");
    scanf("%d", &n);
    
    input=(char*)malloc(n*sizeof(char));
    printf("Enter the identifier: ");
    scanf("%s", input);
    
    if(!((input[0]>='a' && input[0]<='z') || (input[0]>='A' && input[0]<='Z') || input[0]=='_')){
        printf("It is not an identidier");
        return 0;
    }
    
    for(int i=1; i<n; i++){
        if(!((input[i]>='a' && input[i]<='z') || (input[i]>='A' && input[i]<='Z') || (input[i]>='0' && input[i]<='9') || input[i]=='_')){
            printf("It is not an identidier");
            return 0;
        }
    }

    printf("It is an identidier");
    return 0;
}
