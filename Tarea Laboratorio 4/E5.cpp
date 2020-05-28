#include <iostream>
using namespace std;

int main (void){
string pal; 
cout << "Ingrese la palabra a verificar: \n" ;
cin >> pal;
int pos = pal.length();
if (pal[0] == pal[pos - 1]){
    cout << "Si tienen la misma letra. \n";
}
else {
    cout << "No tienen la misma letra. \n";
}
}
