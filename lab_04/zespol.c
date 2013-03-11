#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

/****************************************************************/
// DEFINICJA TYPU LICZB ZESPOLONYCH:

typedef struct {
  double rea, ima;
}  zespol;

/****************************************************************/
// POMOCNICZE:

void  blad(char s[]) {  // -- sygnalizacja bledu wejscia
  printf("\n !!! FUNKCJA zesp_get: %s !!!\n\n", s);
  exit(1);
}

/****************************************************************/
// INICJALIZACJE oraz WEJSCIE-WYJSCIE:

zespol  zesp_zestawic (double r, double i) {
    // zestawienie liczby zespolonej z dwoch rzeczywistych
  zespol z;
  z.rea = r;  z.ima = i;
  return z;
}

zespol  zesp_get (void) {
    /* wczytanie liczby zespolonej; powinna skladac sie z dwoch
       rzeczywistych, oraz plusa lub minusa miedzy nimi, zaczynac sie od
       nawiasu otwierajacego, konczyc siÄ litera i oraz nawiasem
       zamykajacym;
       np.  (123.45 + 67.89i)
    */
  char ch;  zespol z;  int znak;
  do
    {
        ch = getchar();
    } while (isspace(ch));
  if (ch == '(') {
    if (scanf("%lf", &(z.rea)) == 1) {
        do {
            ch = getchar();
        } while (isspace(ch));
      if (ch == '+' || ch == '-') {
  if (ch == '+')
	{
	     znak = 1;
	}
	else{
	    znak = -1;
	}
	if (scanf("%lf", &(z.ima)) == 1) {
	  do { ch = getchar(); } while (isspace(ch));
	  if (ch == 'i') {
	    do { ch = getchar(); } while (isspace(ch));
	    if (ch == ')') {
	       if (znak == -1)  z.ima = -z.ima;
	    } else blad("brak koncowego nawiasu");
	  } else blad("brak 'i' na koncu czesci urojonej");
	} else blad("niepoprawna czesc urojona");
      } else blad("po czesci rzeczywistej brak znaku '+' lub '-'");
    } else blad("niepoprawna czesc rzeczywista");
  } else blad("brak rozpoczynajacego nawiasu");
  return z;
}

void  zesp_print (zespol z) { // drukowanie liczby zespolonej
  if (z.ima >= 0){
    printf("(%.2lf+%.2lfi)", z.rea, z.ima);
  }
  else {
    printf("(%.2lf-%.2lfi)", z.rea, -z.ima);
  }
}

/****************************************************************/
// DZIALANIA:

zespol  zesp_dodac (zespol z1, zespol z2){
        zespol z3;
        z3.rea = z1.rea + z2.rea;
        z3.ima = z1.ima + z2.ima;

    return z3;
}
  // dodawanie liczb zespolonych

zespol  zesp_odjac (zespol z1, zespol z2)
{
    zespol z3;
    z3.rea = z1.rea - z2.rea;
    z3.ima = z1.ima - z2.ima;
    return z3;
}
  // odejmowanie liczb zespolonych

zespol  zesp_razy (zespol z1, zespol z2)
{
    zespol z3;
    z3.rea = z1.rea * z2.rea + z1.ima * z2.ima * -1;
    z3.ima = z1.rea * z2.ima + z1.ima * z2.rea;
    return z3;
}
  // mnozenie liczb zespolonych

zespol  zesp_sprzez (zespol z){
    z.rea = z.rea;
    z.ima = z.ima * -1;

    return z;
}
  // liczba sprzezona do danej zespolonej

double  zesp_abs (zespol z)
{
    return sqrt(pow(z.rea,2) + pow(z.ima,2));
}
  // wartosc bezwzgledna liczby zespolonej

/****************************************************************/

zespol euler(){
    zespol z;
    z.rea = cos(M_PI);
    z.ima = sin(M_PI);
    return z;

}
zespol jedynka(){
	zespol jed;
 
	jed.rea = 1;
	jed.ima = 0;
	return jed;
}

double e(int x){
	int i;
	int pot;
	int jot = 1;
	double euler = 0;
	for(i=1;i<=10;i++){
		pot = pow(x,i);
		jot *= i;
		euler = pot / jot; 
	}
	return euler;
}


int main () {
    zespol  z1, z2;
    zespol euler1 = euler();
    zespol jedynka1 = jedynka();
    printf("\n z1 == "); z1 = zesp_get();
    printf(" z2 == "); z2 = zesp_get();
    printf("\n z1 + z2 == "); zesp_print(zesp_dodac(z1, z2));
    printf("\n z1 - z2 == "); zesp_print(zesp_odjac(z1, z2));
    printf("\n z1*z2 == "); zesp_print(zesp_razy(z1, z2));
    printf("\n |z1+z2| == %.4lf\n\n", zesp_abs(zesp_dodac(z1, z2)));
    printf("\n sprzezenie z1 == "); zesp_print(zesp_sprzez(z1));
    printf("\n sprzezenie z2 == "); zesp_print(zesp_sprzez(z2));
    printf("\n\n\n\n");
    printf("Tozsamosc Eulera: \n");
   zesp_print(euler1);
    printf(" + ");
    zesp_print(jedynka1);
    printf(" = ");
    zesp_print(zesp_dodac(euler1, jedynka1)); 
    printf("\n");

	printf("%le \n",e(5));
	return 0;
}
