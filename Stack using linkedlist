#include <iostream>
using namespace std;

struct node {
    int num;
    struct node *ptr;
};
typedef struct node node;

class stack {
    node *tos;
    char choice;
public:
    stack() : tos(nullptr) {}
    void push();
    void pop();
    void display();
    ~stack(); // Destructor to clean up memory
};

void stack::push() {
    do {
        node *head = new node;
        cout << "Enter item: ";
        cin >> head->num;
        head->ptr = (tos == nullptr) ? nullptr : tos;
        tos = head;
        cout << "Push again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}

void stack::pop() {
    do {
        if (tos == nullptr) {
            cout << "--Stack is empty--" << endl;
            return;
        }
        cout << "Item popped: " << tos->num << endl;
        node *head = tos;
        tos = tos->ptr;
        delete head;
        cout << "Pop again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}

void stack::display() {
    if (tos == nullptr) {
        cout << "--Stack is empty--" << endl;
        return;
    }
    cout << "Contents: ";
    for (node *head = tos; head != nullptr; head = head->ptr) {
        cout << head->num << " ";
    }
    cout << endl;
}

// Destructor to clean up memory
stack::~stack() {
    while (tos != nullptr) {
        node *head = tos;
        tos = tos->ptr;
        delete head;
    }
}

int main() {
    stack s;
    char choice;
    int c;
    do {
        cout << "1-Push 2-Pop 3-Display Enter condition: ";
        cin >> c;
        switch (c) {
            case 1: s.push(); break;
            case 2: s.pop(); break;
            case 3: s.display(); break;
            default: cout << "Wrong input" << endl; break;
        }
        cout << "Any operation to do? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
