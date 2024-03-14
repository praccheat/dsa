#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    
    int a[20],n,i,del,count=0;
    cout<<"Enter elements to be entered:";
    cin>>n;
    cout<<"enter the values:\n";
    for(i=0;i<n;i++){
	    cin>>a[i];
    }
    cout<<"\nEnter the value to be deleted:\n";
    cin>>del;
    for(i=0;i<n;i++){
	    if(a[i]==del){
		    for(int j=i;j<(n-1);j++)
		    {
			    a[j]=a[j+1];
		    }
		    count++;
		    n=n-1;
		    break;
	    }
    }
    if(count==0){
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element Deleted Successfuly\n";
        cout<<"New Array:\n";
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<"\n";
        }
    }
    return 0;
}
