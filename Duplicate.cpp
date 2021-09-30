#include<iostream>
#include<vector>
using namespace std;


int bin(unsigned n){
    int count=0;
    if(n%2==1){
            count++;
        }
    if(n>1){
        
        bin(n/2);
    }
    // if(n%2==1){
    //     count++;
    // }
    // cout<<"count "<<count<<endl;
    return count;
}

int solve(int A) {
        int ans = 0,sum=0;
    for(int i=A;i>0;i--){
        ans = bin(A);
        sum = sum+ans;
        cout<<"sum "<<sum<<endl;
    }
    cout<<ans%1000000007<<endl;
    return ans;
}


int main(){
    int a=2;
    cout<<solve(a)<<endl;
    // long long int n=17;
    // cout<<isPallindrome(n)<<endl;
    return 0;
}