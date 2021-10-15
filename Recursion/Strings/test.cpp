#include<iostream>
#include<vector>
using namespace std;

int print_N_to_1(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n;
}

int Matrix(int row,int col){
    if(row==1||col==1){
        return 1;
    }
    return Matrix(row-1,col)+Matrix(row,col-1);
}

void towerOfHanoi(int n,char from_rod,char to_rod, char aux_rod){
    if(n==1){
        return ;
    }
    towerOfHanoi(n-1,from_rod,aux_rod,to_rod);
    towerOfHanoi(n-1,aux_rod,to_rod,from_rod);
}

int alive(int n,int k){
    if(n==1){
        return 0;
    }

    return (alive(n-1,k)+k)%n;
}

void permute(string a,int l,int r){
    if(l==r){
        cout<<a<<endl;
    }
    else{
        for (int i = l; i <= r; i++)
        {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(a, l+1, r);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}


int main(){
    // Print numbers from n to 1
    // int n=6;
    
    // for (int i = n; i > 0; i--)
    // {
    //     cout<< print_N_to_1(i)<<" ";
    // }
    // cout<<endl;

// You are given a matrix and you have to go from 1 to n 
// Find number of ways you can only go right or down
    // int row=4,col=3;
    // cout<<Matrix(row,col)<<endl;

    // Tower of hanoi
    // int n=4;
    // towerOfHanoi(n,'A','B','C');

// Josephs problem
    // int n=5,k=3;
    // cout<<alive(n,k)<<endl;

    string str = "ABC";
    int n = str.size();
    permute(str, 0, n-1);

    return 0;
}