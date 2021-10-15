#include<iostream>
using namespace std;

void freq(int arr[],int n){
    int count =1;
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            count++;
        }else{
            cout<<arr[i] <<" "<< count<<endl;
            count =1;
        }
    }
}

int main(){
    int arr[]= {566,566,1124,123,32,45,32};
    int n = 6;
    freq(arr,n);
}