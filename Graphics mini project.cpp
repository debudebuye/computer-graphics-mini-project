#include<GL/glut.h>
#include <math.h>
void myfirstcode(void){
   glClear(GL_COLOR_BUFFER_BIT);
  glClearColor(0.0,0.0,0.0,0.0);
  glColor3f(1.0,1.0,1.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0.0,820.0,0.0,820.0);
   
}
void handleKeyPress(unsigned char key, int x, int y) {
    
    if (key == 'A' || key == 'a') {
    
    
	// to draw stadium
  
   glColor3f(0.0, 1.0, 0.0); // Set color to green
   glRecti(40, 70, 380,280 ); // Draw rectangle with corners  

    // Draw lines on rectangle
  
    
    glColor3f(1.0, 1.0, 1.0);  // Set color to white
    glLineWidth(3.0);  // Set line width  
    
	glBegin(GL_LINES);
    glVertex2i(48,78);
    glVertex2i(48,272);
    
    glVertex2i(372,78);
    glVertex2i(372,272);
    
    glVertex2i(48,272);
    glVertex2i(372,272);
    
    glVertex2i(48,78);
    glVertex2i(372,78);
    
    
    glVertex2i(202,78);
    glVertex2i(202,272);
    
    glVertex2i(88,150);
    glVertex2i(88,214);
    
    glVertex2i(88,150);
    glVertex2i(48,150);
    
    glVertex2i(88,214);
    glVertex2i(48,214);
    
    glVertex2i(332,150);
    glVertex2i(332,214);
    
    glVertex2i(332,150);
    glVertex2i(372,150);
    
    glVertex2i(332,214);
    glVertex2i(372,214);
    
    // right large box
    glVertex2i(314,230);
    glVertex2i(314,130);
    
    glVertex2i(314,230);
    glVertex2i(372,230);
    
    glVertex2i(314,130);
    glVertex2i(372,130);
    
     // left large box
    glVertex2i(104,230);
    glVertex2i(104,130);
    
    glVertex2i(104,230);
    glVertex2i(48,230);
    
    glVertex2i(104,130);
    glVertex2i(48,130);

    
    
    // corner 
    glVertex2i(360,80);
    glVertex2i(372,95);
    
    glVertex2i(360,272);
    glVertex2i(372,260);
    
    glVertex2i(58,80);
    glVertex2i(48,95);
    
    glVertex2i(58,272);
    glVertex2i(48,260);
    
    glEnd();
    
    glColor3f(1.0, 1.0, 1.0); // Set color to white 
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2i(202,185);
     
    glEnd();
    
    glColor3f(1.0, 1.0, 1.0); // Set color to white
    glPointSize(5);
    glBegin(GL_POINTS);
    
    glVertex2i(95,185);
    glVertex2i(323,185);
     
    glEnd();
    
    glFlush();
    
    }
    else if (key == 'B' || key == 'b') {
  //for points
  glPointSize(10);
  glBegin(GL_POINTS);
  glColor3f(1.0,1.0,1.0);
  glVertex2i(500,500);
  glVertex2i(600,500);
  glVertex2i(550,600);  
  glEnd();
  
  glFlush();
  
    }
     
}

void handleArrow(int key, int x, int y) {
    if (key == GLUT_KEY_UP ) {  
        // to draw lines
    glEnable(GL_LINE_STIPPLE);
    glLineWidth(2.0);
    glLineStipple(1, 0x00F);
    glBegin(GL_LINE_STRIP);
    glVertex2i(450,260);
    glVertex2i(700,260);
    glEnd();
    glDisable(GL_LINE_STIPPLE);

    glEnable(GL_LINE_STIPPLE);
    glLineWidth(3.0);
    glLineStipple(1, 0x0FFF);
    glBegin(GL_LINE_STRIP);
    glVertex2i(450,240);
    glVertex2i(700,240);
    glEnd();
    glDisable(GL_LINE_STIPPLE);
    
    glFlush();
 } else if (key == GLUT_KEY_DOWN) {
 	// to draw star
   glLineWidth(2.0);
   glBegin(GL_LINES);

   glVertex2i(510,110);
   glVertex2i(600,170);

   glVertex2i(600,170);
   glVertex2i(510,170);

   glVertex2i(510,170);
   glVertex2i(600,110);

   glVertex2i(555,200);
   glVertex2i(510,110);

   glVertex2i(600,110);
   glVertex2i(555,200);

   glEnd();

   glFlush();
   }
   
  else if (key == GLUT_KEY_RIGHT || key == GLUT_KEY_LEFT){
glColor3f(0.0, 1.0, 0.0);
// Draw a rectangle with corners  
glRecti(80, 650, 250,700 );

// Draw lines between the corners of the rectangle to create a shaded effect
glBegin(GL_LINES);
glVertex2f(-1.0, -1.0);
glVertex2f(-1.0, 1.0);
glVertex2f(-1.0, 1.0);
glVertex2f(1.0, 1.0);
glVertex2f(1.0, 1.0);
glVertex2f(1.0, -1.0);
glVertex2f(1.0, -1.0);
glVertex2f(-1.0, -1.0);
glEnd();
  
// Set the color to yellow
glColor3f(255.0,255.0,0.0);
// Draw a rectangle with corners  
glRecti(80, 600, 250,650 );

// Draw lines between the corners of the rectangle to create a shaded effect
glBegin(GL_LINES);
glVertex2f(-1.0, -1.0);
glVertex2f(-1.0, 1.0);
glVertex2f(-1.0, 1.0);
glVertex2f(1.0, 1.0);
glVertex2f(1.0, 1.0);
glVertex2f(1.0, -1.0);
glVertex2f(1.0, -1.0);
glVertex2f(-1.0, -1.0);
glEnd();
  
// Set the color to red
glColor3f(255.0,0.0,0.0);
// Draw a rectangle with corners   
glRecti(80, 550, 250,600 );

// Draw lines between the corners of the rectangle to create a shaded effect
glBegin(GL_LINES);
glVertex2f(-1.0, -1.0);
glVertex2f(-1.0, 1.0);
glVertex2f(-1.0, 1.0);
glVertex2f(1.0, 1.0);
glVertex2f(1.0, 1.0);
glVertex2f(1.0, -1.0);
glVertex2f(1.0, -1.0);
glVertex2f(-1.0, -1.0);
glEnd();

// Set the line width  
glLineWidth(7.0);

// Draw a line  
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);
glVertex2i(78,410);
glVertex2i(78, 705);

glVertex2i(60,410);
glVertex2i(95, 410);

glVertex2i(70,415);
glVertex2i(85, 415);

glEnd();

glFlush();
	
	}
  }
  void section (void) {
    
  
  
  //lines
  glLineWidth(2.0);
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINES);
  
  //for vertical line
  glVertex2i(400,20);
  glVertex2i(400,800);
 
 //for vertical line arrow
  glVertex2i(415,20);
  glVertex2i(400,2);
  
  glVertex2i(385,20);
  glVertex2i(400,2);
  
  glVertex2i(385,20);
  glVertex2i(415,20);
  
  glVertex2i(415,800);
  glVertex2i(400,818);
  
  glVertex2i(385,800);
  glVertex2i(400,818);
  
  glVertex2i(415,800);
  glVertex2i(385,800);
   
   //for horizontal line arrow
  glVertex2i(20,400);
  glVertex2i(800,400);
  
  glVertex2i(20,415);
  glVertex2i(2,400);
  
  glVertex2i(20,385);
  glVertex2i(2,400);
  
  glVertex2i(20,415);
  glVertex2i(20,385);
  
  glVertex2i(800,415);
  glVertex2i(818,400);
  
  glVertex2i(800,385);
  glVertex2i(818,400);
  
  glVertex2i(800,415);
  glVertex2i(800,385);

  glEnd();
  
  glFlush();
 
}
 
  


int main(int argc, char* argv[]) {
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(820,820);
glutInitWindowPosition(150,10);
glutCreateWindow("Debela Haile computer graphics mini project");
glutKeyboardFunc(handleKeyPress);
glutSpecialFunc(handleArrow);
glutDisplayFunc(section);
myfirstcode();

glutMainLoop();


return 0;
}