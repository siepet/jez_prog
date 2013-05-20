//==================================================
// Definicja typu  Stale :

typedef struct {
  int szerokosc;  // szerokosc rysunku, czyli dlugosc wiersza (w znakach)
  int wysokosc;   // wysokosc rysunku (w wierszach)
    // poziomy wymiar prostokata na plaszczyznie, ktory rysujemy:
  double dolny_x, gorny_x;
    // pionowy wymiar prostokata na plaszczyznie, ktory rysujemy:
  double dolny_y, gorny_y;
}  Stale;
    
    /* Uzytkownik programu musi sam zdefiniowac funkcje
         void  inic_stale (Stale* stale);
       ktora ustali wartosc zmiennej typu  Stale .
    */

//==================================================
// Funkcje, dostarczane przez biblioteke:

void  inicjuj ();
    /* Funkcja przygotowujaca pusta plansze.  Trzeba ja wywolac przed
       kazdym nowym rysunkiem.
    */

void  rysuj (void krzywa(double t, double* x, double* y),
             double t_pocz, double t_kon, double t_krok,
             char c
	    );
    /* Funkcja rysujaca krzywa.
       Jej pierwszym parametrem ma byc funkcja wyliczajaca wspolrzedne
       olowka na plaszczyznie w chwili  t .
       Trzy kolejne parametry to chwila, kiedy zaczyna sie ruch
       olowka; chwila, kiedy sie konczy; oraz odstep czasowy miedzy
       kolejnymi chwilami.
       Ostatni parametr to znak, jakim nalezy rysowac krzywa.
    */
       
void  drukuj (char podpis[]);

    /* Funkcja drukujaca przygotowana plansze, dolaczajac podpis.
    */

//==================================================
