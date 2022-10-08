#include<iostream>
using namespace std;
void printarray(int arr[], int size){
    cout<<" printing array"<<endl;
    for (int i=0; i<size; i++){
        cout<<arr[i]<<' ';

    }
    cout<<"printing done "<<endl;
}
/*int main(){
    //declaring an array
    int num[15];
    //accessing an element   
    cout<<num[12]<<endl;
    


    //initialising an array
    int sec[5]={3,5,32,34,333,};
    cout<<sec[4]<<endl;

    int thir[7]={3,5,6,3};
    int n=7;
    cout<<"array printing"<<endl;
    //print array
    for(int i=0; i<n; i++){
        cout<<thir[i]<<" ";
    }
    //initailising whole aray with same number
    int sun[7]={[0 ... 6] = 1};
    int  m=7;
    for(int i=0; i<m; i++){
        cout<<sun[i]<<" ";
    }

    cout<< endl<<"Evrything fine"<<endl;

    return 0;

}*/


// Code to put same value in entire array
int main(){
    int n=7;
    int val=3;
    int arr[n];
     for (int i=0; i<n; i++){
        arr[i]=val;
        cout<<arr[i]<<' ';
     }
}
