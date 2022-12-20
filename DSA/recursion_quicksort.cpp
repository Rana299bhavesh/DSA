#include<iostream>
using namespace std;

void quicksort(int arr[], int s, int e){

    if(s>=e){
        return;
    }

    int p =partition(arr,s,e);

    quicksort(arr,s,p-1);


    quicksort(arr,p+1,e);


}

int main(){

    int arr[7]={1,3,2,5,33,9,6};
    int n =7;

    quicksort(arr,0,n-1);
    for (int i=0; i<n; i++){
        cout<< arr[i]<<" ";

    }
    cout<<endl;


    return 0;

}