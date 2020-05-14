#include <iostream>
using namespace std;

int main(void){
int num1=0;int num2=0;int num3=0;
cout << "Inserte los tres numeros a promediar";
cin >> num1 >> num2 >> num3;
int suma = num1 + num2 + num3;
float div = suma/3;
cout <<"El promedio es: " << div;
}
