#include <iostream>
#include <string.h>
using namespace std;
const int longCad = 20;
struct Productos
{
    int cantidad;
    double preciou; 
    char nom_pro[longCad+1]; 
    double preciot; 
};
//Funciones
int lector(int c, Productos x[]);
int costxart (int c, Productos x[]);
int contenido (int c, Productos x[]);
double total (int c, Productos x[]);

int main (void){
int cantidart;
cout << "Digite la cantidad de productos que lleva: " << endl;
cin >> cantidart;
Productos listado[cantidart]{};
lector(cantidart, listado);
costxart (cantidart, listado);
contenido (cantidart, listado);
total (cantidart, listado);
}

//Funciones
//Inserta los datos de cada producto al arreglo que contiene las estructuras
int lector(int c, Productos x[]){
    
    for (int i = 0; i < c;i++){
        cout << "Inserte sus productos por cantidad, nombre y precio unitario:" << endl;
        cin >> x[i].cantidad;
        cin >> x[i].nom_pro;
        cin >> x[i].preciou;
    }

}
//Calcula el precio total segun la cantidad del articulo
int costxart (int c, Productos x[]){
    for (int i = 0; i < c;i++){
        x[i].preciot = x[i].cantidad * x[i].preciou; 
    }
}
//Muestra la factura con los datos procesados, ademas agregue los "if" 
//que revisan la cantidad de letras del nombre del producto para que tabule 
//y muestre la factura de forma mas ordenada
int contenido (int c, Productos x[]){
    //nombre, cantidad, precio unitario
    cout << "Factura: " << endl;

    cout << "Cant.\tNom.\t\t\tPre/u.\tPre/t" << endl;
    for (int i = 0; i < c;i++){
        string nom = x[i].nom_pro;
    if (nom.length() < 8){

        nom += "\t\t\t";
        }
    
    else if (nom.length() < 16) {
        nom += "\t\t";
        }
    else {
        nom += "\t";
        }
        cout << x[i].cantidad << "\t" << nom << "$ " << x[i].preciou << "\t$ "<< x[i].preciot << endl;

    }
}
//Calculo del total a pagar por los articulos
double total (int c, Productos x[]){
    double total = 0;
    for (int i = 0; i < c;i++){
        total = total + x[i].preciot;
    }
cout << "El total es: " << "$ " << total << endl;
}

