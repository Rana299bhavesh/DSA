#include<iostream>
using namespace std;

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkpalindrome(char a[], int n){

    int s=0;
    int e=n-1;
    
    while(s<=e){
        if(tolowercase(a[s])!=tolowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
            
        }
        
    }
    return 1;
}

void reversestr(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<e){
        swap(name[s++],name[e--]);
    }

    

}


int lengthstr(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0';i++){
        count++;
    }
    return count;

}




int  main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    int len =lengthstr(name);
    cout<<"length: "<<len<<endl;
    reversestr(name,len);

    cout<<"Reverse of name is ";
    cout<< name <<endl;
   
   cout<<"palindrome or not "<<checkpalindrome(name,len)<<endl;

    return 0;
}