// Insert at end of Linked List without using the tail pointer

#include <iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head=NULL;
int set=0;
void insert_end(){
    int d;
    cin>>d;
    if(d==-1){
        set=1;
        return;
    }
    node* temp=new node();
    node* temp1=head;
    temp->data=d;
    if(head==NULL){
        temp->link=NULL;
        head=temp;
        return;
    }
    while(temp1->link!=NULL){
        temp1=temp1->link;
    }
    temp1->link=temp;
}
void display() {
    node *temp = head;
    cout<<"List is: ";
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;
}
int main(){
    while(set!=1) {
        cout << "Enter the element(-1 to stop): " << endl;
        insert_end();
    }
    display();
    return 0;
}
