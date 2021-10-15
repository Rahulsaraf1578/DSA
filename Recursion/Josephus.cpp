#include<iostream>
using namespace std;

int alive(int n,int k){
    if(n==1){
        return 0;
    }
    return (alive(n-1,k)+k)%n;
}

int main(){
    int n=5,k=3;
    cout<<alive(n,k)<<endl;
}