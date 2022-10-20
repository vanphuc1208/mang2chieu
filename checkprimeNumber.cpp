#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n) {
    if(n < 2){
       return false;
        }
    
    
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
        
    }
    return true;
    
}
 
int main(){
    int n;
    cout << "\nNhap n = ";
    cin >> n;
    
    if(isPrime(n)){
        cout << n << " la so nguyen to\n";
    }else{
        cout << n << " khong phai so nguyen to\n";
    }
}
 
