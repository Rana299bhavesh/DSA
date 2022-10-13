// Standard template libraryS (STL) in C++

#include<iostream>
#include<array>


using namespace std;

int main(){

    array<int,4> a={3,5,4,2};
    int size=a.size();
    for (int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
    
    cout <<"Element at 2nd index is "<<a.at(2)<<endl;
    cout<<"empty or not "<<a.empty()<<endl;
    cout<<"Element at 1st index is "<<a.front()<<endl;
     cout<<"Element at last index is "<<a.back()<<endl;
