#include<iostream>
using namespace std;

void diffe(int arr[],int n){
    int max_so_far= 0;
    int min = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]-min>max_so_far){
            max_so_far = arr[i]-min;
        }
    }
    cout<<max_so_far<<endl;
}

int main(){
    int arr[]= {566,1124,123,32,45,32};
    int n = 6;
    diffe(arr,n);
}