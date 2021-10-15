#include<iostream>
using namespace std;

int sum(int n){

    if(n<=1){
        return 1;
    }

    return n+sum(n-1);
}

int fact(int n){
    if(n<=1){
        return 1;
    }

    return n*fact(n-1);
}

int fibonaci(int n){
    if(n==0){
        return 0;
    }

    if(n==2 || n==1){
        return 1;
    }
    return fibonaci(n-1)+fibonaci(n-2);
}

int main(){
    int n=5; 
    cout<<sum(n)<<endl;
    cout<<fact(n)<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<fibonaci(i)<<" ";
    }
    cout<<endl;
    return 0;
}