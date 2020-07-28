#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class NGUOI
{
	public:
		int maso;
		string hoten;
		void nhap1();
		
		void hienthi1();
};
void NGUOI::nhap1()
	{
			cout<<"Nhap MA SO NHAN VIEN:";
			cin>>maso;
			cout<<"Nhap HO TEN NHAN VIEN:";
			fflush(stdin);getline(cin,hoten);
	}
void NGUOI::hienthi1()
		{
			cout<<maso<<setw(15)<<hoten;
		}	
class BIENCHE
{
	public:
		int hesoluong,phucap;
		void nhap2()
		{
			cout<<"Nhap HE SO LUONG:";cin>>hesoluong;
			cout<<"Nhap TIEN PHU CAP:";cin>>phucap;
		}
		void hienthi2()
		{
			cout<<setw(10)<<hesoluong<<setw(12)<<phucap;
		}
};
class HOPDONG:public BIENCHE,public NGUOI
{
	public:
	int tiencong,hsvg,luong;
	int ngaylv;
	void nhap3()
	{
		cout<<"TIEN CONG LAO DONG:";cin>>tiencong;
		cout<<"Nhap SO NGAY LAM VIEC:";cin>>ngaylv;
		cout<<"Nhap HE SO VUOT GIO:";cin>>hsvg;
	}
	void luongnv()
	{
		luong=(tiencong*hesoluong*ngaylv*hsvg)+phucap;
	}
	void hienthi3()
	{
		cout<<setw(15)<<tiencong<<setw(10)<<ngaylv<<setw(15)<<hsvg<<setw(10)<<luong<<endl;
	}
};
main()
{
	HOPDONG hd[100];
	int i,n;
	cout<<"NHAP SO NHAN VIEN:";cin>>n;
	for(i=0;i<n;i++)
	{
		hd[i].nhap1();
		hd[i].nhap2();
		hd[i].nhap3();
		hd[i].luongnv();
	}
	cout<<"THONG TIN NHAN VIEN:"<<endl;
	cout<<"STT"<<setw(7)<<"maso"<<setw(15)<<"hoten"<<setw(15)<<"hesoluong"<<setw(10)<<"phucap"<<setw(15)<<"tiencong"<<setw(10)<<"ngaylv"<<setw(10)<<"hsvg"<<setw(10)<<"luong"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<i+1<<setw(7);// STT
		hd[i].hienthi1();
		hd[i].hienthi2();
		hd[i].hienthi3();
	}
}
