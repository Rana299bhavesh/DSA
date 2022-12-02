#include <iostream>
using namespace std;

bool binarysecrh(int arr[], int s, int e, int k){
    if(s>e){
        return false;
    }

    
    int mid= s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarysecrh (arr, mid+1, e, k); 
    }

    else{
         binarysecrh (arr, mid-1, e, k);

    }
}

int main(){
     int arr[5]={2,4,6,7,9};
    int size= 5;
    int key =4;

cout<< "Present or Not"<< binarysecrh(arr, 0, 4, key)<< endl;


    return 0;

}


