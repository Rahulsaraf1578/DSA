#include<iostream>
using namespace std;

void factorial(int p){

    int mult =1;

    for(int i=p;i>=1;i--){
        mult *= i;
    }

    cout<<"Factorial of "<<p<<" is: "<<mult<<endl;
}

int main(){
    int n = 5;

    factorial(5);
}