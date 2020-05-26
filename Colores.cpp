#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int color;

    cout << "Escriba el numero de un color para reclamar su premio" << endl << 
    "1.Rojo" << endl << 
    "2.Amarillo" << endl << 
    "3.Azul" << endl << 
    "4.Verde" << endl << 
    "5.Rosado" << endl; 
    cin >> color;
    switch (color)
    {
    case 1:
        cout << "Su premio es: $100" << endl;
        break;
    case 2:
        cout << "Su premio es: $5" << endl;
        break;
    case 3:
        cout << "Su premio es: $25" << endl;
        break;
    case 4:
        cout << "Su premio es: $2" << endl;
        break;
    case 5:
        cout << "Su premio es: $15" << endl;
        break;
    default:
        cout << "Color no valido" << endl;
        break;
    }
    system("pause");
    return 0;
}