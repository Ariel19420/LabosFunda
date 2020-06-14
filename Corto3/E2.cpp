#include <iostream>
using namespace std;
int evaluar (int x);  
int intentos ();
int intento ();
//MAIN CODIGO
int main (void){
    int numero = 69,  x, op, intento = 5;
    while (intento != 0){
//Entrada
        cout << "Tiene 5 intentos para encontrar el numero secreto, el cual esta entre 0 y 100." << endl;
        cout << "Encuentre el numero secreto: " << endl;
        cin >> x;
//Caso en que se gana
        if (x == numero){
            cout << "Felicidades, encontraste el numero secreto." << endl;
            break;
        }
//Caso contrario
        else{
            intento--;  
            evaluar(x);
            cout << "Te quedan " << intento << " intentos" << endl;
            cout << "Si ya no quieres jugar presiona: 1"<<endl;
            cout << "Para continuar presiona: 0" << endl;
            cin >> op;
            if (op == 1){
                break;
            } 
        
        }
    }
//Salida
    cout << "FIN DEL JUEGO" << endl;

} 

//FUNCIONES

int evaluar (int x){
    if (x > 69){
        cout << "El numero que se ingresa es mayor al numero secreto"<< endl;
    }

    if (x < 69){
        cout << "El numero que se ingresa es menor al numero secreto"<< endl;
    }
}

