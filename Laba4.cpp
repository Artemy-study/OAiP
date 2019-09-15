#include <iostream>
#include <math.h>

void writeResult(double result);

double funktionYx(double x);

double funktionSx(double i, int n);

double funktionAbs(double Yx, double Sx);

double factorial(int N);

using namespace std;

int main() {
    double a, b, h;
    int choosFunk, n;
//    cout << "write a ";
//    cin >> a;
//    cout << "write b ";
//    cin >> b;
//    cout << "write h ";
//    cin >> h;
//    cout << "write n ";
//    cin >> n;
    cout << "choose funktion: " << endl << "1: Yx" << endl << "2: Sx" << endl << "3: |Yx-Sx|" << endl;
    cin >> choosFunk;
    a = 0.1;
    b = 1;
    h = 0.1;
    n = 10;
    switch (choosFunk) {
        case 1: {
            for (double i = a; i < b; i+=h) {
                writeResult(funktionYx(i));
            }
        }
            break;
        case 2: {
            for (double i = a; i < b; i+=h) {
                writeResult(funktionSx(i, n));

            }
        }
            break;
        case 3: {
            for (double i = a; i < b; i+=h) {
                writeResult(funktionAbs(funktionYx(i), funktionSx(i, n)));
            }
        }
            break;
    }
}


double funktionSx(double i, int n) {
    double Sx=0;
    for (int k = 0; k <= n; k++) {
        Sx += (pow((-1), k)) * (pow(i, (k*2+1))) / (factorial(k*2+1));
    }
    return Sx;
}

double funktionYx(double x) {
    return sin(x);
}

double funktionAbs(double Yx, double Sx) {
    return fabs(Yx - Sx);
}

void writeResult(double result) {
    cout << result << endl;
}

double factorial(int N) {
    if (N == 0) return 1;
    else return N * factorial(N - 1);
}