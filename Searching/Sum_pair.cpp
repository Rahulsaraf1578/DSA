#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

int chkPair(int arr[], int n, int num){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==num){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return 1;
            }
        }
    }
    return -1;
}

int checkPairTwoPointer(int arr[],int n,int num){
    int l=0,r=n-1;

    sort(arr,arr+n);

    while (l<=r)
    {
        if(arr[l]+arr[r]>num){
            r--;
        }
        else if(arr[l]+arr[r]<num){
            l++;
        }
        if(arr[l]+arr[r]==num){
            cout<<arr[l]<<" "<<arr[r]<<endl;
            return 1;
        }
    }
    return -1;
}



int main(){
    int A[] = {0, -1, 2, -3, 1};
    int x = -2;
    int size = sizeof(A) / sizeof(A[0]);
    if (checkPairTwoPointer(A, size, x)) {
        cout << "Valid pair exists" << endl;
    }
    else {
        cout << "No valid pair exists for " << x << endl;
    }
 
    return 0;
}