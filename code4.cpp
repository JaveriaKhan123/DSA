#include <iostream>
using namespace  std;
int main(){
cout<<"Enter value of n : ";
int n;
cin>>n;

if(n%2==0){
    n++;
    }
n*=2;
int i =1 ;
int j = (n+1)/2+1;

while(i<=n){
int k = 1;
while(k<=n){
    if(k+i==j || k-i==j-2){
        cout<<'*';
    }
    else if(i+k>j && k-i<j-2 && (j-1)/2==i){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
     k++;
}

    if(i==n/2 ){
        break;
    }

i++;   
cout<<endl;
}
    
}