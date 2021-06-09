//
//	Jose Sequeira
//

#include "Director.h"

void Director::Procesar(Compra *i){
    if(i->getImporte() <= 5000 || i->getImporte() >= 5000){
        cout<<"Compra aprobada por el director " <<endl;
    }else{
        Aprobador::getSiguiente()->Procesar(i);
    }
}