//
// Created by DobyAsa on 2022/3/19.
//
#include "List.h"
List::List() {
    head = new ListNode(0, nullptr, nullptr);
    tail = new ListNode(0, head, nullptr);
    head->SetNext(tail);
    length = 0;
}

int List::Get(int index) {
    if (index <= 0){
        printf("index out of range!\n");
        return 0;
    }
    ListNode* i = head;
    while(index > 0){
        i = i->GetNext();
        index--;
    }
    return i->GetData();
}

int List::Find(int val) {
    int index = 1;
    ListNode* i = head->GetNext();
    while(i != tail && i->GetData() != val){
        i = i->GetNext();
        index++;
    }
    return index;
}

void List::InsertAsFirst(int data) {
    Insert(data, 1);
}

void List::InsertAsLast(int data) {
    Insert(data, length+1);
}

void List::Insert(int data, int index) {
    ListNode* i = head;
    while(index > 0){
        i = i->GetNext();
        index--;
    }

    i = new ListNode(data, i->GetPrev(), i);
    i->GetPrev()->SetNext(i);
    i->GetNext()->SetPrev(i);
    length++;
}

void List::DeleteFirst() {
    Delete(1);
}

void List::DeleteLast() {
    Delete(length);
}

void List::Delete(int index) {
    ListNode* i = head;
    while(index > 0){
        i = i->GetNext();
        index--;
    }

    i->GetPrev()->SetNext(i->GetNext());
    i->GetNext()->SetPrev(i->GetPrev());
    delete(i);
}

void List::Show() {
    ListNode* i = head->GetNext();
    while(i != tail){
        printf(" %d|", i->GetData());
        i = i->GetNext();
    }
    printf("\n");
}