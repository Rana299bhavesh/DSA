#include<iostream>
using namespace std;
int getlen(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++ ){
        count++;
    }
    return count;
}


char getmaxOccur(string s){
    int arr[26]={0};


    //create an array of count of character
    for(int i=0;i<s.length(); i++){
        char ch=s[i];
        //lowercase
        int number =0;
        number=ch-'a';
        arr[number]++;
    }
    

    //find maximum occur character
    int maxi=-1, ans =0;
    for(int i=0; i<26;i++){
        if (maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalans= 'a'+ans;
    return finalans;



}

int main(){
    string s;
    cin>>s;
}