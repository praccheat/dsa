#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a[5],b[5],c[10],i;
    cout<<"Enter 1st array elements\n";
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"\n Enter 2nd array elements:\n";
    for(i=0;i<5;i++){
        cin>>b[i];
    }
    cout<<"\n the merged array is \n";
    int temp=0;
    for(i=0;i<10;i++){
        temp++;
        if(temp<=5){
            c[i]=a[i];
        }else{
            c[i]=b[i-5];
        }
    }
    for(i=0;i<10;i++){
        cout<<c[i]<<"\t";
    }
    return 0;
}
