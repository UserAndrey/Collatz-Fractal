#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int n,i;
	for (i=1;i<=10000000;i++) {
	    n=i;
	    cout<<endl<<"i = "<<i<<endl;
	    do
	    {
		if(n%2==0)
		{n=n/2;
		cout<<"n = "<<n<<endl;}
		else 
		{
		n=n*3+1;
		cout<<"n = "<<n<<endl;
		};
        }while (n!=1);
                            }
}