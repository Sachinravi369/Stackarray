#include <iostream>
#include<string.h>
using namespace std;
class array
{
    int stack[3],t,top=-1,maxsize=3;
    
    public:
    void push()
    {
        char q[5];
        do{
        if(top==maxsize-1)
        {
            cout<<endl<<"--stack overflow--"<<endl<<endl;
            break;
        }
        else
        {
            top++;
            cout<<"enter item to push :";
           while((!(cin>>stack[top]))){
               cout<<"--error-- only nubers are accepted :";
               cin.clear();
               cin.ignore(12,'\n');
           }
            
          if(top==maxsize-1){cout<<endl<<"! now the stack is full"<<endl<<endl;
           break;}
          // */
      cout<<"push again? yes/no :";
            cin>>q;
            
        }}
       while(strcmp(q,"yes")==0);
            
        
    } 
    
    void pop()
    {char q[5];
    do{
        if(top<0)
        {
            cout<<endl<<"--stack underflow--"<<endl<<endl;
            break;
        }
        else
        {
            cout<<"item popped :"<<stack[top]<<endl;
            top--;
            if(top<0){cout<<endl<<"! now the stack is empty"<<endl<<endl;
           break;}
            cout<<"pop again? yes/no :";
            cin>>q;
        }
    }
    while(strcmp(q,"yes")==0);
    }   
    void display()
    {int i;
    if(top<0){cout<<"--srack is empty--"<<endl;
    return;}
    
        cout<<"elements of stack :";
        for(i=top;i>=0;i--)
        cout<<stack[i]<<"\t";
        cout<<endl;
    }

};

int main()
{
    array q;
   int a;
  // a=new int;
    do{
  cout<<"  main menu\nmode\tcode\npush\t1\npop \t2\ndisplay\t3\nstop\t4\nenter code :";
       while(!(cin>>a))
       {
               cout<<"--error-- only nubers are accepted :";
               cin.clear();
               cin.ignore(12,'\n');
           }
      // cout<<q
      switch(a){
      
 case 1: q.push();
      break;
   case 2: q.pop();
      break;
case 3: q.display();
    break;
    default:if(a!=4)cout<<"invalid input"<<endl;
    
      break;
    }
   }
  while(a!=4);
    return 0;
}
