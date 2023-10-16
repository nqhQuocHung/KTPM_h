#include <iostream>
#include <cstring>
using namespace std;
class Date 
{
private:
	int ngay;
	int thang;
	int nam;
public:
	Date(int ngay, int thang, int nam) 
	{
		this->ngay = ngay;
		this->thang = thang;
		this->nam = nam;
	}
	Date() 
	{
		this->ngay = 1;
		this->thang = 1;
		this->nam = 2000;
	};
	int getNgay() const { return ngay; }
	int getThang() const { return thang; }
	int getNam() const { return nam; }

	// Setters
	void setNgay(int d) { ngay = d; }
	void setThang(int m) { thang = m; }
	void setNam(int y) { nam = y; }
};