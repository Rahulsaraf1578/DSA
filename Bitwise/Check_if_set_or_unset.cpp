// Observe that we have first left
// shifted ‘1’ and then used ‘AND’ 
// operator to get bit at that position. 
// So if there is ‘1’ at position ‘pos’ 
// in ‘num’, then after ‘AND’ our variable 
// ‘bit’ will store ‘1’ else if there is ‘0’
//  at position ‘pos’ in the number ‘num’ than after 
// ‘AND’ our variable bit will store ‘0’.


#include<iostream>
using namespace std;
 
bool at_position(int num,int pos)
{
    bool bit = num & (1<<pos);
    return bit;
}
 
// This is teaching one more thing of how to find even or odd
// if we take bit at 0 and then take AND 
// if the number return 0 then it is odd
// If the number return 1 then it is even

int main()
{
    int num = 5;
    int pos = 0;
    bool bit = at_position(num, pos);
    // If bit is 0 then 0
    // If bit is non -zero then 1
    cout << bit << endl;
    return 0;
}