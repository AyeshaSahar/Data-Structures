#include <iostream>

using namespace std;

int MAX_SIZE = 10, top= MAX_SIZE-1, stack[10] = { 1,2,3,4,5,6,7,8,9};  

void push() {
	int value;
    if(top > MAX_SIZE){
   		cout << "\nStack is Full!!!";
    }
    else {
        cout << "\nEnter The Value to be pushed : ";
        cin>>value;
        cout << "\nPosition : " << top << ", Pushed Value  :" << value;
        stack[top++] = value;
        }
}

void pop() {
   if(top == 0)
   		cout<<"Stack is Empty!!!"<<endl;
   else {
   	    --top;
        cout<<"The popped element is "<< stack[top] <<endl;
   }
}

void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--){
      	cout<<stack[i]<<" ";
      	cout<<endl;	
	  }
   } 
   else{
   		cout<<"Stack is empty";
   }
}

int main() {
   int ch; 
   cout<< "\n\t\t\t\tMain Menu"<<endl;
   cout<<"\t\t1. Push"<<endl;
   cout<<"\t\t2. Pop"<<endl;
   cout<<"\t\t3. Display whole stack"<<endl;
   cout<<"\t\t4. Exit"<<endl;
   do {
      cout<<"\n\t\tEnter your choice: ";
      cin>>ch;
      switch(ch) {
         case 1: {
            push();
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"\n\t\tExited Program!"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
