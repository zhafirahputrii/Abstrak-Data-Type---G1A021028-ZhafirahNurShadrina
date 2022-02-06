# Abstrak-Data-Type---G1A021028-ZhafirahNurShadrina
TUGAS STRUKTUR DATA DAN ALGORITMA (ADT)
Nama : Zhafirah Nur Shadrina Putri NPM : G1A021028 Kelas : Informatika B Dosen Pengampu : Mochammad Yusa,S.Kom.,M.Kom.

Penjelasan Source Code: //Zhafirah Nur Shadrina Putri //G1A021028 //Informatika B //Header //Fungsi //Main Source Code diatas berfungsi untuk menambahkan komentar

#include <stdio.h> merupakan Header dari program yang dibuat

float LuasPersegiPanjang (float a, float t){ return a*t; } berfungsi untuk membuat deklarasi function/fungsi yang akan digunakan dengan cara memasukkan alas dan tinggi jajar genjang

int main(){ ... return 0; } merupakan program main pada bahasa C

float luas, alas, tinggi; merupakan deklarasi variabel dengan tipe data luas, alas, dan tinggi

printf("Masukkan alas \t: "); scanf("%f", &alas); printf("Masukkan tinggi \t: "); scanf("%f", &tinggi); merupakan input dari alas dan tinggi

luas = LuasJajarGenjang(alas, tinggi); merupakan pemanggilan fungsi dari luas

printf("-----------------------------------------------\n"); printf("Hasil luas jajar genjang adalah %.2f", luas); printf("\n\n\n"); adalah print output untuk menghasilkan luas yang telah dihitung

return 0; berfungsi untuk menyatakan hasil output dari fungsi program berakhir dengan normal.
