#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

#define MAX_MB 300
#define MAX_VE 1000
#define TRUE 1
#define FALSE 0

using namespace std;

//Trang thai hoat dong
const int MACDINH=0;
const int MD_TTCB=1;

//Ma ASCII ban phim
const int F1 = 112;
const int F2 = 113;
const int F3 = 114;
const int F4 = 115;
const int F5 = 116;
const int F6 = 117;
const int F7 = 118;
const int F8 = 119;
const int F9 = 120;
const int F10 = 121;
const int F11 = 122;
const int F12 = 123;
const int Space = 8;
const int Tab = 9;
const int Enter = 13;
const int Up = 38;
const int Left = 37;
const int Rigth = 39;
const int Down = 40;




struct MAY_BAY{
	char So_hieu_MB [16];
	char Loai_MB [41];
	int so_day, so_dong;         
};
typedef MAY_BAY MB;

typedef struct Danh_sach_MB{
	MB so_mb = 0;
	MB *nodes[MAX_MB];
};
typedef struct Danh_sach_MB dsmb;

struct thoi_gian{
	int phut;
	int gio;
	int ngay;
	int thang;
	int nam;
};
typedef struct thoi_gian time;

struct khach_hang{
	char CMND[10];
	char Ho[10];
	char Ten[30];
	bool Phai; //true la nam, false la nu
};
typedef struct khach_hang KH;

struct nodeKH{
	KH data;
	int key = MACDINH;
	struct nodeKH *left = NULL;
	struct nodeKH *right = NULL;
};
typedef nodeKH *TREE;

struct ve{
	char CMND[10];
	int so_ghe;
};
typedef struct ve VE;

struct chuyen_bay{
	char machuyenbay[16];
	TIME time_xp;
	char noiden[16];
	int trang_thai= MD_TTCB;
	char sh_mb[16];
};
typedef struct chuyen_bay CB;

struct Node_CB{
	CB data;
	int sl_ve;
	int sl_dat;
	VE *ds_ve[MAX_VE];
    Node_CB* next = NULL;
};
typedef struct Node_CB* ptr;
