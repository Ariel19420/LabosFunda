#include <iostream>
double matrix (float x[]);
double prom (int y, float x[]);
using namespace std;
int main (void){
int f;
cout << "Cuantos estudiantes promediaran: " << endl;
cin >> f;
double matriz[f];
float notas[5]; 
for (double p = 0; p < f;p++ ){
    cout << "Inserte las 5 notas: " << endl;
    matrix(notas);
    prom(p,notas);
}

}

//Funciones

double matrix (float x[]){
    double notas;
    for (int xd = 0; xd < 5; xd++){
        cin >> notas;
        x[xd] = notas;
    }
}

double prom (int y, float x[]){
    float per = 0;
    for (int i = 0 ; i < 5; i++){
        per += x[i] * 0.20;

    }
      if (per >= 6){
        cout << "Estudiante "<< y+1 << ": \n" << "Aprobo con " << per << " de nota."<< endl;
    }
    else
    {
        cout << "Estudiante "<< y+1 << ": \n" << "Reprobo con " << per << " de nota."<<endl;
    }
}
