#include <iostream>
int hora (int h,int m,int s);
using namespace std;

int main (void){ 
int h, m, s;
cout << "Inserte la hora: ";
cin >> h;
cout << "Inserte los minutos: ";
cin >> m;
cout << "Inserte los segundos: ";
cin >> s;
hora (h,m,s);
}

//Funcion
int hora (int h,int m,int s){
if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59){
    s++;
        if (s == 60){
            s = 0;
            m++;
            if (m == 60){
                m = 0;
                h++;
                if (h == 24){
                    h = 0;
                }
            }
        } 
cout << "La hora un segundo despues es: " << h <<":"<< m <<":"<< s << endl;  
}
else
{
    cout << "ERROR: Variable incorrecta";
}
}