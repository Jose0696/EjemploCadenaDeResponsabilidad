//
//	Jose Sequeira
//

#include "Aprobador.h"

Aprobador *Aprobador::setAgregarSiguiente(Aprobador *aprobador) {
    siguiente = aprobador;
}

Aprobador *Aprobador::getSiguiente()const{
    return siguiente;
}