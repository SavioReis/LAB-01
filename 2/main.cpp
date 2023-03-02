#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{

int M = 0;
int N = 0;

std::cout<<"Digite o valor de M"<<"\n";
std::cin>>M;
std::cout<<"Digite o valor de N"<<"\n";
std::cin>>N;

int L1 = std::pow(M,2)-std::pow(N,2);
int L2 = 2*M*N;
int hipotenusa = std::pow(M,2)+std::pow(N,2);

std::cout<<"Lado 1 : "<<L1<<" , Lado 2 : "<<L2<<" , Hipotenusa : "<<hipotenusa<<" Do Triangulo";

}
