#include<iostream>
using namespace std;
int printxpown(int x,int n){
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    

    // int xnm1=printxpown(x,n-1);
    // int xn=x*xnm1;
    // return xn;
    // if n is even
    if(n%2==0){
        return printxpown(x,n/2)*printxpown(x,n/2);
    }
    else{
        return printxpown(x,n/2)*printxpown(x,n/2)*x;
    }
}
int main(){
  int x=2,n=3;
  cout<<printxpown(x,n);return 0;
}