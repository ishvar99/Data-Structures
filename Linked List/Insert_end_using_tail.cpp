//Insertion of node at the end of linked list
//Time Complexity: O(1) by keeping an extra pointer
// to tail of linked list
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
int main() {
    char ch;
    while (1)
    {
        start:
        cout << "Linked List" << endl;
        cout << "A. Add" << endl;
        cout << "B. Display" << endl;
        cout << "C. Exit" << endl;
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
            default: {
                cout << "Invalid input!"<<endl;
                goto start;
            }
        }
    }
}
