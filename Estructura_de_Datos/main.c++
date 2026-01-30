#include <iostream>
#include "library.h"

using namespace std;

int main(){

    Library cliente1("Edgar Ivan", "32432566", 2.5, 13000 );
    cliente1.retirar(2000);
    cout << cliente1.getSaldo() << endl;
    return 0;

}