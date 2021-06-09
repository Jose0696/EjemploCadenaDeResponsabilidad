//
//	Jose Sequeira
//

#ifndef INVESTIGACION_CADENA_DE_RESPONSABILIDAD_APROBADOR_H
#define INVESTIGACION_CADENA_DE_RESPONSABILIDAD_APROBADOR_H
#include "Compra.h"

class Aprobador {
private:
    Aprobador * siguiente;
public:
    Aprobador *setAgregarSiguiente(Aprobador *aprobador);
    Aprobador *getSiguiente()const;
    virtual void Procesar(Compra *c) = 0;

};


#endif //INVESTIGACION_CADENA_DE_RESPONSABILIDAD_APROBADOR_H
