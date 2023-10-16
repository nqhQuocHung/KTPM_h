#include <iostream>
#include "CongDan.cpp"
using namespace std;
class CongDanNuocNgoai :public CongDan 
{
private:
	string quocTich;
	string soHC;
public:
	CongDanNuocNgoai(string cccd, string sdt, string hoTen, string gTinh, Date ngaySinh, string qt, string shc)
		:CongDan(cccd, sdt, hoTen, gTinh, ngaySinh) 
	{
		this->quocTich = qt;
		this->soHC = shc;
	}
	void hienThi() override
	{
		CongDan::hienThi();
		cout << "Quoc tich: " << this->quocTich << "\n"
			<< "So ho chieu: " << this->soHC << "\n";
	}
	string getsoHC() const 
	{
		return this->soHC;
	}
	void setsoHC(string shc)
	{
		this->soHC = shc;
	}
	string getquocTich() const
	{
		return this->quocTich;
	}
	void setquocTich(string qt)
	{
		this->quocTich = qt;
	}
};