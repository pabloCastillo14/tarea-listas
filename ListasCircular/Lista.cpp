

#include "Lista.h"
#include <stdio.h>

#include <malloc.h>
#include <stdlib.h>
#include <iostream>

Lista::Lista() {
    headNode = NULL;
    tail = NULL;
}

Lista::Lista(const Lista& orig) {
}

Lista::~Lista() {
}

void Lista::insertaInicio(char value) {
    NODEPTR newPtr, tempPtr;
    //primero asignar dinamicamente la memoria
    newPtr = (NODEPTR) malloc(sizeof (NODE));
    newPtr->data = value;
  
    tempPtr = headNode;
    if (tempPtr == NULL) {
        headNode = newPtr;
        tail = newPtr;
        headNode->nextPtr = newPtr;
    } else {

        tail->nextPtr = newPtr;
        ///nuevo nodo por nextPtr=temp
        newPtr->nextPtr = tempPtr;
        headNode = newPtr;
    }


   
}
void Lista::insertarOrden(char value){
 NODEPTR newPtr, tempPtr;
    //primero asignar dinamicamente la memoria
    newPtr = (NODEPTR) malloc(sizeof (NODE));
    newPtr->data = value;
    tempPtr=headNode;
    if(tempPtr->data>=value){
       // headNode=newPtr;
       // headNode->nextPtr=tempPtr;
       newPtr->nextPtr = tempPtr;
      
  
    
    }else{
        
             while(tempPtr->data<value){
                tempPtr->nextPtr=newPtr;
                newPtr->nextPtr;
             }
    }

}
void Lista ::actualizar(char value, char value2){
 NODEPTR newPtr, tempPtr;
    //primero asignar dinamicamente la memoria
    newPtr = (NODEPTR) malloc(sizeof (NODE));
    tempPtr=headNode;
    if(tempPtr->data==value){
        headNode->data=value2;
        //tempPtr=tempPtr->nextPtr;
    }
    else{
        while(tempPtr->data!=value){
           tempPtr= tempPtr->nextPtr;
            //tempPtr->data=value2;
        
        }
        
         tempPtr->data=value2;
        
    }


}

void Lista::insertaFinal(char value) {
  NODEPTR newPtr, tempPtr;
    //primero asignar dinamicamente la memoria
    newPtr = (NODEPTR) malloc(sizeof (NODE));
    newPtr->data = value;
    tempPtr=headNode;
    if(tempPtr==NULL){
        headNode=newPtr;
        tail=newPtr;
        //tail->nextPtr=newPtr
        headNode->nextPtr=newPtr;
    }
    else{
        tail->nextPtr=newPtr;
     newPtr->nextPtr=headNode;   
     tail=newPtr;
    }
    
}


void Lista::borrar(char value){
      NODEPTR  tempPtr=headNode;
    //primero asignar dinamicamente la memoria
      node* prvPtr=new node();
      bool econtrado;
      int cont=1;
     // tempPtr=headNode;
      if(tempPtr!=NULL){
          
          
          
          do{
              if(tempPtr->data==value){
                  if(tempPtr==headNode){
                  headNode=headNode->nextPtr;
                  tempPtr->prevPtr=headNode->nextPtr;
                  
              }else{
                  prvPtr->nextPtr=tempPtr->nextPtr;
              }
              econtrado=true;
              
              
              }
              prvPtr=tempPtr;
              tempPtr=tempPtr->nextPtr;
              cont++;
          }while(tempPtr!=headNode&&econtrado!=true);
      
      }

      printList();
}//deleteNode 




void Lista::printList() {
    //nodo temporal
    NODEPTR tempNode = headNode->nextPtr;
    bool f = true;
    if (headNode != NULL) {
        printf("%c-->", headNode->data);
        while (tempNode != headNode) {
            printf("%c-->", tempNode->data);
            tempNode = tempNode->nextPtr;
            f = false;
        }
        printf("\n\n");
    } else {
        printf("the list is empaty.\n\n");
    }
}//printList
