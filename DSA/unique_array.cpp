#include<iostream>
using namespace std;



bool findUnique(int arr[], int n){
    
     int ans =0;
       for(int i=0; i<n ; i++) {
        ans =ans^arr[i];
       }
       return ans;
}

int main(){

    int arr[100],n;
    cout<<" The number of elements are "<<" ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<< "The unique number is "<<findUnique(arr,n)<<endl;
    
    return 0;









}