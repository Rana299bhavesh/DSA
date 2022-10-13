#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++ ){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        } 
    }
}



int main(){
    int arr[8]={8,3,2,2,6,84,93,4};
    bubblesort(arr,8);
    printarray(arr,8);


}