#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op[2];
    printf("Enter the operator:");
    scanf("%s", op);
    
    if(op[0]=='>'){
        if(op[1]=='=')
            printf("Greater than equal to\n");
        else
            printf("Greater than\n");
        
    }
    else if(op[0]=='<'){
        if(op[1]=='=')
            printf("Lesser than equal to\n");
        else
            printf("Lesser than\n");
        
    }
    else if(op[0]=='='){
        if(op[1]=='=')
            printf("Equal to\n");
        else
            printf("Assignment\n");
        
    }
    else if(op[0]=='+'){
        if(op[1]=='+')
            printf("Increment by One\n");
        else if(op[1]=='=')
            printf("Increment\n");
        else
            printf("Arithmetic Plus");
        
    }
    else if(op[0]=='-'){
        if(op[1]=='-')
            printf("Decrement by One\n");
        else if(op[1]=='=')
            printf("Decrement\n");
        else
            printf("Arithmetic Minus");
        
    }
    else if(op[0]=='*'){
        if(op[1]=='=')
            printf("Multiply By\n");
        else
            printf("Arithmetic Multiplication");
        
    }
    else if(op[0]=='/'){
        if(op[1]=='=')
            printf("Divide By\n");
        else
            printf("Arithmetic Division");
        
    }
    else if(op[0]=='%'){
        if(op[1]=='=')
            printf("Modulo By\n");
        else
            printf("Arithmetic Modulus");
        
    }
    else if(op[0]=='|'){
        if(op[1]=='|')
            printf("Logical OR\n");
        else
            printf("Bitwise OR");
        
    }
    else if(op[0]=='&'){
        if(op[1]=='&')
            printf("Logical AND\n");
        else
            printf("Bitwise AND\n");
        
    }
    else if(op[0]=='!'){
        if(op[1]=='=')
            printf("Not equal to\n");
        else
            printf("Bitwise NOT");
        
    }
    
    return 0;
}
