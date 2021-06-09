//
//	Jose Sequeira
//

#include "Comprador.h"

void Comprador::Procesar(Compra *i){
    if(i->getImporte() <= 100 ){
        cout<<"Compra aprobada por el comprador " <<endl;
    }else{
        Aprobador::getSiguiente()->Procesar(i);
    }
}