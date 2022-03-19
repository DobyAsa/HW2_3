//
// Created by DobyAsa on 2022/3/19.
//
#include "ListNode.h"

ListNode::ListNode(int d, ListNode* a, ListNode* b) : prev(a), next(b), data(d){}

int ListNode::GetData() {
    return data;
}

void ListNode::SetData(int a) {
    data = a;
}

ListNode *ListNode::GetNext() {
    return next;
}

ListNode *ListNode::GetPrev() {
    return prev;
}

void ListNode::SetNext(ListNode *n) {
    next = n;
}

void ListNode::SetPrev(ListNode *p) {
    prev = p;
}
