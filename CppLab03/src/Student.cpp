#include "Student.h"
#include <iostream>

TStudent *InitTStudent(){
    return new TStudent();
}


void show(TStudent *head){
    if(head == nullptr){
        std::cout << "Lista jest pusta" << std::endl;
    }
    else {
        int size = 0;
        TStudent *current = head;
        while(current != nullptr){
            size++;
            current = current->_next;
        }
        current = head;
        std::cout << "Aktualny stan listy:\n" << std::endl;
        for(int i = 0; i < size; i++){
            std::cout <<"id: " << current->_id << std::endl;
            current = current->_next;
        }
    }
}

void push_front(TStudent **head, int offset){
    TStudent *newhead = new TStudent;
    newhead->_next = *head;
    newhead->_id = offset;
    *head = newhead;
}

void clear(TStudent **head){
    while(*head){
        TStudent *next = (*head)->_next;
        delete *head;
        *head = next;
    }
}
