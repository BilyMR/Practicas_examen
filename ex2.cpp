#include <iostream>

int main()
{

    int inv1;
    int inv2;
    
    float int1;
    float int2;
    
    int año = 1;
    
    std::cout<<"ingrese inversión 1 y 2:"<<std::endl;
    std::cin>>inv1>>inv2;
    std::cout<<"ingrese interes 1 y 2:"<<std::endl;
    std::cin>>int1>>int2;
    
    float int_sim = inv1 * 0.10;
    float int_com = int2;
    
    float intAux = inv2;

    while(intAux <= inv1) {
        inv1 += int_sim;
        intAux += (intAux * int_com);
        año++;
        std::cout<<"Año: "<<año<< "\t" <<"Dafne = "<< inv1<<"\t"<<"Cleo = "<<intAux<<std::endl;    
    }
    
    return 0;
}
