// 1. Inserting a Node at the Beginning
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node** head, int newData) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newData;

    // Make next of new node as head
    newNode->next = *head;

    // Move the head to point to the new node
    *head = newNode;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert elements
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    cout << "Linked list after insertion: ";
    printList(head);

    return 0;
}


//2. Inserting a Node at the End
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node** head, int newData) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    // If the linked list is empty, make the new node the head
    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    // Traverse to the end of the list
    Node* last = *head;
    while (last->next != nullptr) {
        last = last->next;
    }

    // Change the next of the last node
    last->next = newNode;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert elements
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    cout << "Linked list after insertion: ";
    printList(head);

    return 0;
}


//3. Deleting a Node by Key
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = nullptr;

    // If the head node itself holds the key
    if (temp != nullptr && temp->data == key) {
        *head = temp->next; // Change head
        delete temp;         // Free old head
        return;
    }

    // Search for the key to be deleted
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in the list
    if (temp == nullptr) return;

    // Unlink the node from the linked list
    prev->next = temp->next;

    delete temp; // Free memory
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert elements
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    cout << "Original linked list: ";
    printList(head);

    // Delete a node with key 20
    deleteNode(&head, 20);

    cout << "Linked list after deletion: ";
    printList(head);

    return 0;
}


//4. Searching for an Element
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool search(Node* head, int key) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == key)
            return true;
        current = current->next;
    }
    return false;
}

int main() {
    Node* head = nullptr;

    // Insert elements
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    int key = 20;

    // Search for the key
    if (search(head, key))
        cout << "Element " << key << " is present in the linked list." << endl;
    else
        cout << "Element " << key << " is not present in the linked list." << endl;

    return 0;
}


//5. Reversing a Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void reverseList(Node** head) {
    Node* prev = nullptr;
    Node* current = *head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert elements
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    cout << "Original linked list: ";
    printList(head);

    // Reverse the linked list
    reverseList(&head);

    cout << "Reversed linked list: ";
    printList(head);

    return 0;
}


//6. Finding the Length of a Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int getLength(Node* head) {
    int length = 0;
    Node* current = head;
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    return length;
}

int main() {
    Node* head = nullptr;

    // Insert elements
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    // Get the length of the linked list
    int length = getLength(head);

    cout << "Length of the linked list: " << length << endl;

    return 0;
}
