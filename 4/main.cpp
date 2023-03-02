#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{

float valorPrestacao = 0;
float taxaJuros = 0;
float tempoAtraso = 0;

std::cout<<"Insira o valor da Prestação : "<<"\n";
std::cin>>valorPrestacao;
std::cout<<"Insira a taxa de Juros : "<<"\n";
std::cin>>taxaJuros;
std::cout<<"Insira o tempo de atraso : "<<"\n";
std::cin>>tempoAtraso;

float valor = valorPrestacao+(valorPrestacao*(taxaJuros/100)*tempoAtraso);

std::cout<<std::fixed<<std::setprecision(2)<<"Valor atualizado da prestação : "<<valor<<"\n";

}

