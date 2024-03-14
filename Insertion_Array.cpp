#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter total number of elements: ";
    cin>>num;
    int a[50];
    int count=num;
    cout<<"Enter elements: ";
    for(int i=0; i<num; i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the position where you want element to be inserted: ";
    cin>>k;
    int b;
    cout<<"Enter the element to be inserted: ";
    cin>>b;
    while(count>=k){
        a[count+1]=a[count];
        count--;
    }
    a[k]=b;
    for(int j=0;j<=num;j++){
        cout<<"After insertion:"<<a[j]<<"\n";
    }
    return 0;
}
