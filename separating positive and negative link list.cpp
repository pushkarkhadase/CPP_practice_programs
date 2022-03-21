#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* nxt_node;
};


Node* create_node(int key){
    Node* new_node = new Node();
    new_node->nxt_node = NULL;
    new_node->data = key;
    return new_node;
}

Node* insert_front(int key , Node* temp_head){
    Node* created_node = create_node(key);
    created_node->nxt_node = temp_head;
    temp_head = created_node;
    return temp_head;
}

void read_list(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout << "displaying" << temp -> data << endl;
        temp = temp->nxt_node;
    }
}

void list_append(Node* head , int key){
    Node* temp = head;
    while (temp->nxt_node != NULL){
        temp = temp->nxt_node;
    }

    temp->nxt_node = create_node(key);
    cout << endl << "node inserted"<<endl;
}

void link_list_seperator(Node* head){
    Node* temp = head;
    Node* head_negative = NULL;
    Node* head_positive = NULL;

    while(temp != NULL){

        if(temp->data < 0){
                if(head_negative == NULL){
                    head_negative = create_node(temp->data);
                }else{
                    list_append(head_negative, temp->data);
                }
        }else{
            cout << "in the else";
                if(head_positive == NULL){
                    head_positive = create_node(temp->data);
                    cout<<"in the if";
                } else {
                   list_append(head_positive, temp->data);
                }
        }
        temp = temp->nxt_node;
    }

    cout << "Printing the positive link list:::::: \n";
    read_list(head_positive);
    cout << endl;

    cout << "Printing the negative link list:::::: \n";
    read_list(head_negative);
    cout << endl;

}

int main(){
    Node* head = NULL;
    head = create_node(15);
    head = insert_front(20,head);
    list_append(head , 5);
    list_append(head , -20);
    list_append(head , 5);
    list_append(head , -10);
    list_append(head , -15);
    list_append(head , 50);
    list_append(head , 60);
    list_append(head , 46);
    list_append(head , -300);
    list_append(head , -3);
    cout << "Printing the whole link list:::: \n";
    read_list(head);
    cout << "Now printing the separated link list\n";
    link_list_seperator(head);
    return 0;
}
