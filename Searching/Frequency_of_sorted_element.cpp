#include<iostream>
using namespace std;

int countOccurrences(int arr[], int n, int x)
{
    int res = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            res++;
        }
    }
    return res;
}

int binary(int arr[],int l,int r, int x){
    if(l<=r){
        int mid = l+(r-l)/2; 

        if(arr[mid]==x){
            return mid;
        }

        if(arr[mid]>x){
            return(arr,l,mid-1,x);
        }

        if(arr[mid]<x){
            return(arr,mid+1,r,x);
        }

        
    }
    return -1;
}

int countOccurrences1(int arr[], int n, int x)
{
    // int ind = binarySearch(arr, 0, n - 1, x);
 
    // // If element is not present
    // if (ind == -1)
    //     return 0;
 
    // // Count elements on left side.
    // int count = 1;
    // int left = ind - 1;
    // while (left >= 0 && arr[left] == x)
    //     count++, left--;
 
    // // Count elements on right side.
    // int right = ind + 1;
    // while (right < n && arr[right] == x)
    //     count++, right++;
 
    // return count;

    int mid = binary(arr,0,n,x);

    if(mid == -1){
        return 0;
    }

    int count=1;
    int left = mid-1;
    while (left>=0 && arr[left]==x){
        left--,count++;
    }
    
    int right = mid+1;
    while (right<n&&arr[right]==x)
    {
        right++,count++;
    }
    return count;
}

int main(){
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 2;
    cout << countOccurrences(arr, n, x)<<endl;
    cout<<countOccurrences1(arr,n,x)<<endl;
  return 0;
}