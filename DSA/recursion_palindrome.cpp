#include<iostream>
using namespace std;

bool checkpalindrome(string str, int i, int j){

    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;

    }
    else{
        return checkpalindrome(str, i+1, j-1);
    }



}

int main(){

    string name="madam";
    cout<<endl;
    bool ispalindrome= checkpalindrome(name, 0, name.length()-1);
    if(ispalindrome){
        cout<<"Palindrome hai "<<endl;

    }
    else{
        cout<<"palindrome nahi hai"<< endl;

    }

    return 0;





    


}