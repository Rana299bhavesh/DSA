//CODE TO PRINT WHETHER NUMBER IS POSITIVE OR NEGATIVE
    #include<iostream>
    using namespace std;
    int main(){
    
    int n;
    cin>>n;
    if(n>0){
        cout<<"N is positive"<< endl;
    }
    else{
        cout<<"N is negative"<< endl;
    }


    //CODE TO FIND GREATEST OF TWO NUMBER
    int a,b;
    cin>>a >>b;
    cout<<"Value of a and b is "<<a << " " <<b <<endl;
    if(a>b){
        cout<<"a is greater"<<endl;
    }
    if(b>a){
        cout<<"b is greater"<< endl;
    }


     //CODE TO FIND POSTIVE NEGATIVE OR ZERO
    int a;
    cout<<"enter value of a"<< endl;
    cin>>a;
    
    if(a>0){
        cout<<"The number is positve" <<endl;
    }
    else if(a<0){
        cout<<"The number is negative"<< endl;
    }
    else{

        cout<<"The number is zero"<<endl;
    }


//CODE TO FIND WHETHER THE NUMBER IS LOWERCASR UPPSERCASE OR NUMERIC
char ch;
cout<<" enter the character "<<endl;
cin>>ch;
if(ch>='A'&& ch<='Z'){
    cout<<"the letter is uppercase"<<endl;
}
else if(ch>='a' && ch<='z'){
    cout<<"the letter is lowercase"<<endl;
}
else{
    cout<<"the letter is numeric"<<endl;
}


}