// So this code takes a number num
// then a position at which you want to change bit to 1 from 0
// 1<<pos means put 1 in bit representation at pos


#include<iostream>
using namespace std;

void bin(unsigned n)
{
    /* step 1 */
    if (n > 1)
        bin(n / 2);
 
    /* step 2 */
    cout << n % 2;
}
 

// void set(int & num,int pos)
// {
//      // First step is shift '1', second
//      // step is bitwise OR
//      num |= (1 << pos);
// }

void set(int & num, int pos){
    num = num | (1<<pos);
}

int main(){
    int num = 8, pos = 2;
    bin(num);
    cout<<endl;
    set(num, pos);
    cout << (int)(num) << endl;
    bin((int)(num));
    cout<<endl;
    bin(0);
    cout<<endl;
    bin(1);
    cout<<endl;
    bin(2);
    cout<<endl;
    bin(7);
    cout<<endl;
    return 0;
}