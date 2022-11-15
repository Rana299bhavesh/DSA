#include<iostream>
using namespace std;

void printsum(int arr[][4], int row, int col){
    cout<< "Printing the sum "<<endl;
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<4; j++){

            sum+=arr[i][j];

        }
        cout<<sum<<" ";
        
    }
}

int main(){
    

    int arr[3][4];
    cout<<"Enter the elements "<<endl;
    for (int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }



    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}