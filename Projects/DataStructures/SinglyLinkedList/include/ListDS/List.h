// List.h

#ifndef LIST_H
#define LIST_H

#include <iostream>

class List
{
    private:

        struct node
        {
            int data;
            node* next;
        };

        node* head;
        node* curr;
        node* temp;
        

    public:

        List();
        void addNode(int dataToAdd);
        void deleteNode(int dataToDelete);
        void printList();


};

#endif