#include <iostream>

int main(){
    
    int a;
    std::cin>> a;
    float result = 1;
    int factorial = 1;
    
    for(int i = 1; i <= a; i++) {
        factorial *= i;
        result += (1.0 / factorial);
        std::cout<<result<<std::endl;
    }
    
    return 0;
}
