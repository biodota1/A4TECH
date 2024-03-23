#include<stdio.h>
#include<stdlib.h>

struct List{
    int *data;
    size_t size;
    size_t capacity;
};

void List(struct List *list, size_t list_Size){
    list->data = (int *)malloc(list_Size * sizeof(int));
    list->size = 0;
    list->capacity = list_Size;
}

void Add(struct List *list, int element){
    if(list->size == list->capacity){
        list->capacity *= 2;
        list->data = (int *)realloc(list->data, list->capacity*sizeof(int));
    }
}

void PrintList(struct List *list) {
    for (size_t i = 0; i < list->size; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

void freeDynamicArray(struct List *arr) {
    free(arr->data);
    arr->size = 0;
    arr->capacity = 0;
}
    

int main(){
    struct List myList;
    List(&myList, 2);

    Add(&myList, 10);

    PrintList(&myList);

    freeDynamicArray(&myList);
}