#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

int length(node* head){
    int count = 1;
    node* temp = head;
    while(temp != NULL){
        temp= temp->next;
        count++;
    }

    return count;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next =head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n; 
}

void makecycle(node* &head, int pos){
    node* temp = head;
    node* startNode;

    int count = 1;
    while(temp->next != NULL){
        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count ++;
    }
    temp->next = startNode;
}

void display(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* &head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(node* &head){
    node* toDelete = head;
    head= head->next;
    delete toDelete;
}

void deletion(node* &head, int val){
    if(head == NULL){ 
        return;
    }

    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    while(temp->next->data != val){
        temp= temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

node* reverse(node* &head){
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;

    while(currPtr != NULL){
        nextPtr = currPtr -> next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    return prevPtr;

}

node* reversek(node* &head, int k){
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;
    int count = 0;
    while(currPtr != NULL && count<k){
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
        count++;
    }
    if(nextPtr != NULL){
        head->next = reversek(nextPtr, k);
    }
 
    return prevPtr;
    
}

bool detectCycle(node* head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;

    do{
        slow = slow->next;
        fast=  fast->next->next;
    } while(slow!=fast);

    fast = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

void appendKNodes(node* &head, int k, int l){
    node* temp = head;
    int count = 1;
    node* newHead;
    node* newTail;
    while(temp->next != NULL){
        if(count == l-k){
            newTail = temp;
        } else if(count == l-k+1){
            newHead = temp;
            

        }
        count++;
        temp = temp -> next;
    }
    temp->next = head;
    newTail->next = NULL;
    head = newHead;
    
}

void intersect(node* &head1, node* &head2, int pos){
    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1 = temp1 -> next;
    }
    node* temp2 = head2;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2 -> next = temp1;
}

int intersectionPoint(node* head1, node* head2){
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    node* temp1;
    node* temp2;

    if(l1>l2){
        d = l1-l2;
        temp1 = head1;
        temp2 = head2;
    } else {
        d = l2-l1;
        temp1 = head2;
        temp2 = head1;
    }

    while(d){
        if(temp1 != NULL){
            temp1 = temp1 -> next;
        } else{
            // cout<<"hello1"<<endl;
            return -1;
        }
        d--;
    }

    while(temp1 != NULL && temp2 != NULL){
        
        if(temp1 == temp2){
            return temp1->data;
        }
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
    }
    cout<<"hello2"<<endl;
    return -1;
}



int main(){
    node* head = NULL;
    insertAtTail(head, 11);
    insertAtTail(head, 18);
    insertAtTail(head, 1);
    insertAtTail(head, 5);
    insertAtTail(head, 8);
    insertAtTail(head, 10);
    insertAtTail(head, 5);
    insertAtTail(head, 11);
    
    node* head2 = NULL;
    insertAtTail(head2, 16);
    insertAtTail(head2, 50);
    insertAtTail(head2, 17);
    // display(head);
    // appendKNodes(head, 2, 6);
    intersect(head, head2, 6);
    cout<<intersectionPoint(head, head2)<<endl;
    display(head);
    display(head2);
    // display(head);
    // node* newHead = reversek(head,2);
    // display(head);
    // cout<<search(head, 10);
    // deletion(head, 8);
    // deleteAtHead(head);
    // deleteAtHead(head);
    // deletion(head, 11);
    // makecycle(head, 3);
    // cout<<detectCycle(head)<<endl;
    // removeCycle(head);
    // cout<<detectCycle(head)<<endl;
    // display(head);
    // display(head);
    
    // node* myHead = reverse(head);
    // display(myHead);
    return 0;
}