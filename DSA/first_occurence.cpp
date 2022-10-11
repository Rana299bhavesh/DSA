#include<iostream>
using namespace std;

int lastocc(int arr[], int n, int key){
    int start=0;
    int end= n-1;
    int ans=-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr [mid] == key){
            ans=mid;
            start=mid+1;

        }
        else if(key>arr[mid]){
            start= mid+1;

        }
        else if (key< arr[mid]){
            end=mid-1;

        }
        mid=(start+end)/2;
    }
    return ans;
}

int firstocc(int arr[], int n, int key){
    int start=0;
    int end= n-1;
    int ans=-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr [mid] == key){
            ans=mid;
            end=mid-1;

        }
        else if(key>arr[mid]){
            start= mid+1;

        }
        else if (key< arr[mid]){
            end=mid-1;

        }
        mid=(start+end)/2;
    }
    return ans;
    
}



int main(){

    int even[11]={1,2,3,3,3,3,3,3,3,3,5};

    cout<<" first occurence of 3 is at index "<<firstocc(even,11,3)<<endl;
    cout<<" last occurence of 3 is at index "<<lastocc(even,11,3)<<endl;
    cout<<" The total occ of 3 is "<<lastocc(even,11,3)-firstocc(even,11,3) +1<<endl;



    return 0;


}