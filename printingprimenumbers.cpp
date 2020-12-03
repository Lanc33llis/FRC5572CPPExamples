#include <iostream>

using namespace std;

bool isPrime(int i){
    for (int o = 2; o < i; ++o)
        if (i % o == 0)
            return false;
    return true;
}

int main(){
    for (int i = 0; i < 250; i++){
        auto ans = isPrime(i);
        cout << i;
        if (ans)
            cout << " is prime\n";
        else
            cout << " is not prime\n";
    }
}