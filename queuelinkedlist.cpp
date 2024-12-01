#include<iostream>
using namespace std;
struct node{
    int num;
    struct node *ptr;
};
typedef struct node node;
class queue
{
    node *front,*rear;
    char choice;
    public:
    void insertnode();
    void deletenode();
    void display();
    queue():front(nullptr),rear(nullptr){}
};
void queue::insertnode()
{
    do{
    node *head;
    head=new node;
    cout<<"enter item :";
    cin>>head->num;
    if(rear==nullptr){
        front=rear=head;
        head->ptr=nullptr;
    }
    else{
        rear->ptr=head;
        head->ptr=nullptr;
        rear=head;
    }
    cout<<"insert again ? :";
    cin>>choice;
    }while(choice=='y'||choice=='Y');
}
void queue::deletenode()
{
    do{
    if(front==nullptr){
        cout<<"--queue is empty--"<<endl;
        return;
    }
    node *temp=front;
    cout<<"element deleted :"<<temp->num<<endl;
    if(front==rear){
        front=rear=nullptr;
        return;
    }
    else front=front->ptr;
    delete temp;
    cout<<"delete again ? :";
    cin>>choice;
    }while(choice=='y'||choice=='Y');
}
void queue::display()
{
    if(front==nullptr){
        cout<<"--queue is empty--"<<endl;
        return;
    }
    node *temp=front;
    cout<<"contents :";
    while(temp!=nullptr){
        cout<<temp->num<<" ";
        temp=temp->ptr;
    }
    cout<<endl;
}
int main() {
    queue q;
    char choice;
    int c;
    do {
        cout << "1-Push 2-Pop 3-Display Enter condition: ";
        cin >> c;
        switch (c) {
            case 1: q.insertnode(); break;
            case 2: q.deletenode(); break;
            case 3: q.display(); break;
            default: cout << "Wrong input" << endl; break;
        }
        cout << "Any operation to do? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
