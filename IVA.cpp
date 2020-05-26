#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(){
    int pais;
    float dinero,total;

    cout << "A que pais ingresara:" << endl <<
    "1.El Salvador" << endl <<
    "2.Guatemala" << endl <<
    "3.Honduras" << endl <<
    "4.Espana" << endl;
    cin >> pais;

    cout << "Cantidad de dinero a procesar:" << endl;
    cin >> dinero;
    cout << fixed << setprecision(2) << dinero << endl;

    switch (pais)
    {
    case 1:
        total = dinero + (0.13*dinero);
        cout << "Su total con IVA es: " << total << endl; 
        break;
    case 2:
        total = dinero + (0.09*dinero);
        cout << "Su total con IVA es: " << total << endl; 
        break;
    case 3:
        total = dinero + (0.15*dinero);
        cout << "Su total con IVA es: " << total << endl; 
        break;
    case 4:
        total = dinero + (0.20*dinero);
        cout << "Su total con IVA es: " << total << endl; 
        break;
    default:
        cout << "País no valido" << endl;
        break;
    }
    system("pause");
    return 0;
}