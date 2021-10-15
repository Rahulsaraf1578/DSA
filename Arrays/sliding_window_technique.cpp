#include<iostream>
using namespace std;

int slidingwindow(int arr[ ],int k,int n){
    if(k>n){
        return -1;
    }
    int sum_max= INT_MIN,sum=0;

    for(int i=0;i<n-k+1;i++){
        for(int j=i;j<i+k;j++)
            sum = arr[j]+sum;
        if(sum_max<sum){
            sum_max = sum;
        }
        sum =0;
    }
    return sum_max;
}

int slidingwindow2(int arr[ ],int k,int n){
    if(k>n){
        return -1;
    }
    
    int max_sum = 0;
    for(int i=0;i<k;i++){
        max_sum = max_sum+arr[i];
    }

    int window_sum=max_sum;
    for(int i=k;i<n;i++){
        window_sum = window_sum+arr[i]-arr[i-k];
        max_sum = max(max_sum,window_sum);
    }
    return max_sum;
}

int main(){
    int arr[ ]= {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4,n=9;
    int sum = slidingwindow(arr,k,n);
    if(sum<0){
        cout<<"Invalid"<<endl;
    }
    cout<<sum<<endl;
    return  0;
}