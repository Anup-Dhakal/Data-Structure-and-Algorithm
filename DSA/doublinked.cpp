#include<iostream>
using namespace std;

 struct  DLLNode{
    int data;
    DLLNode *prev,*next;
 };
  DLLNode *head,*temp,*newnode;

int createnode(){
    int value;
    cout<<"Enter Value :"<<endl;
    cin>>value;
    newnode = new DLLNode;
    newnode->data = value;
    newnode->prev = 0;
    newnode->next = 0;
    return 0;
}
int insbeg(){
    createnode();
    if(head==0){
        head=newnode;
    }
    else{
        newnode->next=head;
        head->prev = newnode;
        head = newnode;
    }
    return 0;
}
int insend(){
    createnode();
    if(head == 0){
        head = newnode;
    }
    else{
        temp=head;
        while(temp->next!=0){
            temp = temp->next;

        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    return 0 ; 
}
int insnth(int n){
    createnode();
    if(head==0)
}

int main(){
    

}