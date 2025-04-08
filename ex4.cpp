#include <iostream>

int main()
{
    int a;
    int numeros_ingresados = 0;
    float suma_total = 0;
    float suma_neg = 0;
    float suma_pos = 0;
    
    do{
        std::cin>>a;
        if(a != 0){
            numeros_ingresados++;
        }
        if(a < 0) {
            suma_neg += a;
        }
        if(a > 0) {
            suma_pos += a;
        }
        
        suma_total += a;
    } while (a != 0);
    
    float promedio = suma_total / numeros_ingresados;
    
    std::cout<<"Numeros ingresados: "<<numeros_ingresados<<std::endl;
    std::cout<<"Suma total: "<<suma_total<<std::endl;
    std::cout<<"Promedio: "<<promedio<<std::endl;
    std::cout<<"Suma negativos: "<<suma_neg<<std::endl;
    std::cout<<"Suma positivos: "<<suma_pos<<std::endl;
    
    return 0;
}
