#include<iostream>
using namespace std;

class So_phuc 
{   private:

	int phanthuc,phanao;

	public:

	void Nhap()
	{
		cin>>phanthuc;
		cin>>phanao;	
	}
	void in()
	{	
	     cout<<"A = "<<phanthuc<<"+"<<phanao<<"*j"<<endl; 	
	}
	
	int tong()
	{
	    cout<<  phanthuc+phanao<<"*j"<<endl; 
	}
	int hieu()
	{
		
		cout<< phanthuc-phanao<<"*j"<<endl;
	}
    
	int tich ()
	{
		cout<< phanthuc*phanao<<"*j"<<endl;		
	}	
     int thuong ()
	{
		
	cout<<  phanthuc/phanao<<"*j"<<endl;
	
	}
	
};
int main (){
	So_phuc s;
	s.Nhap();
	cout<<"Tong la";
	s.tong();
	cout<<"Hieu la ";
	s.hieu();
	cout<<"Tich la";
   s.tich();
	cout<<"Thuong la";
    s.thuong();
    return 0;
	}