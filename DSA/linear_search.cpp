#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }


    }
    return 0;

}


int main(){
    int arr[10]= {2, 3, 5, 7, 9, 4, -4, -7, -9,22};
    //whether number is present or not
    cout<<" enter the element to search for"<< endl;
    int key;
    cin>>key;
    bool found = search(arr, 10, key);

    if(found ){
        cout<<" Key is present"<<endl;

    }
    else{
        cout<<" Key is absent"<<endl;
    }        



    return 0;
}