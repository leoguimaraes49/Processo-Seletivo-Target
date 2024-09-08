#include <iostream>
using namespace std;

bool ehFibonacci(int n) {
    int a = 0, b = 1, temp;

    //Caso o número seja 0 ou 1, já pertence à sequência
    if (n == 0 || n == 1) {
        return true;
    }

    //Gera a sequência de Fibonacci
    while (a <= n) {
        if (a == n) {
            return true;
        }
        temp = a + b;
        a = b;
        b = temp;
    }

    return false;
}

int main() {
    int numero;

    cout << "Informe o número: ";
    cin >> numero;

    if (ehFibonacci(numero)) {
        cout << "O número " << numero << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << "O número " << numero << " não pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}
