#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{

float popular;
float geral;
float arquibancada;
float cadeiras;

std::cout<<"Insira o preço do ingresso popular"<<"\n";
std::cin>>popular;

std::cout<<"Insira o preço do ingresso da geral"<<"\n";
std::cin>>geral;

std::cout<<"Insira o preço do ingresso da arquibancada"<<"\n";
std::cin>>arquibancada;

std::cout<<"Insira o preço do ingresso da cadeiras"<<"\n";
std::cin>>cadeiras;

float publico = ((10/100)+popular)*((50/100)+geral)*((30/100)+arquibancada)*((10/100)+cadeiras);

std::cout<<std::fixed<<std::setprecision(2)<<"RENDA : "<<publico<<"\n";
}
