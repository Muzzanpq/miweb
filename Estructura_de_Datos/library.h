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

        void setNomCuenta();
        void setNumCuenta();
        void setInteres();
        void setSaldo();

    private:
        std::string nombreCuenta, numCuenta;
        double interes, saldo;

};

#endif