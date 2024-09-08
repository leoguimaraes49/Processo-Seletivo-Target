#include <iostream>
#include <string>
using namespace std;

//Função para inverter a string
string inverterString(string str) {
    string invertida = "";
    
    //Percorre a string de trás para frente e adiciona os caracteres à nova string
    for (int i = str.length() - 1; i >= 0; i--) {
        invertida += str[i];
    }
    
    return invertida;
}

int main() {
    string texto;

    //Entrada da string
    cout << "Informe a string: ";
    getline(cin, texto);

    //Inverte a string e exibe o resultado
    string resultado = inverterString(texto);
    cout << "String invertida: " << resultado << endl;

    return 0;
}
