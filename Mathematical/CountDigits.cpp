// Count digits
#include<iostream>
using namespace std;

int findDigits(int n){
    if(n<0){
        return 0;
    }

    if(n<=1){
        return 1;
    }

    double digits =0;

    // Adding total number of digits
    // in number given
    for(int i=2;i<=n;i++){
        digits = digits +log10(i);
    }
    
    return floor(digits)+1;
}

int main(){

    cout<<findDigits(1)<<endl;
    cout << findDigits(5) << endl;
    cout << findDigits(10) << endl;
    cout << findDigits(120) << endl;
}
