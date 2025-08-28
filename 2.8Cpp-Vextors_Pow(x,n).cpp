#include <iostream>

using namespace std;

int CalcBinPow(int x, int n){
    if(n==0){
        return 1;
    }

    long int result = 1;
    long int binform = n;

    if (binform < 0){
        x= 1/x;
        binform = -binform;
    }

    while(binform>0 ){
        if(binform%2 ==1 ){
            result*= x;
            x *= x;
            binform /= 2;    
        }else{
            x *= x;
            binform /= 2; 
        }
    }
    return result;
}

int main(){
    int base = 9, exp = 5;
    

    long int ans = CalcBinPow(base, exp);
    cout << "The result of " << base << " raised to the power of " << exp << " is: " << ans << endl;
    return 0;
}