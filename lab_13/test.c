#include "rys.h"
#include<math.h>

//==================================================

void  inic_stale(Stale* stale) {
  (*stale).szerokosc = 80;
  (*stale).wysokosc =  40;
  (*stale).dolny_x = -4;
  (*stale).gorny_x =  6;
  (*stale).dolny_y = -4;
  (*stale).gorny_y =  6;
}

//==================================================

void  sinus (double t, double* x, double* y) {
  *x = t;
  *y = 4*sin(t);
}

void  okrag1 (double t, double* x, double* y) {
  *x = cos(t);
  *y = sin(t);
}

void  okrag2 (double t, double* x, double* y) {
  *x = 3*cos(t);
  *y = 3*sin(t);
}

void spirala(double t, double* x, double* y){
	*x =  
	*y = t*cos(t);
	
}
//==================================================

int main () {
  inicjuj();
  
 // rysuj(sinus, -2*M_PI, 2*M_PI, 0.01, '@');
 // rysuj(okrag1, -M_PI, M_PI, 0.01, '*');
 // rysuj(okrag2, -M_PI, M_PI, 0.01, 'o');
  rysuj(spirala, -M_PI, M_PI, 0.001, '*');
  drukuj("Sinusoida i okregi.");
  return 0;
}

//==================================================
