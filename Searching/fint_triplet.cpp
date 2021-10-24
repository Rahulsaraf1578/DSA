#include<iostream>
#include<algorithm>
using namespace std;

bool find3Numbers(int arr[],int n,int x){
    sort(arr,arr+n);

    int l,r;

    for(int i=0;i<n-2;i++){
        l = i+1;
        r=n-1;
        while (l<r)
        {
            if (arr[i] + arr[l] + arr[r] == x) {
                printf("Triplet is %d, %d, %d", arr[i],
                       arr[l], arr[r]);
                return true;
            }
            else if (arr[i] + arr[l] + arr[r] < x)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
        
    }
    return false;
}

int main(){
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);
 
    cout<<find3Numbers(A, arr_size, sum)<<endl;
}