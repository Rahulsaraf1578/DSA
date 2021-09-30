// Takes a integer
// Covert into bit
// The replace the bit at postion pos with number  whatever you write at this 1, 1<<pos

#include<iostream>
using namespace std;

void bin(unsigned n){
    if(n>1)
        bin(n/2);

    cout<<n%2;
}

void unset(int &num,int pos){

    num = num&(~(1<<pos));
}

int main()
{
    int num = 7;
    int  pos = 1;
    bin(num);
    cout<<endl;
    unset(num, pos);
    cout << num << endl;
    bin(num);
    cout<<endl;
    return 0;
}