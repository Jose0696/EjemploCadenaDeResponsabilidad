cmake_minimum_required(VERSION 3.17)
project(investigacion_cadena_de_responsabilidad)

set(CMAKE_CXX_STANDARD 14)

add_executable(investigacion_cadena_de_responsabilidad main.cpp Compra.cpp Compra.h Aprobador.cpp Aprobador.h Comprador.h Comprador.cpp Director.h Director.cpp Gerente.h Gerente.cpp)