//  Judul   : Analisa Kasus Volume Tbung
//  Author  : Rahmat Sabilludin Nurmughni
//  Nim     : A11.2016.09515
#include<stdio.h>

//kamus
    float luas_alas, tinggi_tabung, r1, r2, volume_kelereng, volume_tabung, volume_setengahbola, volume_stlh_kelerengmsk, volume_air_tumpah;

//deskripsi
main(){
	printf(" masukan volume kelereng : "); scanf("%f",&volume_kelereng);
	r1=2;
	tinggi_tabung=11;
	r2=1;
	volume_tabung=3.14*(r1*r1)*tinggi_tabung;
	volume_setengahbola=(2/3)*3.14*(r1*r1*r2);
	volume_stlh_kelerengmsk=volume_tabung+volume_setengahbola-volume_kelereng;
	volume_air_tumpah=volume_tabung+volume_setengahbola-volume_stlh_kelerengmsk;
	printf(" sisa air di dalam tabung reaksi adalah %2.f ml\n air yg tumpah adalah %2.f ml\n ",volume_stlh_kelerengmsk,volume_air_tumpah);
    return 0;
}
