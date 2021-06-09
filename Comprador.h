//
//	Jose Sequeira
//

#ifndef INVESTIGACION_CADENA_DE_RESPONSABILIDAD_COMPRADOR_H
#define INVESTIGACION_CADENA_DE_RESPONSABILIDAD_COMPRADOR_H
#include "Aprobador.h"

class Comprador : public Aprobador{
public:
    void Procesar(Compra *i);
};


#endif //INVESTIGACION_CADENA_DE_RESPONSABILIDAD_COMPRADOR_H
