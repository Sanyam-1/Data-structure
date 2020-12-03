#include<stdio.h>
#include<ctype.h>
int stack[20];
int top = -1;

void push(int x){
    stack[++top] = x;
}

int pop(){
    return stack[top--];
}

int main(){
    char exp[20];
    char *e;
    int a,b,c,num;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0'){
        if(isdigit(*e)){
            num = *e-48;
            push(num);
        }
        else{
            a = pop();
            b = pop();
            switch(*e)
            {
            case '+':
                c=a+b;
                break;
            case '-':
                c=b-a;
                break;
            case '*':
                c=a*b;
                break;
            case '/':
                c=b/a;
                break;
            }
            push(c);
        }
        e++;
    }
    printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
    return 0;
}