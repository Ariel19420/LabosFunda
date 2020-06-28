#include <iostream>
using namespace std;
int main (void){
std::string murcielago[10] = {"m","u","r","c","i","e","l","a","g","o"}; std::string palabra;
cout << "Inserte la palabra que desea codificar: " << endl;
cin >> palabra;
for (int i = 0; i < palabra.length();i++){
    for (int y = 0; y < 10; y++){
        string s; 
        s = palabra[i];
        if (s == murcielago[y])
        palabra [i] = to_string(y)[0];
    }
}
cout << "La palabra codificada es: " << palabra <<endl; 
}