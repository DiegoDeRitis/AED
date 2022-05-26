// EjemploTipos.cpp : Este archivo contiene una ejemplificacion de los tipos de datos basicos de c++ vistos en clase: bool,char, unsignted int, double y string
// Alumno: Diego De Ritis
// 08/05/2022
//

#include <cassert>
#include <string>
#include <iostream>

using namespace std::string_literals;
int main()
{
    assert(true);
    assert('a' != 'b');
    assert(541 == 541);
    assert(3 < 5);
    assert(3.1 < 3.5);
    assert(2u == 2);
    assert(std::string("las") ==std::string( "la" )+std::string( "s"));
    assert(12 == "las palabras"s.length());
    assert(sizeof 'a' == 1); 
    assert(sizeof 65 == 4);
   assert(sizeof "hola"s == 28); //probado con cout
   assert(sizeof "hola"== 5);

   


   
}


