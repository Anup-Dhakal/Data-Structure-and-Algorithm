//singly linked list 

#include<iostream>
using namespace std;

struct Node{
    int value;
    Node *link;
};
Node *head =0,*newnode,*temp,*previous_node;
int i;
void createNode(){
    int data;
    cout<<"Enter data you want to insert ";
    cin>>data;
    newnode = new Node;
    newnode->value = data;
    newnode->link=0;
}
void insert_at_beg(){
    createNode();
    if(head== 0)
    head=newnode;
    else{
        newnode->link = head;
        head = newnode;
    }
}
void insert_at_end(){
    createNode();
    temp = head;
    while (temp->link !=0){
        temp = temp->link;
    }
    temp->link=newnode;
}
void insert_at_nth(int pos){
    createNode();
    temp=head;
    for(int i=1;i<pos-1&&temp!=0;i++){
        temp=temp->link;
    }

newnode->link=temp->link;
temp->link=newnode;
}


void delete_from_beg(){
    if(head==0){
        cout<<"Linked list is empty"<<endl;
    }
    else{
        temp=head;
        head=temp->link;
        delete (temp);
    }
}
void delete_from_end(){
    temp=head;
    while(temp->link !=0){
        previous_node = temp;
        temp=temp->link;

    }
   previous_node->link = 0;
   delete(temp);
}
void delete_from_nth(int pos){
    temp = head;
    for(i=1;i<pos && temp!=0 ; i++){
        previous_node = temp;
        temp = temp->link;
    }
    previous_node->link = temp->link;
    delete(temp);
}
void display(){
    temp=head;
    cout<<"==============================="<<endl;
    cout<<"Displaying elements";
    while(temp!=0){
        cout<<temp->value<<" ";
        temp = temp->link;
    }
    cout<<endl<<endl;

}
int main(){
   insert_at_beg();
   display();
   insert_at_beg();
   display();
   insert_at_beg();
   display();
   insert_at_end();
   display();
   insert_at_end();
   display();
   insert_at_nth(4);
   display();
   delete_from_beg();
   display();
   delete_from_end();
   display();
   delete_from_nth(3);
   display();
}