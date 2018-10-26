#include<iostream>
using namespace std;
			//main
	int main(){
	int i,n;
			//declaring length of array
	
	int arr[100];
			//taking inputs for the length of the array
	
	cout<<"Enter the number of elements in array (1 to 100): ";
	cin>>n;
	cout<<endl;
			//constructing the array from the user inputs by loop
	

	for(i=0;i<n;++i){
	cout<<"Enter the number "<<i+1<<" : ";
	cin>>arr[i];
	}
			//defining condition for largest element
	
	for(i=0;i<n;++i){
		if(arr[0]<arr[i])
		arr[0]=arr[i];
	}
		
	cout<<"The largest element is "<<arr[0]<<endl;
	for(i=0;i<n;++i){
		if(arr[0]>arr[i])
		arr[0]=arr[i];
		}
	cout<<"The smallest element is "<<arr[0]<<endl;
	
	

	
	
	return 0;
 	}
	
