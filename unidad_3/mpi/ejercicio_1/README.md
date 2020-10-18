# ejercicio 1

## Enunciado

hacer un programa que imprima por pantalla el saludo "Hola Mundo soy el proceso _`X`_, de _`Y`_ que somos" donde:

> - X sera el identificador del proceso (rango)
> - Y el número de procesos que fueron lanzados de forma paralela.

## Objetivos

- Comprobar que la instalación de MPI es correcta.
- Ejecutar un programa en varios procesos de forma paralela.
- Aprender a iniciar y finalizar el entorno MPI con `MPI_Init` y `MPI_Finalize`.
- Aprender a consultar el identificador (rango) del proceso con `MPI_Comm_rank`.
- Aprender a consultar el numero de procesos lanzados con `MPI_Comm_size`.
