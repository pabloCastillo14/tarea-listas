/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: pablo
 *
 * Created on 22 de mayo de 2017, 07:26 AM
 */

#ifndef LISTA_H
#define LISTA_H

class Lista {
public:
    Lista();
    Lista(const Lista& orig);
    virtual ~Lista();
    void insertaInicio(char value);
    void printList();
    void borrar(char value);
    void insertaFinal(char value);
    void actualizar(char value,char value2);
    void insertarOrden(char value);
private:

    struct node {
        char data;
        struct node *nextPtr, *prevPtr;

    };
    typedef struct node NODE;
    typedef NODE*NODEPTR;

    NODEPTR headNode;
    NODEPTR tail;

};

#endif /* LISTA_H */

