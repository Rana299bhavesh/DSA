#include<iostream>
using namespace std;

void printarray(int arr[], int n) {

    for(int i = 0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

void swapalt(int arr[], int size) {
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1] );
        }
    }
}



int main() {

    int arr[6]={2,3,4,7,1,9};
    int brr[5]={1,3,8,9,0};

    swapalt(arr,6);
    printarray(arr,6);

    cout<<endl;

    swapalt(brr,5);
    printarray(brr,5);







}