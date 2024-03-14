#include<IOSTREAM>                                               
#include<conio.h>
using namespace std;
int main()
{
  
	int a[10], i, j,temp,s;
	cout<<"Enter the array size : ";
	cin>>s;
	cout<<"Enter Array Elements : ";
	for(i=0; i<s; i++)
	{
		cin>>a[i];
	}

   for(i=1;i<s;i++)
   {
    temp=a[i];
    j=i-1;
     while((temp<a[j])&&(j>=0))
    {
     a[j+1]=a[j];
     j=j-1;
     }
     a[j+1]=temp;
     }
     for(i=0;i<s;i++)
     {
      cout<<a[i]<<"\t"<<"element is sorted using insertion sort\n";
      }
      return 0;
    
}

