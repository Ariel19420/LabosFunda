#include <math.h> 
#include <iostream>
using namespace std;

int main(void){
int a = 0; int b = 0; int c = 0;
cout << "Inserte las cifras que tomaran las variables en la formula general";
cin >> a >> b >> c;
float num1 = -b + sqrt(pow(b,2) - 4 * a * c);
float num2 = -b - sqrt(pow(b,2) - 4 * a * c);
float den = 2 * a;
float x1 = num1 / den;
float x2 = num2 / den;
cout << "X1 = " << x1 << ", y X2 = " << x2;
}