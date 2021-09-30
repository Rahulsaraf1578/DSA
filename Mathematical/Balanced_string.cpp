#include<iostream>
using namespace std;

bool balancedNumber(string N)
	{
	    int sum1=0,sum2=0;
	    
	    for(int i=0;i<(N.length()/2)-1;i++){
	        sum1 += N[i];
	    }
	    
	    for(int i=N.length()-1;i>N.length()/2;i++){
	        sum2 += N[i];
	    }
	    
	    if(sum1==sum2){
	        return 1;
	    }
	        return 0;
	    
	}

int main(){
    string n="1234006";
    if(balancedNumber(n)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}