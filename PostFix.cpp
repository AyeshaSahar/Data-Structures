#include<iostream>
using namespace std;

int evalPostfix(){
    int stack[100];
    int top = -1;
    char postfix[100];
    cout<<"Enter postfix expression: ";
    cin>>postfix;
    for(int i=0;postfix[i]!='\0';i++){
        if(postfix[i]>='0' && postfix[i]<='9'){
            stack[++top] = postfix[i]-'0';
        }
        else{
            int a = stack[top--];
            int b = stack[top--];
            switch(postfix[i]){ 
                case '+':
                    stack[++top] = a+b;
                    break;
                case '-':
                    stack[++top] = a-b;
                    break;
                case '*':
                    stack[++top] = a*b;
                    break;
                case '/':
                    stack[++top] = a/b;
                    break;
            }
        }
    }
    return stack[top];
}

int main(){
    cout<<evalPostfix();
    return 0;
}
