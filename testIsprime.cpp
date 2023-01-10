#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n <=1) return false;
    for(int j=2; j<=n/2; j++){
        if(n % j == 0) return false;
    }
    return true;
}
int isPrimeProduct(int n){
    if(isPrime(n)) return 0;
    for(int i=2; i<=n/2; i++){
        if(isPrime(i) && n%i==0 && isPrime(n/i)){
            return 1;
        }
    }
    return 0;
}
int main(){
 int n = isPrimeProduct(4);
 if(n == 1) cout<<"prime product";
 else cout<<"Not prime product";
    return 0;
}
