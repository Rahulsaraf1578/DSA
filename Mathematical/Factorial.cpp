#include<iostream>
using namespace std;

// void factorial(int p){

//     int mult =1;

//     for(int i=p;i>=1;i--){
//         mult *= i;
//     }

//     cout<<"Factorial of "<<p<<" is: "<<mult<<endl;
// }

int factorial(int n){

    return (n==1||n==0)?1:n*factorial(n-1);
}

int factorial2(int n){
    return (n==1 ||n==0)?1:n*factorial2(n-1);
}
int main(){
    int n = 5;

    cout<<factorial(5)<<endl;
}