#include<iostream>  
using namespace std;  

int findingSmallest (int[],int);  

int findingSmallest(int list[],int i)  
{  
    int small_ele,position,j;  
    small_ele = list[i];  
    position = i;  
    for(j=i+1;j<10;j++)  
    {  
        if(list[j] < small_ele)  
        {  
            small_ele = list[j];  
            position=j;  
        }  
    }  
    return position;  
}

int main ()  
{  
    int list[10] = {19,6,2,30,52,43,24,37,201,29};  
    int pos,temp,pass=0;  
    cout<<"Input list of elements to be sorted: ";  
    for(int i=0;i<10;i++)  
    {  
        cout<<list[i]<<" ";  
    } 
    for(int i=0;i<10;i++)  
    {  
        pos = findingSmallest (list,i);  
        temp = list[i];  
        list[i] = list[pos];  
        list[pos] = temp; 
        pass++;
    }  
    cout<<"\nSorted list: ";  
    for(int i=0;i<10;i++)  
    {  
        cout<<list[i]<<" ";  
    } 
    cout<<"\nNumber of passes required to sort the array: "<<pass;
    return 0;  
}  
