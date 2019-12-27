// List.cpp

#include "../../../SinglyLinkedList/include/ListDS/List.h"

namespace ListDS
{
    //
    // Emtpy Constructor
    //
    List::List()
    {
        // create an empty list

        head = curr = temp = nullptr;

        std::cout << "Creating an empty list \n";
        std::cout << std::endl;
    }

    //
    // addNode
    //
    void List::addNode(int dataToAdd)
    {
        // create the new node
        node* n = new node();

        // this is going to be the last node in the list
        n->next = nullptr;

        // add the data to the node 
        n->data =  dataToAdd;

        // check to see if a node already exists
        if(head != nullptr)
        {
            curr = head;

            // iterate through the list to get to the end
            while(curr != nullptr)
            {
                temp = curr;
                curr = curr->next;
            }

            curr-next = n;
        }
        else // no list exits
        {
            head = n;
        }
        


        
    }

}