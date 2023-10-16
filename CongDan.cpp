#include <iostream>
#include "CauHinh.cpp"
#include "Tiemchung.cpp"
#include <ctime>
#include <cstring>
using namespace std;
struct Node
{
	Tiemchung tc; 
	Node* next;
	Node* pre;
};
class CongDan
{
private:
	Date ngaySinh;
	string cccd, sdt, hoTen, gTinh;
	int n;
public:
	CongDan(string cccd, string sdt, string hoTen, string gTinh, Date ngaySinh) 
	{
		this->cccd = cccd;
		this->gTinh = gTinh;
		this->hoTen = hoTen;
		this->sdt = sdt;
		this->ngaySinh = ngaySinh;
	}
	virtual void hienThi() {
		cout << "Ho ten cong dan: " << this->hoTen << "\n"
			<< "Gioi tinh: " << this->gTinh << "\n"
			<< "Ngay sinh: " << this->ngaySinh.getNgay() << "/" << this->ngaySinh.getThang() << "/" << this->ngaySinh.getNam() << "\n"
			<< "CCCD: " << this->cccd << "\n"
			<< "SDT: " << this->sdt << "\n";
	}
	Date getNgaySinh() const { return ngaySinh; }
	string getCccd() const { return cccd; }
	string getSdt() const { return sdt; }
	string getHoTen() const { return hoTen; }
	string getGTinh() const { return gTinh; }

	// Setters
	void setNgaySinh(const Date& d) { ngaySinh = d; }
	void setCccd(const string& c) { cccd = c; }
	void setSdt(const string& s) { sdt = s; }
	void setHoTen(const string& ht) { hoTen = ht; }
	void setGTinh(const string& gt) { gTinh = gt; }
};