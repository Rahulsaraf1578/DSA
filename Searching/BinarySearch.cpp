#include<iostream>
using namespace std;

bool binarySearch(int arr[],int l, int r, int num){
    if(r>=l){
        int mid = l+(r-l)/2;

        if(arr[mid] == num){
            return true;
        }

        if(arr[mid]<num){
            return binarySearch(arr,mid+1,r,num);
        }

        if(arr[mid]>num){
            return binarySearch(arr,l,mid-1,num);
        }

    }
    return -1;
}

int main(){
    int arr[]={2,5,8,12,16,23,29,33,37,72,91};
    int size = 11;
    int num = 33;
    if(binarySearch(arr,0,size,num)){
        cout<<"Present "<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}