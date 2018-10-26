#include<iostream>
using namespace std;
			//main
	int main(){
			//defining size of arrow
	int a[20];
	int i,n,j,temp;
			//asking user for the size of the arrow
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
			//asking users for the values of the elments of array
	cout<<"\nEnter the values:\n";
			//connstructing a loop for defing the sort out version of array
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-1;j++)
	{
	if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
	}
			//printing the sorted array
	cout<<"Sorted array:\n";
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<"\n";
	}
			//constructing a couple of conditions to check if the size of the array is even or odd
			//if the size is even
	
	if (n%2==0){
	cout<<"The median of the array is "<<a[(n/2)-1]<<"and"<<a[n/2]<<endl;
	}
			//if the size is odd
	else{
	cout<<"The median is"<<a[n/2]<<endl;
	}
	return 0;
	}


