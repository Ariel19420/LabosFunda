#include <iostream>
using namespace std;

int main (void){
int num;
cout << "Ingrese el numero que desea verificar \n";
cin >> num;
if (num%2 == 0){
    cout << "El numero ingresado es par. \n";
}
else{
    cout << "El numero ingresado es impar. \n";
}
}