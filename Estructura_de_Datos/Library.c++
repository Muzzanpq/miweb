#include "library.h"

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
void Library::setNomCuenta()
{
    this->nombreCuenta = nombreCuenta;
}
void Library::setNumCuenta()
{
    this->numCuenta = numCuenta;
}
void Library::setInteres(){
    this->interes = interes;
}
void Library::setSaldo(){
    this->saldo = saldo;
}