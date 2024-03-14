#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a[50]; int j; int size; int t;
    cout<<"enter the size : ";
    cin>>size;
    cout<<"enter elements : \n";
    for(int i=0;i<size;i++){
	    cin>>a[i];
	}
    for (int i=0;i<size;i++){
	    for(j=i+1;j<size;j++){
		    if(a[i]>a[j]){
			    t=a[j];
			    a[j]=a[i];
			    a[i]=t;
		    }
	    }
    }
    for(int i=0;i<size;i++){
	    cout<<a[i]<<"\t";
    }
    return 0;                           
}
