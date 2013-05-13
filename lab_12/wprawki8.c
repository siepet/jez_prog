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

void geom(int w, int h) {
  glMatrixMode(GL_PROJECTION); glLoadIdentity();
  glOrtho(-20, 20, -15, 15, -30, 30);
}

//============================================
// Obliczenie buzki:

#define M_PI 3.14159265358979323846
double przyrost = M_PI/20;

void  odcinek_okregu(double prom, double kat0, double kat1) {
  for (double kat=kat0; kat<=kat1; kat+=przyrost)
    glVertex3d(prom*cos(kat), prom*sin(kat), 0);
}

void  twarz() {
  glLineWidth(5);

    // obrys buzki:
  glColor3d(CZARN);
  glBegin(GL_LINE_LOOP);
    odcinek_okregu(8, 0, 2*M_PI);
  glEnd();

    // wypelnienie buzki:
  glColor3d(SZARY);
  glBegin(GL_POLYGON);
    odcinek_okregu(8, 0, 2*M_PI);
  glEnd();

    // przesuniete obrys i wypelnienie buzki:
  glPushMatrix(); glTranslated(0, 0, -2);
  glColor3d(CZARN);
  glBegin(GL_LINE_LOOP);
    odcinek_okregu(8, 0, 2*M_PI);
  glEnd();
  glColor3d(SZARY);
  glBegin(GL_POLYGON);
    odcinek_okregu(8, 0, 2*M_PI);
  glEnd();
  glPopMatrix();

  glPushMatrix();  glTranslated(0, 0, 0.5);



    // usta:
  glColor3d(CZERW);
  glBegin(GL_POLYGON);
    odcinek_okregu(1.44*2, 11*M_PI/4, 12*M_PI/4);
  glEnd();

  glPopMatrix();


}

//============================================
// Scena:

void wyswietl(void) {
  glClear(GL_COLOR_BUFFER_BIT);
  glClear(GL_DEPTH_BUFFER_BIT);
  twarz();
  glFlush();
}

double kat_obrotu = M_PI/360;
void  timer(int v) {
  static double alfa = 0;
  alfa += kat_obrotu;
  if (alfa >= 2*M_PI)  alfa -= 2*M_PI;
  glMatrixMode(GL_MODELVIEW); glLoadIdentity();
  gluLookAt(20*cos(alfa), 7, 20*sin(alfa),  0,0,0,  0,1,0);
  glutPostRedisplay();
  glutTimerFunc(15, timer, v);
}

//============================================

int main(int ile_arg, char* arg[]) {
  glutInit(&ile_arg, arg);
  glutInitWindowSize(400, 300);
  glutInitWindowPosition(20, 10);
  glutCreateWindow(arg[0]);
  glEnable(GL_DEPTH_TEST);
  glClearColor(ZOLTY, 0.0);
  glutReshapeFunc(geom);
  glutDisplayFunc(wyswietl);
  glutTimerFunc(15, timer, 0);
  glutMainLoop();
  return 0;
}
