#include<iostream>
using namespace std;
bool ispresent(int arr[][4], int target, int row, int col){

    for(int row=0; row<3; row++ ){
        for(int col=0; col<4; col++){
            if(arr[row][col]==target){
                return 1;
            }
          

        }
    }
    return 0;
}

int main(){
    // Create 2D array

     int arr[3][4];

    //taking input
    for(int row=0; row<3; row++ ){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];

        }
    }

    //output

    for(int row=0; row<3; row++ ){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";

        }
        cout<<endl;
    }

   

    //int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //Output code

    cout<<"Enter elemnt to search "<<endl;
    int target;
    cin>>target;

    if(ispresent(arr,target,3,4)){
        cout<<"Element Found"<<endl;

    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;


}