//
//	Jose Sequeira
//

#ifndef INVESTIGACION_CADENA_DE_RESPONSABILIDAD_DIRECTOR_H
#define INVESTIGACION_CADENA_DE_RESPONSABILIDAD_DIRECTOR_H
#include "Aprobador.h"

class Director :public Aprobador{
public:
    void Procesar(Compra *i);
};


#endif //INVESTIGACION_CADENA_DE_RESPONSABILIDAD_DIRECTOR_H
