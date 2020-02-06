/*a) Write a recursive program to
i) Solve Towers-of-Hanoi problem*/

#include<iostream>
using namespace std;
int gcd(int n1, int n2);
int main1();
int two();
int tower(int n,char src,char temp,char dest)
{
	if(n==1)
	{
		cout<<"move "<<n<<" disc from "<<src<<" to "<<dest<<"\n";
	}
	else
	{
		tower(n-1,src,dest,temp);
		cout<<"move "<<dest<<" disc from "<<src<<" to "<<dest<<"\n";
		tower(n-1,temp,src,dest);
	}
	return 0;
}
int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1 % n2);
    else 
       return n1;
}
int main1()
{
	int num;
	cout<<"enter the number of discs \n";
	cin>>num;
	tower(num,'A','B','C');
	return 0;
}
int two()
{
   int n1, n2;
   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;
   int g = gcd(n1, n2);
   cout << "G.C.D of " << n1 << " & " <<  n2 << " is: " << g << "\n";
   return 0;
}

int main(){
	int choice;
	cout << "Enter\n1: tower of hanoi \n2: GCD \n";
	cin >> choice;
	if(choice == 1)
		main1();
	else
		two();
}

