#include <iostream>
int ano (int x);
int calendario31 (int d,int m,int a);
int calendario30 (int d,int m,int a);
int calendario29 (int d,int m,int a);
int calendario28 (int d,int m,int a);
using namespace std;

int main (void){
int d, m, a;
cout << "Inserte el dia: " <<endl;
cin >> d;
cout << "Inserte el mes: " <<endl;
cin >> m;
cout << "Inserte el ano: " <<endl;
cin >> a;
if (m != 2){
    if (d > 0 && d <= 31){
        calendario31 (d, m, a);
    }
    else
    {
        calendario30 (d, m, a);
    }
}

else if (ano(a) == true && m == 2){
    calendario29 (d, m, a);
}
else if (ano(a) == false && m == 2){
    calendario28 (d, m, a);
}


}

//Funciones

int ano (int x){
if (x % 400 == 0){
        return true;
    }
if (x % 4 == 0 && x  % 100 != 0){
        return true;
    }
else
{
    return false;
}

}

int calendario31 (int d,int m,int a){
if (a > 0 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) &&  d > 0 && d <= 31 ){
    d++;
        if (d == 32){
            d = 1;
            m++;
            if (m == 13){
                m = 1;
                a++;
            }
        }  
    cout << "El dia despues de la fecha indicada es: " << d << "/" << m << "/" << a << endl;
}
else
{
    cout << "ERROR: Una de las variables no es valida" << endl;
}
}

int calendario30 (int d,int m,int a){
if (a > 0 && (m == 4 || m == 6 || m == 9 || m == 11)  &&  d > 0 && d <= 31 ){
    d++;
        if (d == 32){
            d = 1;
            m++;
            if (m == 13){
                m = 1;
                a++;
            }
        } 
    cout << "El dia despues de la fecha indicada es: " << d << "/" << m << "/" << a << endl; 
}
else
{
    cout << "ERROR: Una de las variables no es valida" << endl;
}
}

int calendario28 (int d,int m,int a){
if (a > 0 && m == 2 &&  d > 0 && d <= 28 ){
    d++;
        if (d == 29){
            d = 1;
            m++;   
        }  
    cout << "El dia despues de la fecha indicada es: " << d << "/" << m << "/" << a << endl;
}
else
{
    cout << "ERROR: Una de las variables no es valida" << endl;
}
}

int calendario29 (int d,int m,int a){
if (a > 0 && m == 2 &&  d > 0 && d <= 29 ){
    d++;
        if (d == 30){
            d = 1;
            m++;   
        }  
    cout << "El dia despues de la fecha indicada es: " << d << "/" << m << "/" << a << endl;
}
else
{
    cout << "ERROR: Una de las variables no es valida" << endl;
}
}