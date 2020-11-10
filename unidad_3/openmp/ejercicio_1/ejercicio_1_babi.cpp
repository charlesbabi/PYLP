#include <omp.h>
#include <iostream>

#define hilos 10

int main()
{

  int nthreads;
  int thread;
  int variable = 777;

  omp_set_num_threads(hilos);

#pragma omp parallel
  {
    variable = 4;
    thread = omp_get_thread_num();

    nthreads = omp_get_num_threads();

    std::cout << "Hola Mundo soy la hebra = " << thread << " de " << nthreads << " que somos. tengo la variable :" << variable << std::endl;
  }
}