#include<iostream>
using namespace std;

int num(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n;
}

int main(){
    int n=10;

    for(int i=n;i>0;i--){
        cout<<num(i)<<endl;
    }
}