// A= [1,2,3, 3,1,2,5 ]

#include<iostream>
using namespace std;

void non_repeating(int a[], int n){
    int res =0;
    for(int i=0;i<n;i++){
        res ^= a[i];
    }
    cout<<res<<endl;

}

int main(){
    int A[] = {1,2,3,3,2,1,5};
    non_repeating(A,7);
    return 0;
}