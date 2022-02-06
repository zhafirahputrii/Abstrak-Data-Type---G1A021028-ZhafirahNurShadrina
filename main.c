

//Zhafirah Nur Shadrina Putri
//G1A021028
//Informatika B

#include <stdio.h>
//Header

float LuasJajarGenjang (float a, float t){
  return a*t;
}
//Fungsi

int main(){
  printf("Menghitung Luas Jajar Genjang\n");
  printf("-----------------------------------------------\n");
  float luas, alas, tinggi;
  printf("Masukkan alas \t: ");
  scanf("%f", &alas);
  printf("Masukkan tinggi  \t: ");
  scanf("%f", &tinggi);
  luas = LuasJajarGenjang(alas, tinggi);
  printf("-----------------------------------------------\n");
  printf("Hasil luas jajar genjang adalah %.2f", luas);
  printf("\n\n\n");
  return 0;
}
//Main