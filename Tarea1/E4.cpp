#include <iostream>
using namespace std;

int main(void){
string obj; float pre = 0; int cant = 0;
cout << "Inserte el nombre del producto seguido de su precio y cantidad a comprar: ";
getline(std::cin, obj); cin >> pre >> cant ;
float total = pre * cant;
cout << "Su compra es: " << obj << ", con un total a pagar de: " << total; 
}