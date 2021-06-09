//
//	Jose Sequeira
//

#ifndef INVESTIGACION_CADENA_DE_RESPONSABILIDAD_GERENTE_H
#define INVESTIGACION_CADENA_DE_RESPONSABILIDAD_GERENTE_H
#include "Aprobador.h"

class Gerente :public Aprobador{
public:
    void Procesar(Compra *i);
};


#endif //INVESTIGACION_CADENA_DE_RESPONSABILIDAD_GERENTE_H
