#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definición de la estructura Archivo
struct Archivo {
    string nombre;
    int tamaño;
    // Otros atributos según sea necesario
};

// Definición de la estructura Directorio
struct Directorio {
    string nombre;
    vector<Archivo> archivos;
    vector<Directorio> subdirectorios;
    // Otros atributos según sea necesario
};

// Función para crear un archivo
Archivo crearArchivo(string nombre, int tamaño) {
    Archivo archivo;
    archivo.nombre = nombre;
    archivo.tamaño = tamaño;
    return archivo;
}

// Función para crear un directorio
Directorio crearDirectorio(string nombre) {
    Directorio directorio;
    directorio.nombre = nombre;
    return directorio;
}

// Función para agregar un archivo a un directorio
void agregarArchivoADirectorio(Archivo& archivo, Directorio& directorio) {
    directorio.archivos.push_back(archivo);
}

// Función para agregar un subdirectorio a un directorio
void agregarSubdirectorioADirectorio(Directorio& subdirectorio, Directorio& directorio) {
    directorio.subdirectorios.push_back(subdirectorio);
}

// Ejemplo de uso
int main() {
    Directorio raíz = crearDirectorio("Raíz");
    Archivo documento1 = crearArchivo("Documento1.txt", 1024);
    Archivo documento2 = crearArchivo("Documento2.txt", 2048);
    Directorio subdirectorio1 = crearDirectorio("Subdirectorio1");
    agregarArchivoADirectorio(documento1, raíz);
    agregarArchivoADirectorio(documento2, raíz);
    agregarSubdirectorioADirectorio(subdirectorio1, raíz);



    return 0;
    }