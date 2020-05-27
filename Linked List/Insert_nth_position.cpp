// Insertion of node at the nth position in Linked List
#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head=NULL;
int check(){
    int count=0;
    node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insert(int data,int pos){
    node* temp=new node();
    temp->data=data;
    if(pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    node* temp1=head;
    for(int i=0;i<pos-2;i++){
      temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}
void display(){
      node* temp=head;
      cout<<"List: ";
      while (temp!=NULL){
          cout<<temp->data<<"->";
          temp=temp->next;
      }
      cout<<"NULL";
      cout<<endl;
}
int main()
{
    while(1) {
        int data, pos;
        cout << "Enter the data to inserted!" << endl;
        cin >> data;
        cout << "Enter the position: " << endl;
        cin >> pos;
        insert(data, pos);
        display();
    }
}
