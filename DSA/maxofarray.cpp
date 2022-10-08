#include<iostream>
using namespace std;
int getmin(int num[],int n){
    int min=INT32_MAX;
    for(int i=0; i<n; i++){
        min
    }
}
int getmax(int num[], int n){
    int max=INT32_MIN;
    for(int i=0; i<n; i++){
        if (num[i]>max){
            max=num[i];
        }
    }
    return max;


}
int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0; i<size; i++ ){
        cin>>num[i];
    }
    cout<<"Maximum value is "<<getmax(num,size)<<endl;


}