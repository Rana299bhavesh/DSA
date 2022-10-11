#include<iostream>
using namespace std;

int binarysearch(int arr[], int size , int key ){

    int start=0;
    int end=size-1;

    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
            
        }
        mid=(start+end)/2;
    }

    return -1;


}

int main(){

    int arr[6]={2,5,7,9,10,15};
    int brr[7]={1,3,8,9,14,15,20};

    int evenindex = binarysearch(arr, 6, 15);
    cout<< " Index of 15 is  "<<evenindex<<endl;
     int oddindex = binarysearch(brr, 7, 8);
     cout<< " Index of 8 is "<<oddindex<<endl;

     return 0;

}