#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{

float i = 0;
float p = 0;
float n = 0;

std::cout<<"Insira o valor de i"<<"\n";
std::cin>>i;
std::cout<<"Insira o valor de p"<<"\n";
std::cin>>p;
std::cout<<"Insira o valor de n"<<"\n";
std::cin>>n;

float facil = 1 + i;
float valorAcumulado = std::pow(facil,n)/i*p;

std::cout<<"Valor Acumulado : "<<valorAcumulado<<"\n";

}

