#include <GL/glut.h>
#include <math.h>

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
#define SZARY 0.75, 0.75, 0.75

//============================================
// Geometria obrazka:
void render();
void geom(int w, int h) {

  // bedziemy zmieniac macierz PROJECTION, poczatkowo ma byc jednostkowa:
  glMatrixMode(GL_PROJECTION); glLoadIdentity();

  glOrtho(-20, 20, -15, 15, -30, 30);
}

//============================================
// Obliczenie buzki:

#define M_PI 3.14159265358979323846
double przyrost = M_PI/1000;

void  odcinek_okregu(double prom, double kat0, double kat1) {
  for (double kat=kat0; kat<=kat1; kat+=przyrost)
    glVertex3d(prom*cos(kat), prom*sin(kat), 0);
}

void  twarz() {
  glLineWidth(5);


    // gora 1
    glPushMatrix();
    glTranslated(-7,10,0);
    glRotatef(180, 0, 0, 24);
  glColor3d(CZERW);
  glBegin(GL_POLYGON);

// odcinek_okregu(11.0, 4*M_PI, 8*M_PI);
for(double x=-2.0; x<=2.0; x+=przyrost){
  	glVertex3d(x+2,x*x,x);
}
// odcinek_okregu(3.414*4, 5*M_PI/4, 7*M_PI/4);
  glEnd();
  glPopMatrix();

    // gora 2
    glPushMatrix();
    glTranslated(8,10,0);
    glRotatef(180, 0, 0, 24);
  glColor3d(CZERW);
  glBegin(GL_POLYGON);

// odcinek_okregu(11.0, 4*M_PI, 8*M_PI);
for(double x=-2.0; x<=2.0; x+=przyrost){
  	glVertex3d(x+2,x*x,x);
}
// odcinek_okregu(3.414*4, 5*M_PI/4, 7*M_PI/4);
  glEnd();
  glPopMatrix();

    // gora 3 
    glPushMatrix();
    glTranslated(-27.1,0,0);
    glScaled(-3.2,1, 1);
      glColor3d(CZERW);
  glBegin(GL_POLYGON);

// odcinek_okregu(11.0, 4*M_PI, 8*M_PI);
for(double x=-2.5; x<=2.5; x+=przyrost){
  	glVertex3d(x-8,x*x,x);
}
// odcinek_okregu(3.414*4, 5*M_PI/4, 7*M_PI/4);
  glEnd();
  glPopMatrix();



}

//============================================
// Scena:

void wyswietl(void) {
  glClear(GL_COLOR_BUFFER_BIT);

  // bedziemy zmieniac macierz MODELVIEW, poczatkowo ma byc jednostkowa:
  glMatrixMode(GL_MODELVIEW); glLoadIdentity();
  gluLookAt(3,0,1,  0,0,0,  0,1,0);

render();
twarz();

glFlush();
}

//============================================

// text
void drawBitmapText(char *string, float x, float y, float z){
	char *c;
	glRasterPos3f(x, y, z);
	for(c=string; *c != '\0'; c++){
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *c);
	}
}
void render(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glTranslated(20,-20,0);
	glLoadIdentity();
	glColor3f(CZERW);
	drawBitmapText("Serduszka som fajne!", 200, 200, 1);
	glutSwapBuffers();
}

int main(int ile_arg, char* arg[]) {
  glutInit(&ile_arg, arg);
  glutInitWindowSize(800, 600);
  glutInitWindowPosition(650,150);
  glutCreateWindow("moj rysunek");
  glClearColor(CZARN, 0.0);
  glutReshapeFunc(geom);
  glutDisplayFunc(wyswietl);
  glutMainLoop();
  return 0;
}
