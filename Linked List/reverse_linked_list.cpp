//To reverse the linked list
#include <iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node *head=NULL,*rear=NULL;
void display(){
    node*temp=head;
    cout<<"List is: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<"NULL";
    cout<<endl;
}
void addNode() {
    int data;
    cout << "Enter the value!" << endl;
    cin >> data;
    node *temp = new node();
    temp->data = data;
    temp->link=NULL;
    if (head == NULL) {
        head = rear = temp;
    }
    else{
        rear->link=temp;
        rear=temp;
    }
}
void reverse(){
    node* temp=head;
    node* prev=NULL;
    node* next;
    while(temp!=NULL){
         next=temp->link;
        temp->link=prev;
        prev=temp;
        temp=next;
    }
    head=rear;//or head=prev;
}
int main() {
    char ch;
    while (1)
    {
        start:
        cout << "Linked List" << endl;
        cout << "A. Add" << endl;
        cout << "B. Display" << endl;
        cout << "C. Exit" << endl;
        cout<<  "D. Reverse"<< endl;
        cin >> ch;
        switch (ch) {
            case 'A': {
                addNode();
                break;
            }
            case 'B': {
                display();
                break;
            }
            case 'C':
                exit(0);
            case 'D':{
                reverse();
                display();
                break;
            }
            default: {
                cout << "Invalid input!"<<endl;
                goto start;
            }
        }
    }
}

