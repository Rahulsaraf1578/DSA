#include<iostream>
using namespace std;

int maxNum(bool arr[],int n){
    int count = 0; //intitialize count
    int result = 0; //initialize max
 
    for (int i = 0; i < n; i++)
    {
        // Reset count when 0 is found
        if (arr[i] == 0)
            count = 0;
 
        // If 1 is found, increment count
        // and update result if count becomes
        // more.
        else
        {
            count++;//increase count
            result = max(result, count);
        }
    }
 
    return result;
}

int main(){
    bool arr[]={0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int size = 11;
    cout<<maxNum(arr,size)<<endl;
}