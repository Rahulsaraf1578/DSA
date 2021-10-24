#include<iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int x){
    
    while (high>=low)
    {
        int mid = (low+high)/2;

        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            return binarySearch(arr,low,mid-1,x);
        }
        else{
            return binarySearch(arr,mid+1,high,x);
        }
    }
    return -1;
}

bool isMajority(int arr[],int n, int x){
    int i = binarySearch(arr,0,n-1,x);

    if(i==-1){
        return false;
    }

    if (((i + n / 2) <= (n - 1)) &&
      arr[i + n / 2] == x)
        return true;
    else
        return false;
    
}

int main(){
    int arr[] ={1, 2, 3, 4, 4, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4;
    if (isMajority(arr, n, x))
        cout <<    x <<" appears more than "<<
                              n/2 << " times in arr[]"<< endl;
    else
        cout <<x <<" does not appear more than" << n/2 <<"  times in arr[]" << endl;
 
    return 0;
}