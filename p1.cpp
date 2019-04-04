 #include<iostream>
 #include<conio.h>
 int main()
 {
 	int n;
 	int *ptr;
 	std::cout<<"enter a number\n";
 	std::cin>>n;
 	ptr=&n;
 	std::cout<<"value of n\n"<<*ptr;
 	std::cout<<"address of n\n"<<&n;
 }
