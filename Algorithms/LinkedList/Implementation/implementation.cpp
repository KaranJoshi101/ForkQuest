#include <iostream>

using namespace std;

// Node structure
struct ListNode {
    int data;
    ListNode* next;

    ListNode(): data(0), next(nullptr) {}
    ListNode(int val): data(val), next(nullptr) {}
    ListNode(int val, ListNode* n): data(val), next(n) {}
};



// Linked List class
class LinkedList {
private:
    ListNode* head;

public:
    LinkedList() {
        head = nullptr;
    }



    // Insert at head
    void insertAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }



    //Insert at tail
    void insertAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        ListNode* temp = head;
        while (temp->next == nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }



    // Delete a node by value
    void deleteNode(int val) {
        ListNode* temp=head;
        ListNode* c=temp;
        ListNode* d=NULL;
        while(temp->data!=val){
            c=temp;
            temp=temp->next;
        }
        d=temp->next;
        c->next=d;
        delete temp;
    }




    // Delete a node by index
    void deleteNodebyIndex(int index){
        ListNode* temp=head;
        ListNode* c=temp;
        ListNode* d=NULL;
        if(index==0){
            if(temp->next!=NULL)
                head=temp->next;
            
        }else{
            for(int i=0; i<index; i++){
                c=temp;
                temp=temp->next;
            }
            d=temp->next;
            c->next=d;
            delete temp;
        }
    }



    // Display list elements
    void display() {
        ListNode* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp=temp->next;
        }
        cout << endl;
    }
};



// Main Function
int main() {
    LinkedList list;

    // Insert elements
    list.insertAtHead(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtHead(5);

    cout << "Linked List after insertions: ";
    list.display();

    // Delete a node
    list.deleteNode(20);

    cout << "Linked List after deletion: ";
    list.display();

    return 0;
}