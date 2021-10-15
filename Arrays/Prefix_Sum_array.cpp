#include<iostream>
using namespace std;

void prefixSum(int arr[],int n){
    int sum_till_now = arr[0];

    for(int i=1;i<n;i++){
        arr[i] = arr[i]+sum_till_now;
        sum_till_now = arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {10, 20, 10, 5, 15};
    int n = 5;
    prefixSum(arr,n);
    return 0;
}