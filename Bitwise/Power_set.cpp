#include<iostream>
#include<math.h>
using namespace std;

void printPowerSet(char *set, int set_size){

    unsigned int power_set = pow(2,set_size);
    int counter,j;

    for(int i=0;i<power_set;i++){
        for (int j = 0; j < set_size; j++)
        {
            if(i & (1 << j))
            cout << set[j];
        }
        cout << endl;
    }
}

// void printPowerSet(char *set, int set_size)
// {
//     /*set_size of power set of a set with set_size
//     n is (2**n -1)*/
//     unsigned int pow_set_size = pow(2, set_size);
//     int counter, j;
 
//     /*Run from counter 000..0 to 111..1*/
//     for(counter = 0; counter < pow_set_size; counter++)
//     {
//     for(j = 0; j < set_size; j++)
//     {
//         /* Check if jth bit in the counter is set
//             If set then print jth element from set */
//         if(counter & (1 << j))
//             cout << set[j];
//     }
//     cout << endl;
//     }
// }

int main(){
    char set[]={'a','b','c'};
    printPowerSet(set,3);
    return 0;
}