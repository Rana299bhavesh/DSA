#include<iostream>
using namespace std;

int sum(int arr[], int n) {
    int s=0;

    for(int i=0; i<n; i++){
        s+=arr [i];
        
    }
    return s;




}

int main(){
    int arr[100],n;
    cout<<" Enter the number of elements"<< endl;
    cin>>n;
    
    
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<" Sum of the array is "<<sum(arr, n)<<endl;


}