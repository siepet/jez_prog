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
    printf("(%.50lf+%.50lfi)", z.rea, z.ima);
  }
  else {
    printf("(%.50lf-%.50lfi)", z.rea, -z.ima);
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
zespol zesp_dziel(zespol z1, int dzielnik){
	zespol wynik;
	wynik.rea = z1.rea / dzielnik;
	wynik.ima = z1.ima / dzielnik;

	return wynik;
}
zespol euler(){
    zespol z;
    z.rea = cos(M_PI);
    z.ima = sin(M_PI);
    return z;

}
zespol jedynka(){
	zespol jeden;
	jeden.rea = 1;
	jeden.ima = 0;
	return jeden;
}
zespol zero(){
	zespol zero;
	zero.rea = 0;
	zero.ima = 0;
	return zero;
}
zespol zesp_exp(zespol z){
	zespol suma = zero();
	zespol skl = jedynka();
	int i;
	for(i=1;i<1000000;i++){
		suma = zesp_dodac(suma,skl);
		skl = zesp_dziel(zesp_razy(skl,z),i);
	}
	return suma;
}


int main () {
    zespol  z1, z2;
    zespol euler1 = euler();
    zespol jedynka1 = jedynka();

	zespol pi_i = {0.0, M_PI};
	zespol lewStr = zesp_dodac(zesp_exp(pi_i),jedynka1); 
 
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
 
	zesp_print(zesp_exp(euler1));
		printf("\n");
	zesp_print(lewStr);
    printf("\n");

	return 0;
}
