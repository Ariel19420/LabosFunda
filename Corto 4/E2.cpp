#include <iostream>
using namespace std;
float promedio(float x);
float comparadormayor(float prom,float q);
float comparadormenor(float prom,float q);
int main (void){ 
float arreglo[25]{};float y = 0;int sumando = 0;float pro = 0;int mayor = 0; int menor = 0;
cout << "Inserte las alturas en centimetros: " << endl;
for(int i = 0; i < 25; i++){
   cin >> y; 
   arreglo[i] = y;
}
for(int i = 0; i < 25; i++){
    sumando += arreglo[i] ;
}
pro = promedio(sumando);
for(int i = 0; i < 25; i++){
    mayor += comparadormayor(pro,arreglo[i]) ;
    menor += comparadormenor(pro,arreglo[i]) ;
}
cout << "El promedio de las alturas es: " << pro << " cm" << endl;
cout << "Hay " << mayor << " alturas arriba de la media y " << menor << " por debajo" << endl;
}

//Funciones

float promedio(float x){
    float f = 0;
    f = x/25;
    return f;
}   
//Comparadores
float comparadormayor(float prom,float q){
    int mayor = 0;
    if(q > prom){
        return 1;
    }
    else
    {
        return 0;
    }  
}
float comparadormenor(float prom,float q){
    int menor = 0;
    if(q < prom){
       return 1;
    }
    else {return 0;} }
