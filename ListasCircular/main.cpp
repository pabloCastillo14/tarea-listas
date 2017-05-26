

#include <cstdlib>

#include "Lista.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   Lista *myList=new Lista();
    myList->insertaInicio('d');
     myList->insertaInicio('b');
      myList->insertaInicio('c');
 
      myList->insertaFinal('z');
      myList->insertaFinal('x');
      myList->actualizar('c','s');
     // myList->printList();
      myList->insertarOrden('a');
 
           myList->borrar('b');
      myList->printList();
    return 0;
}

