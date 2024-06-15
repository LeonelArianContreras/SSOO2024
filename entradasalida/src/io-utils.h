#ifndef IO_UTILS_H
#define IO_UTILS_H
// #include <utils/estructuras_compartidas.h>
// #include <utils/logger.h>
// #include "io-estructuras.h"
// #include <utils/estructuras_compartidas.h>
// #include <utils/logger.h>
// #include "io-estructuras.h"
#include "io-config.h"
#include "io-estructuras.h"

// Incluye las estructuras necesarias:

// Setea el socket con la memoria:
void set_socket_memory(int socket, t_interfaz * interfaz);

// Devuelve el socket con la memoria:
int get_socket_memory(t_interfaz * interfaz);

// Setea el socket con el kernel:
void set_socket_kernel(int socket, t_interfaz * interfaz) ;

// Devuelve el socket con el kernel:
void set_socket_kernel(int socket, t_interfaz * interfaz);

// Setea el nombre de la interfaz:
int get_socket_kernel(t_interfaz * interfaz);

// Devuelve el nombre de la interfaz:
void set_interfaz_name(char* name, t_interfaz * interfaz) ;

char *get_interfaz_name(t_interfaz * interfaz);

//Devuelve el tiempo de una interfaz
int get_tiempo_unidad(t_interfaz * interfaz);

#endif // IO_UTILS_H