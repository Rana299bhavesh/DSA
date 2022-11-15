// Standard template libraryS (STL) in C++

#include<iostream>
//for accessing array
//#include<array>
//for accessing vector
#include<vector>
//for accessing deque
#include<deque>


using namespace std;

int main(){

    //all about array data structure
    /*array<int,4> a={3,5,4,2};
    int size=a.size();
    for (int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
    
    cout <<"Element at 2nd index is "<<a.at(2)<<endl;
    cout<<"empty or not "<<a.empty()<<endl;
    cout<<"Element at 1st index is "<<a.front()<<endl;
    cout<<"Element at last index is "<<a.back()<<endl;*/
    
    
    
    //ALL about Vector data structure


     /*vector<int> v;

     vector<int> n(4,2);

     vector<int> last(n);



     cout<<"Print last "<<endl;
     for (int i:n){
        cout<<i<<endl;
     }
  
     cout<<"size "<<v.capacity()<<endl;

     v.push_back(1);   //Push back used to put values in vector
     cout<<"Capacity "<<v.capacity()<<endl;

     v.push_back(2);
     cout<<"Capacity "<<v.capacity()<<endl;

     v.push_back(9);
     cout<<"Capacity "<<v.capacity()<<endl;   //Capacity tells the  number of space assigned for the elements

     v.push_back(77);
    

     cout<<v.size()<<endl;  //SIZE tells the number of elements

     cout <<"Element at 2nd index is "<<v.at(2)<<endl;

     cout<<"Element at 1st index is "<<v.front()<<endl;
     cout<<"Element at last index is "<<v.back()<<endl;


     cout<<"Before pop"<<endl;
     for(int i:v){
        cout<<i<<" ";
     }cout<<endl ;

     v.pop_back();   //Clears the lastr element

      cout<<"After pop"<<endl;
     for(int i:v){
        cout<<i<<" ";
     }cout<<endl ;


     cout<<"before clearing "<<v.size()<<endl;

     v.clear();

     cout<<"After clearing "<<v.size()<<endl;*/

    deque<int> d;
    d.push_back(1);
    d.push_front(3);

    for(int i:d){
        cout<<i<<" ";

    }
    //d.pop_front();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";

    }

    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
     cout<<"after erase "<<d.size()<<endl;



}




