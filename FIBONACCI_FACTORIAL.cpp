#include<IOSTREAM>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n==2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    
    // A part
    int a , fact = 1;
    cout<<"enter the number:";
    cin>>a;
    for(int i = 2; i <= a;i++){
	fact *= i;
    }
    cout<<"factorial of "<<a<<"  is "<<fact<<endl;
    
   //B part
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci of " << n << " is: " << fibonacci(n) << endl;

    return 0;
}
