#include<iostream>
using namespace std;

// void leaders(int arr[],int n){
//     int flag =0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 flag =1;
//             }
//             else{
//                 flag =0;
//                 break;
//             }
//         }
//         if(flag == 1){
//             cout<< arr[i]<<endl;
//         }
//     }
// }

void leaders(int arr[],int n){
    int max_from_right = arr[n-1];
    cout<<arr[n-1]<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max_from_right){
            cout<<arr[i]<<" ";
        }
        max_from_right = arr[i];
    }
    cout<<endl;
}

int main(){
    int arr[]={12,17,2,3,5,1};
    int n = 6;
    leaders(arr,n);
}