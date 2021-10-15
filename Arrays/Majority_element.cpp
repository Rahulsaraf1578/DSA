#include<iostream>
#include<unordered_map>
using namespace std;

int majority(int arr[],int n){
    int freq[256];

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>n/2){
            return i;
        }
    }
    return 0;
}

// Using unordered map
// TC :- O(nlogn)
// SC :- O(1)
void majority_hashmap(int arr[],int n){
    unordered_map<int,int> um;

    for(int i=0;i<n;i++){
        um[arr[i]]++;
    }
    int count =0;

    for(auto i:um){
        if(i.second>n/2){
            count =1;
            cout<< "Majority element :- "<<i.first<<endl;
        }
    }
    if(count==0){
        cout<<"There is no majority element "<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4,5,2,2,2,2,2};
    int n = 10;
    int x = majority(arr,n);
    if(x){
        cout<<x<<endl;
        return 0;
    }
    cout<<"No majority element."<<endl;
    return 0;
}