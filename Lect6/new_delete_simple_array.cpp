#include <iostream>
using namespace std;

int main()
	{
		int *p;
		p = new int [5]; //5 ელემენტიანი მასივისთვის მეხსიერების გამოყოფა

		if(!p) //იმ შემთხვევაში თუ არ არის საკმარისი მეხსიერება p იქნება 0,
			   //ანუ !0 იქნება ჭეშმარიტი გამოსახულება
			{
				cout<<"არ არის საკმარისი მეხსიერება!"<<endl;
				return 1;
			}
		int i;

		for (i=0; i<5; i++) 
			p[i]=i*2;

		for (i=0; i<5; i++)
			{
				cout<<"რიცხვი რომელზეც უთითებს მასივის ელემენტი p["<<i<<"]: არის ";
				cout<<p[i]<<endl;
			}

		delete [] p; //მეხსიერების გამოთავისუფლება	

		return 0;
	}	