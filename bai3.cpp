#include <iostream.h>
class DaThuc3{
	private:
		int a,b ,c, d;	
	public:
		DaThuc3(int a = 0, int b = 0, int c = 0, int d = 0){
			this ->a = a;
			this ->b = b;
			this ->c = c;
			this ->d = d;
		}	
		~DaThuc3(){}
		friend istream& operator >>(istream& is, DaThuc3 a)
		{
			cout<<"\nNhap a: ";
			is>>a.a;
		 	cout<<"\nNhap b: ";
			is>>a.b;
			cout<<"\nNhap c: ";
			is>>a.c;
			cout<<"\nNhap d: ";
			is>>a.d;
			return is;
		}
		
		friend ostream& operator <<(ostream& os, DaThuc3 a)
		{
			os<<a.a
			  <<a.b
			  <<a.c
			  <<a.d<<endl;
			  return os;		  
		}	
};
int main()
{
	int n;
	cout << "<< a <<"*x^3 + " << b <<" *^2 + "<< c <<"*x +"<< d <<" <<ax^3 + bx^2 + cx + d << " ";
}
	DaThuc3 a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for(int i = 0; i < n; i++)
	{
		cout<<a[i];
	}
	
	return 0;
}