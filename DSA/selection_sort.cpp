#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



void selectionsort(int arr[], int n){
    for(int i =0; i<n-1; i++){
        int minindex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        

        }
        swap(arr[minindex], arr[i]);
    }
}

int main(){
    int arr[10]={7,4,5,1,6,9,33,8,3,6};
    selectionsort(arr,10);
    printarray(arr,10);

    
}
