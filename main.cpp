#include"List.h"

int main() {

    List* list = new List();
    list->InsertAsFirst(1);
    list->InsertAsLast(2);
    list->Insert(3, 3);
//    printf("%d\n", list->Find(2));
    list->Show();
    list->Delete(list->Find(2));
    list->Show();
    return 0;
}
