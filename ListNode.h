//
// Created by DobyAsa on 2022/3/19.
//

#ifndef HW2_3_LISTNODE_H
#define HW2_3_LISTNODE_H
#include <iostream>
using namespace std;

class ListNode{
private:
    int data;
    ListNode* prev;
    ListNode* next;

public:
    ListNode(int d, ListNode* a, ListNode* b);
    int GetData();
    void SetData(int a);
    void SetNext(ListNode* n);
    ListNode* GetNext();
    ListNode* GetPrev();
    void SetPrev(ListNode* p);
};
#endif //HW2_3_LISTNODE_H
