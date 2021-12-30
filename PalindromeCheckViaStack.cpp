#include<iostream>
#include<string>
#include<stack>
using namespace std;


int main(){
    string string;
    cout<<"Enter a string: ";
    cin>>string;
    stack<char> st;
    for(int i=0;i<string.length();i++){
        st.push(string[i]);
    }
    for(int i=0;i<string.length();i++){
        if(st.top()!=string[i]){
            cout<<"Not a palindrome"<<endl;
            return 0;
        }
        st.pop();
    }
    cout<<"Palindrome"<<endl;
    return 0;
}

