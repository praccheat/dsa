#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a[10], i, num, n, count=0, position;
    cout<<"Enter the array size : ";
    cin>>n;
    cout<<"Enter Array Elements : \n";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter elements to be searched : ";
    int s,first,last,mid;
    cin>>s;
    first=0;                                                                 
    last=n-1;
    mid=(first+last)/2;
    while(first<=last){
        if(a[mid]<s){
            first=mid+1;
        }else if(a[mid]==s){
            cout<<s<<" found at "<<mid+1;
            break;
        }else{
            last=mid-1; 
        }
        mid=(first+last)/2;
    }if(first>last){
        cout<<"not found";
    }
    return 0;
}
