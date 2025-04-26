#include <iostream>
using namespace std;

int factoriala(int n){
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    return product;
}

int factorialb(int n){
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    return product;
}

int factorialc(int n){
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    return product;
}

int main(){
    int a = 5, b = 2, c = 3;
    int result = factoriala(a) / (factorialb(b) * factorialc(c));
    
    cout << "Result: " << result << endl;
    return 0;
}
 