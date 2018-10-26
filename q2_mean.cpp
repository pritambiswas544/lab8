//add the library
#include<iostream>
using namespace std;
			//defining the function
	int mean (double arr[],int n){
			//initialization of function
		double sum=0;
			//constructing a loop for suming the elemnts
		for (int i=0;i<n;i++){
		sum+=arr[i];
		}
		return sum;
		}
			//main
	int main(){
			//defining the array
		double arr[]={1,5.23,54,98,789,45};
		double summ=mean(arr,7);
		double result=(summ/7);
			//printing the mean
		cout<<"The result is "<<result<<endl;
		return 0;
	}

		
		
	
	
