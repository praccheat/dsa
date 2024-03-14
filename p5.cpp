#include<IOSTREAM>
#include<conio.h>
using namespace std;
int main()
{
  
//clrscr();
int array[5];
int data;
cout<<"enter the array\n";
for(int k=0;k<5;k++)
{
  cout<<(k+1)<<" value:";
  cin>>array[k];
}
cout<<"enter the data to search: ";
cin>>data;
for(int i=0;i<5;i++)
{
 if(array[i] == data)
   {
    cout<<"data found at position: "<<i+1<<"\n";
   }
   if(i == 4){
      return 0;
    }
}

cout<<"data not found";
return 0;
//getch();
}

