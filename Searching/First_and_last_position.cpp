#include<iostream>
using namespace std;



// int first(int arr[],int low,int high,int x,int n){
//     if(high>=low){
//         int mid = low+(high-low)/2;
//         if((mid ==0 || arr[mid-1]<x)&&arr[mid]==x){
//             return mid;
//         }
//         else if(arr[mid]>x){
//             first(arr,low,mid-1,x,n);
//         }
//         else if(arr[mid]<x){
//             first(arr,mid+1,high,x,n);
//         }
//     }
//     return -1;
// }

// int last(int arr[],int high, int low,int x,int n){

//     if(high>=low){
//         int mid = low+(high-low)/2;
//         if((mid ==n-1 || arr[mid+1]>x)&&arr[mid]==x){
//             return mid;
//         }
//         else if(arr[mid]>x){
//             first(arr,low,mid-1,x,n);
//         }
//         else if(arr[mid]<x){
//             first(arr,mid+1,high,x,n);
//         }
//     }
//     return -1;
    
// }

int first(int arr[],int low,int high,int x,int n){
    if(high>=low){
        int mid = low+(high-low)/2;
        if((mid==0 || arr[mid-1]<x)&&arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            first(arr,low,mid-1,x,n);
        }else if(arr[mid]<x){
            first(arr,mid+1,high,x,n);
        }
    }
    return -1;
}

int last(int arr[],int high, int low,int x,int n){

    if(high>=low){
        int mid = low+(high-low)/2;
        if((mid = n-1 ||arr[mid+1]>x)&&arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            last(arr,low,mid-1,x,n);
        }
        else if(arr[mid]<x){
            last(arr,mid+1,high,x,n);
        }
    }
    return -1;
    
}

int main(){
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
 
    int x = 8;
    printf("First Occurrence = %d\t",
           first(arr, 0, n - 1, x, n));
    printf("\nLast Occurrence = %d\n",
           last(arr, 0, n - 1, x, n));
           return 0;
}