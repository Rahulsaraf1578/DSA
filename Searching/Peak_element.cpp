#include<iostream>
using namespace std;

void peak_element(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(i==0 && arr[0]>arr[1]){
            cout<<arr[0]<<" ";
        }
        else if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            cout<<arr[i]<<" ";
        }
        else if(i+1==n){
            if(arr[i+1]>arr[i]){
                cout<<arr[i+1]<<" ";
            }
        }
    }
    cout<<endl;
}

int main(){
    int arr[]={10, 20, 15, 2, 23, 90, 67};
    int n = 7;
    peak_element(arr,n);
}