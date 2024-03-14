#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
class stack{ 
    public: 
    int top,i,stck[5]; 
    stack(){ 
        top=-1; 
    } 
    void push(int x){ 
        stck[++top]=x; 
        cout<<"value inserted\n"; 
    } 
    void pop(){ 
        cout<<"deleted\n"<<stck[top--];
    }
    void disp();
};
void stack::disp(){
   for(i=0;i<=top;i++){
     cout<<"\n"<<stck[i];
   }
}
int main(){    
    stack s;
    int n;
    do{
        cout<<"1-push\n2-pop\n3-exit";
        cin>>n;
        switch(n){
            case 1:
                s.push(10);
                s.disp();
                break;
            case 2:
                s.pop();
                s.disp();
                break;
            case 3:
                exit(1);
                break;
            default:
                cout<<"invalid";
        }
    }while(n==1||n==2||n==3);

    return 0;
}
