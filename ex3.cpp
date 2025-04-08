#include <iostream>
#include <cmath>

int main()
{
    double x, n;
    std::cin>>x>>n;
    
    double result = 0;
    int sign = 1;
    
    for(int i = 1; i <= 2*n-1; i += 2) {
        double power = pow(x, i);
        
        double factorial = 1;
        for(int j = 1; j <= i; j++){
            factorial *= j;
        }
        
        result += (power / factorial) * sign;
        sign *= -1;
        
    }
    
    std::cout<<result<<std::endl;

    return 0;
}
