//
// Created by DobyAsa on 2022/3/19.
//

#ifndef HW2_3_LIST_H
#define HW2_3_LIST_H
#include "ListNode.h"
class List{
private:
    ListNode* head;
    ListNode* tail;
    int length;
public:
    List();
    int Get(int index);
    int Find(int val);
    void InsertAsFirst(int data);
    void InsertAsLast(int data);
    void Insert(int data, int index);
    void DeleteFirst();
    void DeleteLast();
    void Delete(int index);

    void Show();
};
#endif //HW2_3_LIST_H
