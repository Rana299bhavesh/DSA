#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "
    }
    cout<<endl;
}

void sortone(int arr[], int n){
    int i=0, j=n;
    while(i<j){
        while(arr[i]==0 && i<j) {
            i++;

        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

}

int main(){

    int arr[10]={1,1,0,1,1,0,1,1,0,1};
    sortone(arr, 10);
    printarray(arr,10);

}
