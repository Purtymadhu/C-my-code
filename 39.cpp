#include<io stream>
#include<conio.h>
#include<vector>
using namespace std;
void display(vector<int> & v)
{
	for(int i=0;i<v.size();i++)
	{
		cout
		<<v[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	vector<int> v; //create a vector of type int;
	cout<<"initial size ="<<v.size() <<endl;
	//puting values into the vector;
	int x;
	cout<<"enter five integer value:";
	for(int i=0;i<5;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<"size after adding 5 values:";
	cout<<v.size()<<endl;
	//display the contents;
	cout<<"current contents:";
	display(v);
	//add one more value;
	v.push_back(6.6);
	//display the size and contents:
	cout<<"\n size="<<v.size()<<endl;
	cout<<"contents now: \n";
	display(v);
	
	//inserting elements;
	vector<int> :: iterator itr=v.begin(); 
	itr=itr+3;
	v.insert(itr,1,9);
	
	//display the contents;
	cout<<"\n contents after inserting:";
	display(v);
	
	//removing 4th and 5th elements;
	v.erase(v.begin()+3, v.begin()+5);
	//display the contents;
	cout<<"contents after deletion;\n";
	display(v);
	cout<<"END\n";
	return 0;
}
