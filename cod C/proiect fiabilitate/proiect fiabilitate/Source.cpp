#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Creare vector de fiabilitati ale componentelor sistemului
    vector<double> fiabilitate = { 0.63, 0.69, 0.72, 0.77, 0.83, 0.87, 0.95, 0.97 };

    // Calculare fiabilitate sistem
    double fiabilitate_sistem = 1;
    for (int i = 0; i < fiabilitate.size(); i++) {
        fiabilitate_sistem *= fiabilitate[i];
    }

    // Calculare probabilitate nefunctionare sistem
    double prob_nefunctionare_sistem = 1 - fiabilitate_sistem;

    // Afisare probabilitate nefunctionare sistem
    cout << "Probabilitatea de nefunctionare a sistemului este: " << prob_nefunctionare_sistem << endl;

    // Calculare si afisare fiabilitate sistem pentru fiecare componenta in parte
    double fiabilitate_parciala = 1;
    for (int i = 0; i < fiabilitate.size(); i++) {
        fiabilitate_parciala *= fiabilitate[i];
        cout << "Fiabilitatea sistemului pentru primele " << i + 1 << " componente este: " << fiabilitate_parciala << endl;
    }

    // Calculare si afisare probabilitate nefunctionare sistem pentru fiecare componenta in parte
   

    return 0;
}
