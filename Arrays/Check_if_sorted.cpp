#include<iostream>
using namespace std;

int number(int a,int b){
    if(b>a){
        return true;
    }
    return false;
}

int check(int arr[],int size){
    int result =1 ;
    for(int i=0;i<size-1;i++){
        result = number(arr[i],arr[i+1]);
        if(result){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int check1(int arr[],int n){

    if(n==0 || n==1){
        return true;
    }

    if(arr[n]<=arr[n-1]){
        return false;
    }

    return check1(arr,n-1);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size = 8;
    cout<<check(arr,size)<<endl;
}