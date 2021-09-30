//  A = [ 1,2,3,3,2,1,4,5]

#include<iostream>
using namespace std;

void number(int A[],int s){
    
    int res =0;
    for(int i=0;i<s;i++){
        res ^= A[i];
    }
    
}

int main(){
    int A[] = {1,2,3,3,2,1,4,5};
    number(A,8);
}