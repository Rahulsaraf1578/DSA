#include<iostream>
#include<algorithm>
using namespace std;

void printClosest(int arr[],int n,int num){
    int res_l,res_r;

    int l=0,r=n-1,diff=INT_MAX;

    while (r>l)
    {
        if (abs(arr[l] + arr[r] - num) < diff)
       {
           res_l = l;
           res_r = r;
           diff = abs(arr[l] + arr[r] - num);
       }

       if (arr[l] + arr[r] > num)
           r--;
       else // Move to larger values
           l++;
    }
        cout <<" The closest pair is " << arr[res_l] << " and " << arr[res_r];

    
}

int main(){
    int arr[] =  {10, 22, 28, 29, 30, 40}, x = 54;
    int n = sizeof(arr)/sizeof(arr[0]);
    printClosest(arr, n, x);
    return 0;
}