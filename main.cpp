#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Vypocet podle Ohmova zakona (V = I * R)\n";
    cout << "Co chcete spocitat?\n"
         << "1: Napeti (V)\n"
         << "2: Proud (I)\n"
         << "3: Odpor (R)\n"
         << "Zadejte volbu (1-3): ";
    int volba;
    cin >> volba;

    double V, I, R;
    switch (volba) {
        case 1: // V = I * R
            cout << "Zadejte proud (I v amperech): ";
            cin >> I;
            cout << "Zadejte odpor (R v ohmech): ";
            cin >> R;
            V = I * R;
            cout << "Napeti V = " << V << " V\n";
            break;
        case 2: // I = V / R
            cout << "Zadejte napeti (V ve voltech): ";
            cin >> V;
            cout << "Zadejte odpor (R v ohmech): ";
            cin >> R;
            if (R == 0) {
                cout << "Chyba: deleni nulou (odpor = 0)!\n";
            } else {
                I = V / R;
                cout << "Proud I = " << I << " A\n";
            }
            break;
        case 3: // R = V / I
            cout << "Zadejte napeti (V ve voltech): ";
            cin >> V;
            cout << "Zadejte proud (I v amperech): ";
            cin >> I;
            if (I == 0) {
                cout << "Chyba: deleni nulou (proud = 0)!\n";
            } else {
                R = V / I;
                cout << "Odpor R = " << R << " ohm\n";
            }
            break;
        default:
            cout << "Neplatna volba.\n";
    }

    return 0;
}
