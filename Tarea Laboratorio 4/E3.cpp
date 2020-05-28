#include <iostream>
using namespace std;

int main (void){
int num;
cout << "Inserte el numero que desee verificar \n";
cin >> num;
if (num > 0 ){
    cout << "El numero insertado es positivo. \n";
}
if (num < 0){
    cout << "El numero insertado es negativo. \n";
}
else {
    cout << "El numero insertado es cero \n";
}
}