#include <GL/glut.h>

//============================================
// Definicje kolorow:

#define CZARN 0.0, 0.0, 0.0
#define CZERW 1.0, 0.0, 0.0
#define ZIELO 0.0, 1.0, 0.0
#define ZOLTY 1.0, 1.0, 0.0
#define NIEBI 0.0, 0.0, 1.0
#define MAGEN 1.0, 0.0, 1.0
#define CYJAN 0.0, 1.0, 1.0
#define BIALY 1.0, 1.0, 1.0

//============================================
// Geometria obrazka:

void geom(int w, int h) {
  // Granice przedstawionego fragmentu przestrzeni:
  //   glOrtho(lewa, prawa, dolna, gorna, przednia, tylna);
  glOrtho(-20, 20, -15, 15, -5, 5);
}

//============================================
// Scena:

void wyswietl(void) {
  glClear(GL_COLOR_BUFFER_BIT);

  //----------------
  // Odcinki:
  
  glColor3d(CZERW);            // kolor
  glLineWidth(5);              // grubosc linii

  glPushMatrix();              // pamietanie wspolrzednych oraz:
  glTranslated(-8.0, 8.0, 0);  // przesuniecie

  glBegin(GL_LINES);           // odcinki parami
    glVertex3d(-5, 0, 0);      //
    glVertex3d( 0, 5, 0);      //  wspolrzedne  (x, y, z)
    glVertex3d( 5, 0, 0);      //  na razie plasko:  z = 0
    glVertex3d( 0,-5, 0);      //
  glEnd();

  glPopMatrix();               // odwolanie przesuniecia

  //----------------
  // Lamana:

  glColor3d(ZIELO);            // kolor
  glLineWidth(5);              // grubosc linii

  glPushMatrix();              // pamietanie wspolrzednych oraz:
  glTranslated( 8.0, 8.0, 0);  // przesuniecie

  glBegin(GL_LINE_LOOP);       // lamana zamknieta
    glVertex3d(-5, 0, 0);      //
    glVertex3d( 0, 5, 0);      //  wspolrzedne  (x, y, z)
    glVertex3d( 5, 0, 0);      //  na razie plasko:  z = 0
    glVertex3d( 0,-5, 0);      //
  glEnd();

  glPopMatrix();               // odwolanie przesuniecia

  //----------------
  // Wielokat:

  glColor3d(NIEBI);            // kolor

  glPushMatrix();              // pamietanie wspolrzednych oraz:
  glTranslated(-8.0,-8.0, 0);  // przesuniecie

  glBegin(GL_POLYGON);         // wypelniony wielokat
    glVertex3d(-5, 0, 0);      //
    glVertex3d( 0, 5, 0);      //  wspolrzedne  (x, y, z)
    glVertex3d( 5, 0, 0);      //  na razie plasko:  z = 0
    glVertex3d( 0,-5, 0);      //
  glEnd();

  glPopMatrix();               // odwolanie przesuniecia

  //----------------
  // Lamana zamknieta nieplaska:

  glColor3d(CZARN);            // kolor

  glPushMatrix();              // pamietanie wspolrzednych oraz:
  glTranslated( 8.0,-8.0, 0);  // przesuniecie

  glBegin(GL_LINE_LOOP);       // lamana zamknieta
    glVertex3d(-5, 0,-8);      //
    glVertex3d( 0, 5, 0);      //  wspolrzedne  (x, y, z)
    glVertex3d( 5, 0, 0);      //  pierwszy punkt poza obrazkiem
    glVertex3d( 0,-5, 0);      //
  glEnd();

  glPopMatrix();               // odwolanie przesuniecia

  //----------------

  glFlush();
}

//============================================

int main(int ile_arg, char* arg[]) {
  glutInit(&ile_arg, arg);
  glutInitWindowSize(400, 300);
  glutInitWindowPosition(20, 10);
  glutCreateWindow(arg[0]);
  glClearColor(ZOLTY, 0.0);
  glutReshapeFunc(geom);
  glutDisplayFunc(wyswietl);
  glutMainLoop();
  return 0;
}
