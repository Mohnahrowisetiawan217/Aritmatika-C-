#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

// [ Validasi operasi :P ]
bool operasiValid(char op) {
    return op == '+' || op == '-' || op == '*' || op == '/' || op == '%';
}

int main() {
    float angka[3], hasil;         // [Bisa di edit angka :)]
    char operasi[2];             // [Bisa di edit operasi :)]

    cout << "=====================================" << endl;
    cout << "  Kalkulator Aritmatika Unlimited :)   " << endl;
    cout << "=====================================" << endl << endl;

    // [ Input angka karo operasi ]
    for (int i = 0; i < 3; i++) {     // [Bisa di edit angka :)]
        cout << "Masukkan angka ke-" << i+1 << " : ";
        while (!(cin >> angka[i])) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input angka tidak valid. Silakan masukkan angka ke-" << i+1 << " lagi : ";
        }

        // [Gasong]
        cout << endl;

        if (i < 2) {        // [Bisa di edit operasi :)]
            string opStr;
            char op;
            bool valid = false;
            do {
                cout << "Pilih operasi setelah angka ke-" << i+1 << " (+, -, *, /, %) : ";
                cin >> opStr;
                if (opStr.length() == 1 && operasiValid(opStr[0])) {
                    op = opStr[0];
                    valid = true;
                } else {
                    cout << "Operasi tidak valid! Silakan ulangi." << endl;
                }
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } while (!valid);
            operasi[i] = op;

            // [Gasong]
            cout << endl;
        }
    }

    // [ Proses & tampilan ]
    hasil = angka[0];
    cout << fixed << setprecision(2);
    cout << "\nLangkah Perhitungan:" << endl;
    for (int i = 0; i < 2; i++) {         // [Bisa di edit operasi :)]
        cout << setw(7) << hasil << " " << operasi[i] << " " << angka[i+1] << " = ";
        switch (operasi[i]) {
            case '+': hasil += angka[i+1]; break;
            case '-': hasil -= angka[i+1]; break;
            case '*': hasil *= angka[i+1]; break;
            case '/': 
                if (angka[i+1] != 0) hasil /= angka[i+1];
                else { cout << "Error: Pembagian dengan nol!" << endl; return 1; }
                break;
            case '%': 
                if (angka[i+1] != 0) hasil = (int)hasil % (int)angka[i+1];
                else { cout << "Error: Sisa bagi dengan nol!" << endl; return 1; }
                break;
        }
        cout << hasil << endl;
    }

    cout << "\n=====================================" << endl;
    cout << "      Hasil Akhir = " << hasil << endl;
    cout << "=====================================" << endl;

    
}