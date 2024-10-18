#include <iostream>
using namespace std;
class class_stack
{
    int queue[3],t,front=0,rear=-1,maxsize=3;
    char q;
    public:
    void insert()
    {
       do{ if(rear==maxsize-1)
        {
            cout<<"--queue overflow--"<<endl;;
            return;
        }
        else
        {
            rear++;
            cout<<"enter item to push :";
            cin>>queue[rear];
            if(rear==maxsize-1)
        {
            cout<<"--queue is full--"<<endl;;
            return;
        }
            cout<<"push again? y/n :";
            cin>>q;}}
            while(q=='y');
           return;
        
    }
    void remove()
    {
       do{ if(front>rear)
        {
            cout<<"--queue underflow--"<<endl;
            return;
        }
        else
        {
            cout<<"item delated :"<<queue[front]<<endl;
            front++;
            if(front>rear)
            {
                front=0;
                rear=-1;
            }
            if(front>rear)
        {
            cout<<"--eueue empty--"<<endl;
            return;
        }
            cout<<"delete again? y/n :";
            cin>>q;}}
           while(q=='y');
            
           return;
            
        
    }
    
    
    void display(){int i;
        if(front>rear)
        {
            cout<<"--queue is empty"<<endl;
            return;
        }
        else
        {
            cout<<"elements :";
            for(i=front;i<=rear;i++)
            cout<<queue[i]<<"\t";
            cout<<endl;
        }
    }
};
    int main()
    
    {int t;
        class_stack a;
      do{  cout<<"1.insert\n2.delete\n3.display\n4.exit\nenter the condition :";
        cin>>t;
        if(t==1)
        a.insert();
        else if(t==2)
        a.remove();
        else if(t==4)
        cout<<"finished";
        else if(t==3)
        a.display();
        else
        cout<<"invalid input";
            
        }
        while(t!=4);
        return 0;
}
