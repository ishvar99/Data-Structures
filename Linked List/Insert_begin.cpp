// Insertion of node at the beginning of Linked List
#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head=NULL;
void insert(){
    int d;
    node* temp=new node();
    cout<<"Enter the data: ";
    cin>>d;
    temp->data=d;
    if(head==NULL){
        head=temp;
        temp->next=NULL;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
void display(){
    node* temp=head;
    cout<<"List: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main()
{
    char ch;
    while(true) {
        start:
        cout << "Linked List" << endl;
        cout << "A. Add" << endl;
        cout << "B. Display" << endl;
        cout << "C. Exit" << endl;
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
            case 'C':
                exit(0);
            default: {
                cout << "Invalid input!"<<endl;
                goto start;
            }
        }
    }
}


