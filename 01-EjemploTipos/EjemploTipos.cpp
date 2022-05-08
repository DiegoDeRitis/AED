// EjemploTipos.cpp : Este archivo contiene una ejemplificacion de los tipos de datos basicos de c++ vistos en clase: bool,char, unsignted int, double y string
// Alumno: Diego De Ritis
// 08/05/2022
//

#include <cassert>
#include <iostream>

int main()
{
    bool booleano= true ;
    char c = 41;
    unsigned int entero = 45;
    double doble = 10.5;
   std::string cadena = "hola";

   assert(booleano== true);
   assert(c == '41'); // el statement es falso a proposito
   assert(doble <= 11);
   assert(entero == 45);
   assert(cadena.length() <  13);
}


