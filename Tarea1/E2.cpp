#include <math.h> 
#include <iostream>
using namespace std;

int main(void){
int rad=0; float pi=3.14;
cout << "Inserte el radio";
cin >> rad;
float area = pi * pow(rad,2);
float per = 2 * pi * rad;
cout << "Su area es:" << area << ", y su perimetro es:" << per;
}
