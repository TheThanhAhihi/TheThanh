#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class Giaovien{
	char ht[30];
	int tuoi;
	char bc[15];
	char cn[20];
	float bl;
public:
	void nhap();
	void xuat();
	float luong();
	friend void xs(Giaovien *a , int n);
};

void Giaovien::nhap(){
	cout<<"\n\tNhap ten giao vien: ";fflush(stdin);gets(ht);
	cout<<"\tNhap tuoi: ";cin>>tuoi;
	cout<<"\tNhap bang cap: ";fflush(stdin);gets(bc);
	cout<<"\tNhap chuyen nganh: ";fflush(stdin);gets(cn);
	cout<<"\tNhap bac luong: ";cin>>bl;
}

float Giaovien::luong(){
	float lcb;
	lcb=bl*610;
	return lcb;
}
void Giaovien::xuat(){
	cout<<setw(10)<<ht;
	cout<<setw(13)<<tuoi;
	cout<<setw(15)<<bc;
	cout<<setw(15)<<cn;
	cout<<setw(15)<<bl;
}
void xs(Giaovien *a , int n){
	for(int i=0 ; i<n-1 ; i++){
		for(int j=i+1 ; j<n ; j++){
			if(strcmpi(a[i].cn,a[j].cn)>0){
			Giaovien tg=a[i];
			a[i]=a[j];
			a[j]=tg;
			}
		}
	}
}
int main(){
	Giaovien *a;
	int n;
	cout<<"Nhap so luong giao vien: ";
	cin>>n;
	a=new Giaovien [n];
	for(int i=0 ; i<n ; i++){
		a[i].nhap();
	}
	cout<<"\nDanh sach giao vien co luong duoi 2000: "<<endl;
	cout<<setw(10)<<"Ten"<<setw(15)<<"Tuoi"<<setw(15)<<"Bang cap"<<setw(17)<<"Chuyen nganh"
	<<setw(15)<<"Bac luong"<<setw(17)<<"Luong"<<endl;
	for(int i=0;i<n;i++){
        if((a[i].luong())<2000){
            a[i].xuat();
            cout<<setw(20)<<a[i].luong()<<endl;
        }
        
	}
	cout<<"\nSap xep giao vien theo chuyen nganh: "<<endl;
	xs(a,n);
	cout<<setw(10)<<"Ten"<<setw(15)<<"Tuoi"<<setw(15)<<"Bang cap"<<setw(17)<<"Chuyen nganh"
	<<setw(15)<<"Bac luong"<<setw(17)<<"Luong"<<endl;
	for(int i=0 ; i<n ; i++){
		a[i].xuat();
		cout<<setw(20)<<a[i].luong()<<endl;
	}
	return 0;
}
