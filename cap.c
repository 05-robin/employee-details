#include<stdio.h>
struct emp
{
	char name[20];
	int age;
	int phonenumber;
	int salary;
};
int main()
{
	struct emp e;
	printf("Enter the employee name: ");
	gets(e.name);
	e.age=20;
	e.phonenumber=1234567891;
	e.salary=50000;
	printf("name: %s\nage: %d\nphone number: %d\nsalary: %d",e.name,e.age,e.phonenumber,e.salary);
}
