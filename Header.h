//_CRT_SECURE_NO_WARNINGS
#ifndef BUS_TRANSPORT_H
#define BUS_TRANSPORT_H

#include <iostream>
#include <string>

using namespace std;

struct TuyenXeBuyt {
    int maTuyen;
    string tenTuyen;
    string diemDau;
    string diemCuoi;
    float cuLy;
    TuyenXeBuyt* nextTuyen;
};

struct CongTy {
    int maCty;
    string tenCty;
    string diaChi;
    TuyenXeBuyt* danhSachTuyen;
    CongTy* nextCty;
};

TuyenXeBuyt* ThemTuyenXeBuyt(int ma, const string& ten, const string& dau, const string& cuoi, float ly);
CongTy* ThemCongTy(int ma, const string& ten, const string& diaChi);
void ThemTuyenXeBuyt(CongTy* congTy, TuyenXeBuyt* tuyenMoi);
TuyenXeBuyt* NhapThongTinTuyenXeBuyt();
CongTy* NhapThongTinCongTy();
void XoaCongTy(CongTy*& danhSachCongTy, int maCtyCanXoa);
void XoaCongTy(CongTy*& danhSachCongTy, const string& tenCtyCanXoa);
void TimTuyenXeBuyt(CongTy* danhSachCongTy, int maTuyenCanTim);
void TimTuyenXeBuyt(CongTy* danhSachCongTy, const string& tenTuyenCanTim);
void ThemTuyenChoCongTy(CongTy* danhSachCongTy, int maCongTyThemTuyen);

#endif 
