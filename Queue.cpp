#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
class q{
    public:
    int rear,front,i,qu[5];
    q(){
        front=-1;
        rear=-1;
    }
    void push(int x){
        qu[++rear]=x;
        cout<<"value inserted\n";
    }
    void pop(){
        cout<<"deleted\n";
        qu[++front];
    }
    void disp();
};

void q::disp(){
    for(i=front+1;i<=rear;i++){
        cout<<"\n"<<qu[i];
    }
}

int main(){
    q s;
    int n;
    do{
        cout<<"\n1-push\n2-pop\n3-exit\n";
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
    }
    while(n==1||n==2||n==3);
    return 0;
}
