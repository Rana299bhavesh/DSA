#include<iostream>
using namespace std;

long long int sqrt(int n){
        int start=0;
        int end=n;
        long long  int mid= start+(end-start)/2;
         long long int ans=-1;
        
        while(start<=end){
            long long int sq=mid*mid;
            if(sq==n){
                return mid;
                
            }
            if (sq<n){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
        
    }

    double moreprecision(int n, int precision, int tempsol){
        double factor=1;
        double ans =tempsol;

        for (int i=0; i<precision; i++){
            factor=factor/10;
            for (double j =ans; j*j<n; j=j+factor){
                ans=j;
            }
        }
        return ans;

    }

    int main(){
        int n;
        cout<<"Enter the number:- "<<endl;
        cin>>n;

        int tempsol=sqrt(n);
        cout<<"The answer is:- "<<moreprecision(n,3,tempsol)<<endl;
        return 0;
    }
    