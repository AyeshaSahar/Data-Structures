#include<iostream>
using namespace std;

int main()
{
	int size,beg,mid,end,i,num;
	cout << "Enter the size of array:\n ";
	cin >> size;
	
	int array[size];
	cout << "Enter the elements of a sorted array:\n";
	
	for(i = 0; i < size ;i++){
		cin >> array[i];}   

   	beg = 0;
   	end = size-1;

   	cout << "\n Enter a value to be searched in an array ";
   	cin >> num;

   	while( beg <= end){
      	mid = (beg+ (end - beg)/2);
      	if(array[mid] == num)	{   
         	cout << "\nItem found at position "<< (mid+1);
			 break;} 	
		else if(num > array[mid]) {
			beg=mid+1;} 
	  	else if (num < array[mid]) {
			end=mid-1;}
		else{
			cout << "Number does not found.";}
	  }
	  return 0;
}
