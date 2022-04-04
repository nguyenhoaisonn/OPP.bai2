#include<iostream.h> 
class GV
{
	private :
	char ht[30];
	int t;
	char bc [15];
	char cn[20];
	float bl;
	public:
		friend istream& operator>>(istream is, GV a)
	{
		fflush(stdin); 
		cout<<"nhap ho va ten : ";
		is.getline(a.ht,30) 
		cout<<"nhap tuoi :";
		is>>a.t;
		fflush(stdin);
		cout<<"nhap bang cap :";
		is.getline(a.cb,15) 
		fflush(stdin);
		cout<<"nhap chuyen nganh : ";
		is.getline(a.cn,20) 
		is>>cn;
		cout<<"nhap bac luong :";
		is>>a.bl;
		return is;
		friend ostream& operator <<(ostream os, GV a)
		{
			os<<setw(31)<<a.ht 
			  <<setw(30)<<a.t 
			  <<setw(17)<<a.bc
			  <<setw(25)<<a.cn 
			  <<setw(10)<<a.bl<<endl;
			  return os;		  
		}
	}
float lcb()
{
	return bl*610; 
}
	void nhap(int a[], int n){
 		for(int i=0;i<n;i++)
        cin>>a[i];
	}
	void xuat(int a[], int n){
		for(int i=0;i<n;i++)
        cout<<" "<<a[i];
	}
};
int main()
{
int n;
cout<<"nhap so giao vien: ";cin>>n;
 GV[n];
for(int i=0;i<n;i++)
{
	cout<<"nhap thong tin Giao vien : "<<i+1 <<endl;
	h[i].nhap();
}
return 0;
}