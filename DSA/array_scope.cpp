#include<iostream>
using namespace std;

void updatee(int arr[], int n){
    cout<<endl<<"Inside the function"<<endl;

    //updating array's first element
    arr[0]=34;
    for(int i=0; i< 3; i++){
        cout<<arr[i]<<endl;
    } cout<<endl;

    cout<< "Going back to main function" <<endl;
} 

int main() {

    int arr[3]={3,4,2};
    updatee(arr, 3);

    cout<< "Printing in main array" <<endl;
    for(int i=0; i< 3; i++){
        cout<<arr[i]<<endl;
 
    }



    return 0;

}



