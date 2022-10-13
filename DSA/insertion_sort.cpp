#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

void insertionSort(int arr[], int n){
    // Write your code here.
    for (int i=0; i<n; i++){
        int temp=arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[8]={8,4,3,5,5,2,9,64};
    insertionSort(arr,8);
    printarray(arr,8);
}