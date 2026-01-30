#ifndef LYBRARY_H
#define LYBRARY_H

#include <string>

class Library{

    public:    
        Library(std::string nombreCuenta, std::string numCuenta, double interes, double saldo);
        
        std::string getNomCuenta();
        std::string getNumCuenta();
        double getInteres();
        double getSaldo();

        void setNomCuenta(std::string nombreCuenta);
        void setNumCuenta(std::string numCuneta);
        void setInteres(double tipo);

        void depositar(double cantidad);
        void retirar(double cantidad);

    private:
        std::string nombreCuenta, numCuenta;
        double interes, saldo;

};

#endif