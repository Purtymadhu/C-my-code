#include<iostream>
#include<conio.h>

	class man
	{
		public:
			char name[10];
			int age,n;
			void show()
			{
				std::cout<<"enter a name\n:";
				std::cin>>name;
				std::cout<<"enter a age\n:";
				std::cin>>age;
				std::cout<<"name is:"<<name<<"\n"; 
				std::cout<<"age is:\n"<<age;
			}
	};
	int main()
	{
	man m;
	man *ptr;
	ptr=&m;
	ptr->show();
	  
}
