//
//	Jose Sequeira
//

#include "Comprador.h"
#include "Director.h"
#include "Gerente.h"

int main() {
    Comprador *comprador = new Comprador();
    Gerente *gerente = new Gerente();
    Director *director = new Director();

    //aqui cumple de la cadena de responsabilidad
    gerente->setAgregarSiguiente(director);
    comprador->setAgregarSiguiente(gerente);

    Compra *compra = new Compra();
    double importe =1;
    while(importe != 0){
        cout << "Ingrese el importe de la compra o 0 para cerrar: " ;
        cin>>importe;
        compra->setImporte(importe);
        comprador->Procesar(compra);
    }

    delete comprador;
    delete gerente;
    delete director;

    return 0;
}
