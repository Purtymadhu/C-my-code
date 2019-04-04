#include<iostream>
using namespace std;
int main()
{
	int count=0;
	char c;
	cout.put(c);
	cin.get(c);
	while(c!='\n')
	{
		cout.put(c);
		count++;
		cin.get(c);
	}
	cout<<"\n Number of characters="<<count<<"\n";
	return 0;
}
