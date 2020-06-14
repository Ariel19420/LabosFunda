#include <iostream>
using namespace std;
double desseguro(double x);
double desAFP(double y);
double desrent(double z);
double horas(double h);
double horase(double h);

//MAIN CODIGO

int main (void){
//Entrada
    double h, he, salt, salr, hp, hpe; 
    cout << "Inserte la cantidad de horas trabajas:"<< endl;
    cin >> h;
    cout << "E inserte la cantidad de horas extras que ha trabajado:"<< endl;
    cin >> he;
//Proceso
    hp = horas(h);
    hpe = horase(he);
    salt = hp + hpe;
    salr = salt - desseguro(salt) - desAFP(salt) - desrent(salt); 
//Salida
    cout << "Su salario total es de: $" << salt << endl;
    cout << "Su salario real (con descuentos) es de: $" << salr << endl;
}

//FUNCIONES

//Descuentos
double desseguro(double x){
    double saldes;
    saldes = x*0.04;
    return saldes;
}

double desAFP(double y){
    double saldes;
    saldes = y*0.0625;
    return saldes;
}

double desrent(double z){
    if (z >= 500){
        double saldes;
        saldes = z*0.1;
        return saldes;
    }
    else{
        return 0;
    }
}
//Horas
double horas(double h){
    double horas;
    horas = h*1.75;
    return horas;
}

double horase(double h){
    double horase;
    horase = h*2.50;
    return horase;
}
