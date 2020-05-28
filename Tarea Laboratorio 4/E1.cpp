#include <iostream>
using namespace std;

int main (void){
int dividendo;
int divisor;
double division;
cout << "Inserte el dividendo y el divisor:  \n";
cin >> dividendo;
cin >> divisor;
division = dividendo%divisor;
if (division == 0){
    cout << "El numero si es divisible por el otro.  \n";
}
else
{
    cout << "El numero no es divisible.  \n";
}


}