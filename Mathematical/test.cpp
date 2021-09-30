#include<iostream>
#include<math.h>
using namespace std;


//---------------------------- Generating prime numbers ----------------------------------
void SieveOfEratosthenes(int n){

    // Bool array to store ture to all the numbers
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int p=2;p*p<=n;p++){

        // if the multiples are prime then we have to set 
        // them false
        if(prime[p]==true){
            for(int i=p*p;i<=n;i += p){
                prime[i]=false;
            }
        }
    }

    for(int p=2;p<=n;p++){
        if(prime[p]==true)
            cout<<p<<" ";
    }

}

//--------------------------------- LCM of two numbers ------------------

long long gcd(long long int a,long long int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b );
}

long long lcm(int a,int b){
    return(a/gcd(a,b))*b;
}

//--------------------------------------- Factorial-------------------
int factorial(int n){
    return (n==0||n==1?1:n*factorial(n-1));
}

// -------------------------------------- Find digits---------------------
int findDigits(int n){

    if(n<0){
        return 0;
    }

    if(n<=1){
        return 1;
    }

    double digits = 0;
    for(int i=2;i<=n;i++){
        digits  = digits +log10(i);
    }
    return floor(digits)+1;
}

// --------------------------------- Check for prime -------------------
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n<=3){
        return false;
    }

    if(n%2==0||n%3==0){
        return false;
    }

    for(int i=5;i*i<=n; i += 6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

int main(){
    // Generating prime numbers
    // int n = 13;
    // cout << "Following are the prime numbers smaller "
    //      << " than or equal to " << n << endl;
    // SieveOfEratosthenes(n);
    // cout<<endl;

    // 2. LCM of two numbers
    // int a = 15, b = 20;
    // cout <<"LCM of " << a << " and "
    //      << b << " is " << lcm(a, b);
    // cout<<endl;

    //3. Factorial of two numbers
    // int n=5;
    // cout<<factorial(5)<<endl;

    // 4. Count digits
    // cout<<findDigits(5)<<endl;

    // 5. Check for prime
    isPrime(11) ? cout << " true\n" : cout << " false\n";
    isPrime(15) ? cout << " true\n" : cout << " false\n";
    return 0;
}