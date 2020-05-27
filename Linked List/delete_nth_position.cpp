//To delete node at nth position in linked list
#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head=NULL;
node* rear=NULL;
void insert() {
    int data;
    cout << "Enter the value!" << endl;
    cin >> data;
    node *temp = new node();
    temp->data = data;
    temp->next=NULL;
    if (head == NULL) {
        head = rear = temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}
void remove(){
    int pos;
    if(head==NULL){
        cout<<"Empty List!"<<endl;
        return;
    }
    node* temp=head;
    cout<<"Enter the position: "<<endl;
    cin>>pos;
    if(pos==1){
        head=head->next;
        delete(temp);
        return;
    }
    for(int i=0;i<pos-2;i++){
     temp=temp->next;
    }
    node* temp1=temp->next;
    temp->next=temp1->next;
    delete(temp1);
}
void display(){
    node* temp=head;
    cout<<"List: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

int main() {
    char ch;
    int pos;
    while (1) {
        start:
        cout << "Linked List" << endl;
        cout << "A. Add" << endl;
        cout << "B. Display" << endl;
        cout << "C. Delete" << endl;
        cout << "D. Exit" << endl;
        cin >> ch;
        switch (ch) {
            case 'A': {
                insert();
                break;
            }
            case 'B': {
                display();
                break;
            }
            case 'C': {
                remove();
                break;
            }
            case 'D':
                exit(0);
            default: {
                cout << "Invalid input!" << endl;
                goto start;
            }
        }
    }
}