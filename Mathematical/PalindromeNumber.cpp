#include<iostream>
using namespace std;

bool checkPalind(string s){

    int length = s.length();

    for(int i=0;i<length/2;i++){
        if(s[i]!= s[length-i-1]){
            return false;
        }
    }
    return true;
}

// String method

int main(){

    string st = "1222121";

    if(checkPalind(st) == true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}