
#include <iostream>
using namespace std;
	
class Khachhang
{ 

		char hoten[30];
		char namsinh[20];
		char cmt[15];
		char hokhau[50];
		public:

	void Nhap()
	{
	cout<<"Nhap Ho va ten: ";
	cin.getline(hoten,30);
	cout<<"Nhap nam sinh: ";
	cin.getline(namsinh,20);
	cout<<"Nhap chung minh thu: ";
	cin.getline(cmt,15);
	cout<<"Nhap ho khau: ";
	cin.getline(hokhau,50);
	cin.ignore();
	}
	
	void xuat()
{
	cout<<"Ho va ten : "<<hoten<<endl; 
    cout<<"Nam sinh : "<<namsinh<<endl;
   	cout<<"CMT : "<<cmt<<endl;
   	cout<<"Ho Khau: "<<hokhau<<endl;
}
   void THEM()
   
   {int n;
   	cout<<"Moi ban nhap so khach hang: ";cin>>n;
   	cin.ignore();
   	for(int i=0;i<n;i++)
   	{
    Nhap();
    
  }  
   }
   

void sxep(Khachhang a[], int &n)
	{
		for (int i = 0 ; i <n-1 ; i++)
		{
			for (int j = i+1 ; j <n ; j++) 
				if (strcmpi(a[i].hoten,a[j].hoten)>0)
				{
					Khachhang tg = a[i];
					a[i]=a[j];
					a[j]=tg;
				}
		} 
	} 



};



int main()
{ 
    Khachhang s;
	cout<<"MOI BAN NHAP THONG TIN"<<endl;
    s.Nhap();
   	s.xuat();
	s.THEM();
	s.sxep();
	


}