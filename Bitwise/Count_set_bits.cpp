#include<iostream>
using namespace std;


// Simple method
unsigned int count_set_bits(unsigned int n){
    unsigned int count =0;
    while (n)
    {
        count += n&1;
        n = n>>1;
    }
    return count;
    // cout<<count<<endl;
    
}

unsigned int count_set_bits2(unsigned int n){
    if(n==0){
        return 0;
    }
    else
        return (n&1)+count_set_bits2(n>>1);
}

// Brian Kernighan's algorithm
unsigned int countSetBits(int n)
{
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

unsigned int CountSetBits1(int n){
    if(n==0){
        return 0;
    }
    
    return 1+CountSetBits1(n&(n-1));
}

// Lookup table


int main(){
    int n=9,n2=9;
    //  count_set_bits(n);
    cout<< count_set_bits(n);
    cout<< count_set_bits2(n2);
    return 0;
}