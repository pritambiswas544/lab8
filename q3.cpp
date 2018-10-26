//add the library
#include<iostream>
using namespace std;

//function for the kth largest element
void klarge(int array[], int len, int k){
    int a[len];
    
    //sorting the array in increasing order
    for (int i=0;i<len;i++){
        a[i]=array[i];}
    
    for (int j=0;j<len-1;j++){
        int temp;
        for (int i=0;i<len-1;i++){
            if (a[i+1]<a[i]){
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
             }
    }}
    
    //printing the kth largest element
    cout<<"The "<<k<<"th largest element is: "<<a[len-k]<<endl;
}
	//function for kth smallest element
	void ksmall(int array[], int len, int k){
    int a[len];
    
    //sorting the array in increasing order
    for (int i=0;i<len;i++){
        a[i]=array[i];}
    
    for (int j=0;j<len-1;j++){
        int temp;
        for (int i=0;i<len-1;i++){
            if (a[i+1]<a[i]){
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
             }
    }}
    //printing the kth smallest element
    cout<<"The "<<k<<"th smallest element is: "<<a[k-1]<<endl;
}

//main
int main(){
    //declaring variables
    int n, k;
    
    //taking input of the size of array
    cout<<"Enter the length of the array: ";
    cin>>n;
    
    //declaring the array
    int array[n];
    
    //assigning elements to the array
    for (int i=0;i<n;i++){
        int p;
        cout<<"Enter the "<<i+1<<"th element: ";
        cin>>p;
        array[i]=p;
    }
    
    //taking input of the desired *k*
    cout<<"Enter the number k: ";
    cin>>k;
    
    klarge(array,n,k);
    ksmall(array,n,k);
    return 7;
}
