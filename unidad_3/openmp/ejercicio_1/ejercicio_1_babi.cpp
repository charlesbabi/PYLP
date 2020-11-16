#include <omp.h>
#include <iostream>

//Para definir la cantidad de hilos
#define hilos 10

int main()
{

  int nthreads;
  int thread;
  int variable = 777;

  //Punto 2 para ejecutar por 10 Hilos
  omp_set_num_threads(hilos);

//Si le quito el private las variables puede ser modificadas por todos los procesos.
#pragma omp parallel private(nthreads, thread)
  {
    variable = 4;
    thread = omp_get_thread_num();

    nthreads = omp_get_num_threads();

    std::cout << "Hola Mundo soy la hebra = " << thread << " de " << nthreads << " que somos. tengo la variable :" << variable << std::endl;
  }
}