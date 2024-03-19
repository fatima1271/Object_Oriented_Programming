	#include<iostream>
	#include<conio.h>
	#include<vector>
	#include<string.h>
	using namespace std;
	class product{
		string name;
		float price;
		int quantity;
		public:
		product()
		{
			cout<<"default constructor call started\n";
			cout<<"default constructor call ended\n";
		}
		void setData(string n,float p,int q)
		{
			name=n,price=p,quantity=q;
		}
		void getData()
		{
			cout<<"name=";
			cout<<name;
			cout<<endl;
			cout<<"price=";
			cout<<price;
			cout<<endl;
			cout<<"quantity=";
			cout<<quantity;
			cout<<endl;
		}
	double getTotalPrice()
	{
		return price*quantity;
		cout<<endl;
	}
	};
	class Electronics:public product{
		int no_of_months;
		public:
		void setData(int m)
		{
	    	no_of_months=m;
		}
		void getData()
		{
			cout<<"no of months:";
			cout<<no_of_months;
			cout<<endl;
		}
		double getTotalPrice()
		{
			double total=product::getTotalPrice();
			return total+(10*no_of_months);
			cout<<endl;
		}
	};
	class Books:public product{
		string author;
		public:
			void setData(string aut)
			{
		    	author=aut;
			}
			void getData()
			{
				cout<<"name of author:";
				cout<<author;
				cout<<endl;
			}
			double getTotalPrice()
			{
			double total=product::getTotalPrice();
			return total-(0.1*total);
			cout<<endl;
			}
	};
	class Food:public product{
		string expiryDate;
		public:
			void setData(string ex)
			{
                expiryDate=ex;
			}
			void getData()
			{
				cout<<"expiry date of product:";
				cout<<expiryDate;
				cout<<endl;
			}
		double getTotalPrice()
		{
		double total=product::getTotalPrice();
		return total-(0.2*total);
		cout<<endl;
			}	
	};
	main()
	{
      product obj1;
      obj1.setData("laptop", 450000.45, 14);
      obj1.getData();
      cout<<obj1.getTotalPrice();
      Electronics obj2;
      obj2.setData(13);
      obj2.getData();
      cout<<obj2.getTotalPrice();
      Books obj3;
      obj3.setData("ali hassan");
      obj3.getData();
      cout<<obj3.getTotalPrice();
      Food obj4;
      obj4.setData("15-01-2003");
      obj4.getData();
      cout<<obj4.getTotalPrice();
	}