#include <omp.h>
#include <iostream>
 
int main (){
 
int nthreads;
int thread;
int NuevoValor = 222;
 
omp_set_num_threads(10);
#pragma omp parallel private(nthreads, thread) firstprivate(NuevoValor)
  {
 
  thread = omp_get_thread_num();
 
  nthreads = omp_get_num_threads();
 
  std::cout<<"Hola Mundo soy la hebra ="<< thread <<" de "<<nthreads<<" que somos"<< " Esta es la variable nueva = "<<NuevoValor<<std::endl;
 
  }
 
}