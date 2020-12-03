#include<iostream>
struct node
{
    int a ;
    struct node* next;
};
int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->a=5;
    head->next=NULL;
    std::cout<<head->a;
    return 0;
}
