#include "Esfera.h"
#include "Cilindro.h"
#include "Cone.h"
#include "Paralelepipedo.h"

#include <iostream>
using namespace std;

int main(){
    Esfera esf("Esfera",2.0f);
    Cilindro cil("Cilindro",1.0,3.0);
    Cone con("Cone",3.0,4.0);
    Paralelepipedo par("Paralelepipedo",3.0,1.5,2.0);

    esf.aumentar(120);

    esf.display();
    cout<<"\n";
    cil.display();
    cout<<"\n";
    con.display();
    cout<<"\n";
    par.display();
    cout<<"\n";

    return 0;
}
