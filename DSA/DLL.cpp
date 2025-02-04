#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

Node *ConvertToDll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}
void print(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
Node *DeleteHeadOfDLL(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head->next;
    temp->prev = nullptr;
    delete head;
    return temp;
}
Node *DeleteTail(Node *head)
{
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->prev;
    prev->next = NULL;
    tail->prev = nullptr;
    delete tail;
    return head;
}
Node *DeleteKthElement(Node *head, int k)
{
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count++;
        if (count == k)
        {
            break;
        }
        temp = temp->next;
    }
    Node *prev = temp->prev;
    Node *next = temp->next;
    if (prev == NULL && next == NULL)
    {
        delete temp;
        return NULL;
    }
    else if (prev == NULL)
        return DeleteHeadOfDLL(head);
    else if (next == NULL)
        return DeleteTail(head);
    prev->next = next;
    next->prev = prev;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
}
Node *InsertB4Head(Node *head, int k)
{
    if (head == NULL)
    {
        head = new Node(k);
        return head;
    }
    Node *temp = new Node(k);
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}
signed main()
{
    vector<int> arr = {1, 3, 2, 4};
    Node *head = ConvertToDll(arr);
    print(head);
    cout << endl
         << "after deletion of the head: ";
    head = DeleteHeadOfDLL(head);
    print(head);
    head = ConvertToDll(arr);
    cout << endl
         << "after deletion of tail: ";
    head = DeleteTail(head);
    print(head);
    head = ConvertToDll(arr);
    cout << endl
         << "Enter the Kth element you want remove: ";
    int k;
    cin >> k;
    cout << "After deletion of " << k << "th element you want to delete" << endl;
    head = DeleteKthElement(head, k);
    print(head);
    head = ConvertToDll(arr);
    cout << endl
         << "Enter the data of element you want to enter: ";
    cin >> k;
    cout << endl
         << "After inserting an element before the head: ";
    head = InsertB4Head(head, k);
    print(head);
    // Similarly do Insertion before the tail of linked list and so on -- AALAS!!
    return 0;
}