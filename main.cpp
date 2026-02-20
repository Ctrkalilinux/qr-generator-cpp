#include <iostream>

#include <cstdlib>

using namespace std;

int main(){
    string link;

    cout << "Ingresa el link: ";
    getline(cin, link);

    string comando = "qrencode -o codigo_qr.png \"" + link + "\"";

    int resultado = system(comando.c_str());

    if (resultado == 0) {
        cout << "QR generado como codigo_qr.png " << endl;
        
    } else {
        cout << "Error al generar QR. " << endl;
        
    }

    return 0;


}
