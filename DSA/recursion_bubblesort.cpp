#include<iostream>
using namespace std;

void sortarray(int arr[], int n){

    if(n==0 || n==1) {
        return ;

    }

    for (int i= 0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    
    sortarray(arr,n-1);
}

int main(){

    int arr[7]={2,4,3,5,1,9,0};
    sortarray(arr,7);


    return 0;
}