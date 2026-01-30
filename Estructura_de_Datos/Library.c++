#include "library.h"
#include <iostream>

Library::Library(std::string nombreCuenta, std::string numCuenta, double interes, double saldo)
{
    this->nombreCuenta = nombreCuenta;
    this->numCuenta = numCuenta;
    this->interes = interes;
    this->saldo = saldo;
}

std::string Library::getNomCuenta()
{
    return nombreCuenta;
} 
std::string Library::getNumCuenta()
{
    return numCuenta;
}
double Library::getInteres()
{
    return interes;
}
double Library::getSaldo()
{
    return saldo;
}
void Library::setNomCuenta(std::string nombreCuenta)
{
    if(nombreCuenta.length() == 0){
        std::cout << "Error llenar " << std::endl;
    }
    this->nombreCuenta = nombreCuenta;
}
void Library::setNumCuenta(std::string numCuenta)
{
    if(numCuenta.length() == 0){
        std::cout << "Error llenar " << std::endl;
    }
    this->numCuenta = numCuenta;
}
void Library::setInteres(double tipo){
    if(interes < 0){
        std::cout << "Error Interes invalido" << std::endl;
        return;
    }
    this->interes = tipo;
}
void Library::depositar(double cantidad){
    if(cantidad < 0 ){
        std::cout <<"Error cantidad no permitida" << std::endl;
        return;
    }
    this->saldo = saldo + cantidad;
}
void Library::retirar(double cantidad){
    if(saldo - cantidad < 0){
        std::cout <<"Error cantidad no permitida" << std::endl;
    }
    this->saldo = saldo - cantidad;
}