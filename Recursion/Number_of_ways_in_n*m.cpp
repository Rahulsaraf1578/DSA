// You can only go bottom or right
// If we are in a row or column then there will only one way to reach destination

#include<iostream>
using namespace std;

int ways(int n, int m){
    if(n==1 || m==1){
        return 1;
    }
    
    return ways(n-1,m)+ways(n,m-1);
}

int main(){
    int n=4,m=3;
    cout<<ways(n,m)<<endl;
    return 0;
}