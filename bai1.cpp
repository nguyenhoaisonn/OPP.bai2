#include<iostream.h> 
class KH 
{
	private :
	char ht[30];
	struct ns
	{
	   int day;
	   int month;
	   int year;	
	};
	char cmt [10];
	char hk[50];
	public:
		friend istream& operator>>(istream is, KH a)
	{
		ns s1;
		cout<<"nhap ho va ten : ";
		is>>ht;
		cout<<"\nnhap ngày sinh :";
		is>>a.day;
		cout<<"\n nhap tháng sinh :";
		is>>a.month;
		cout<<"\n nhap nam sinh : ";
		is>>a.year;
		cout<<"\n nhap chung minh thu :";
		is>>cmt;
		cout<<"\nnhap ho khau :";
		is>>hk;
		return is;
		friend ostream& operator <<(ostream& os, KH a)
		{
			os<<ht
			  <<a.day 
			  <<a.month
			  <<a.year 
			  <<a.cmt
			  <<a.hk<<endl;
			  return os;		  
		}
	}
		void tuoigiamdan (int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++){
            if(a[i]<a[j]){
                    int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
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
cout<<"nhap so khach hang: ";cin>>n;
 KH[n];
for(int i=0;i<n;i++)
{
	cout<<"nhap thong tin khach hang : "<<i+1 <<endl;
	h[i].nhap();
}
return 0;
}