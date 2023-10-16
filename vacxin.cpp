#include <iostream>
#include <string>
using namespace std;

class Vacin {
private: 
    static int dem;
    int maVacin;             
    string tenVacin;         
    string xuatXu;         
    int soLuong;             

public:
    
    Vacin(string ten, string xx, int soluong)
    {
        this->maVacin = ++dem;
        this->tenVacin = ten;
        this->xuatXu = xx;
        this->soLuong = soluong;
    }
    int getMaVacin() const 
    { 
        return maVacin;
    }
    void setMaVacin(int ma)
    { 
        maVacin = ma;
    }
    string getTenVacin() const 
    { return tenVacin; }
    void setTenVacin(string ten) 
    { 
        tenVacin = ten; 
    } 
    string getXuatXu() const 
    {
        return xuatXu; 
    }
    void setXuatXu(string xuatsu) 
    {
        xuatXu = xuatsu; 
    }
    int getSoLuong() const 
    { 
        return soLuong;
    }
    void setSoLuong(int soluong) 
    {
        soLuong = soluong;
    }
};