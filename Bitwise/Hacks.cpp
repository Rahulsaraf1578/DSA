#include<iostream>
using namespace std;

void strip_last_set_bit(int &num)
{
    num = num & (num-1);
}

int main(){
    int num2 =4;

    // 1. Inverting every bit of the number
    //  1's complement of the number
    cout<<(~num2)<<endl;

    // 2. 2's complement of the numebr
    // Both below are same
    cout<<(~num2+1)<<endl;
    cout<<-num2<<endl;

    // 3. Striping last bit of an integer
    int num = 4;
    strip_last_set_bit(num);
    cout << num << endl;


    // 4. Multiplying by 2
    int x =2;
    int ans = x<<1;
    cout<<ans<<endl;

    // 5. Division of 2
    int y=16;
    int ans2 = y>>1;
    cout<<ans2<<endl;
    return 0;
}