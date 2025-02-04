#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }

public:
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

Node *converLLtoArr(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int LengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){ //Stops when temp = NULL
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data==val) return 1;
        temp = temp->next;
    }
    return 0;
}

int main(void)
{
    vector<int> arr = {2, 5, 8, 7};

    Node *head = converLLtoArr(arr);
    //Traversing through an LinkedList
    Node* temp = head;
    while(temp){ //Stops when temp = NULL
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl<<"The length of the linked list is: "<<LengthOfLL(head);
}
