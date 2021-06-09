//
//	Jose Sequeira
//

#include "Gerente.h"

void Gerente::Procesar(Compra *i){
    if(i->getImporte() <= 1000){
        cout<<"Compra aprobada por el gerente " <<endl;
    }else{
        Aprobador::getSiguiente()->Procesar(i);
    }
}