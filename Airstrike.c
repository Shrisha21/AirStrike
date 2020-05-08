

#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include <time.h>
#include<ctype.h>
#define PI 3.141592653589
float i,j,k,q;
int bomb=2;
GLfloat title_fade=10;
int opt,dis,aa,ddd,xz,m,mm=0,z;
void keyboard(unsigned char key,int x,int y);
void print(char *string,
	GLfloat r, GLfloat g, GLfloat b, GLfloat a,
	GLint x, GLint y,
	GLfloat w, GLfloat h,
	GLfloat strokeSize) {
	glPushMatrix();

	glColor4f(r, g, b, a);
	glTranslatef(x, y, 0);
	glScalef(w, h, 0);

	glPointSize(strokeSize);
	glLineWidth(strokeSize);

	while (*string)
		glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, *string++);

	glPopMatrix();

	glLineWidth(1);
	glPointSize(1);
}

void introduction()
 {
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    for(int v=0;v<50;v++)

    {
	    // Project Title
	    print("PES Institute of Technology and Management",1, 0, 0, title_fade, 100, 750, .27, .27, 1);
        print("AIR STRIKE",1, 1, 0, title_fade, 600, 600, .27, .27, 1);
	    print("Shrisha G Adiga",0, 1, 1, title_fade, 100, 320, .27, .27, 1);
	    print("(4PM16CS083)",0, 1, 1, title_fade, 100, 290, .2, .2, 1);
            print("Yashas SC",0, 1, 1, title_fade, 1100, 320, .27, .27, 1);
	    print("(4PM16CS108)", 0, 1, 1, title_fade, 1100, 290, .2, .2, 1);
	    print("Under Guidance", 0, 1, 1, title_fade, 600, 220, .2, .2, 1);
	    print("Mrs.Pratibha S", 0, 1, 1, title_fade, 600, 190, .27, .27, 1);
	    print("Press s to continue.....",0, 1, 1, title_fade, 700, 50, .15, .15, 1); 
	    //glutKeyboardFunc(keyboard);
            glFlush();
     }
}

void st()
{
	glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    for(z=0;z<8000;z++)
    {
    mm=1;
	 print("STORY",1, 0, 0, title_fade, 670, 550, .27, .27, 1.5);
	 print("ON 14 FEBRUARY 2019, A CONVOY OF VEHICLES CARRYING SECURITY PERSONNEL",0, 1, 1, title_fade, 50, 320, .15, .15, 1); 
	 print("ON THE JAMMU SRINAGAR NATIONAL HIGHWAY WAS ATTACKED BY A VEHICLE-BORNE",0, 1, 1, title_fade,50, 280, .15, .15, 1);
	 print("SUICIDE BOMBER AT LETHPORA (NEAR AWANTIPORA) IN THE PULWAMA DISTRICT,",0, 1, 1, title_fade, 50, 240, .15, .15, 1); 

print("SO  WE DECIDED TO MAKE AIR STRIKE ON PAKISTAN CAMP.",0, 1, 1, title_fade, 50, 200, .15, .15, 1);

    
	 glFlush();
	}
	glutPostRedisplay();
}
void keyboard(unsigned char key,int x,int y)
{
    if(key=='s')
    {
    	st();
    }
}


void drawCircle(GLfloat x, GLfloat y,
	GLfloat r, GLfloat g, GLfloat b,
	GLfloat sx, GLfloat sy,
	GLfloat radius) {
		glPushMatrix();

		glTranslatef(x, y, 0);
		glScalef(sx, sy, 0);

    glBegin(GL_POLYGON);
		glColor3ub(r, g, b);
    for (GLfloat i = 0; i < 360; i += 5)
        glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
    glEnd();

		glPopMatrix();
}
void home()
 {
    if(aa==0)
    {
    glBegin(GL_POLYGON);
        glLineWidth(10);
        glColor3f(0,0.5,0);
        glVertex2f(1160.5,548);
        glVertex2f(1230,548);
        glVertex2f(1230,510);
        glVertex2f(1160.5,510);
        
    glEnd();
    glColor3f(1,1,1);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(1160.5,448);
    glVertex2f(1160.5,548);
    glEnd();
    // Home Bottom
	glBegin(GL_POLYGON);
	glColor3f(0,0,0.3);
	glVertex2f(1375, 175);
	glColor3ub(181, 145, 113);
	glVertex2f(1375, 300);
	glColor3ub(181, 145, 113);
	glVertex2f(1100, 300);
	glColor3ub(169, 117, 83);
	glVertex2f(1100, 175);
	glEnd();
    

    glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(1375, 175);
	glVertex2f(1375, 300);
	glVertex2f(1100, 300);
	glVertex2f(1100, 175);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(181, 145, 113);
	glVertex2f(1100, 300);
	glVertex2f(1220, 300);
	glColor3ub(169, 117, 83);
	glVertex2f(1220, 400);
	glVertex2f(1100, 400);
	glEnd();

    glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(1130, 175);
	glVertex2f(1130, 280);
	glVertex2f(1190, 280);
	glVertex2f(1190, 175);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(69, 39, 23);
	glVertex2f(1090, 400);
	glVertex2f(1230, 400);
	glVertex2f(1160, 450);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(31, 47, 53);
	glVertex2f(1130, 175);
	glVertex2f(1130, 280);
	glVertex2f(1190, 280);
	glVertex2f(1190, 175);
	glEnd();
    
    glBegin(GL_TRIANGLES);
	glColor3ub(69, 39, 23);
	glVertex2f(1090, 400);
	glVertex2f(1230, 400);
	glVertex2f(1160, 450);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(59,91,132);
	glVertex2f(1130, 330);
	glVertex2f(1130, 370);
	glVertex2f(1190, 370);
	glColor3ub(97,131,159);
	glVertex2f(1190, 330);
	glEnd();
    
    	//Middle School
    	drawCircle(80,1000,251,10,13,1,1,50);
// Tuition Building
	glBegin(GL_POLYGON);
	glColor3ub(151, 188, 207);
	glVertex2f(25, 175);
	glVertex2f(300, 175);
	glColor3ub(144, 180, 200);
	glVertex2f(300, 350);
	glVertex2f(25, 350);
	glEnd();

	// Tuition Building Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(25, 175);
	glVertex2f(300, 175);
	glVertex2f(300, 350);
	glVertex2f(25, 350);
	glEnd();

	// Tuition Board
	glBegin(GL_POLYGON);
	glColor3ub(255, 218, 154);
	glVertex2f(50, 375);
	glVertex2f(200, 375);
	glVertex2f(200, 325);
	glVertex2f(50, 325);
	glEnd();

	// Tuition Board Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(50, 375);
	glVertex2f(200, 375);
	glVertex2f(200, 325);
	glVertex2f(50, 325);
	glEnd();

    print("POK CAMP", 0, 0, 0, 1, 58, 342, .15, .15, 1.3);
	// Tuition Door
	glBegin(GL_POLYGON);
	glColor3ub(70, 39, 21);
	glVertex2f(55, 175);
	glVertex2f(55, 280);
	glVertex2f(115, 280);
	glVertex2f(115, 175);
	glEnd();

	// Tuition Door Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(55, 175);
	glVertex2f(55, 280);
	glVertex2f(115, 280);
	glVertex2f(115, 175);
	glEnd();

	// Tuition Rectangular Window
	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(155, 280);
	glVertex2f(155, 240);
	glVertex2f(270, 240);
	glColor3ub(97, 131, 159);
	glVertex2f(270, 280);
	glEnd();

	// Tuition Rectangular Window Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(155, 280);
	glVertex2f(155, 240);
	glVertex2f(270, 240);
	glVertex2f(270, 280);
	glEnd();
    print("786", 0, 0, 0, 1, 1200, 260, .15, .15, 1.3);
	// Tuition Rectangular Window Panes
	glBegin(GL_LINES);
	glColor3ub(20, 20, 20);
	glVertex2f(213, 280);
	glVertex2f(213, 240);
	glVertex2f(155, 260);
	glVertex2f(270, 260);
	glEnd();
    
    //Bottom border
    glBegin(GL_POLYGON);
	glColor3f(1,1,1);//Bronze
	glVertex2f(320,80);
	glVertex2f(1400,80);
	glVertex2f(1400, 140);
	glVertex2f(320,140);
	glEnd();

	// Tuition Board Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(320,80);
	glVertex2f(1400,80);
	glVertex2f(1400, 140);
	glVertex2f(320,140);
	glEnd();


    	glBegin(GL_POLYGON);
    	glColor3f(0,0.5,0);
    	glVertex2f(400, 175);
	glVertex2f(1000, 175);
	glVertex2f(1000, 500);
	glColor3ub(241, 130, 94);
	glVertex2f(400, 500);
	glEnd();

	// School Building Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(400, 175);
	glVertex2f(1000, 175);
	glVertex2f(1000, 500);
	glVertex2f(400, 500);
	glEnd();

	// School Board
	glBegin(GL_POLYGON);
	glColor3ub(183, 184, 188);
	glVertex2f(570, 530);
	glVertex2f(830, 530);
	glVertex2f(830, 470);
	glVertex2f(570, 470);
	glEnd();

	// School Board Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(570, 530);
	glVertex2f(830, 530);
	glVertex2f(830, 470);
	glVertex2f(570, 470);
	glEnd();

	print("ARMY CAMP", 0, 0, 0, 1, 610, 485, .17, .17, 1.5);

  // School Door
	glBegin(GL_POLYGON);
	glColor3ub(183, 184, 188);
	glVertex2f(600, 175);
	glVertex2f(600, 280);
	glVertex2f(800, 280);
	glVertex2f(800, 175);
	glEnd();

	// School Door Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(600, 175);
	glVertex2f(600, 280);
	glVertex2f(800, 280);
	glVertex2f(800, 175);
	glEnd();

	// School Door Divider
	glBegin(GL_LINES);
	glColor3ub(20, 20, 20);
	glVertex2f(700, 280);
	glVertex2f(700, 175);
	glEnd();

	// School Windows
	for (int i = 0; i <= 500; i+=100) {
		for (int j = 0; j <= 100; j+=80) {
			glBegin(GL_POLYGON);
			glColor3ub(59, 91, 132);
			glVertex2f(425 + i, 450 - j);
			glVertex2f(475 + i, 450 - j);
			glVertex2f(475 + i, 400 - j);
			glColor3ub(97, 131, 159);
			glVertex2f(425 + i, 400 - j);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3ub(20, 20, 20);
			glVertex2f(425 + i, 450 - j);
			glVertex2f(475 + i, 450 - j);
			glVertex2f(475 + i, 400 - j);
			glVertex2f(425 + i, 400 - j);
			glEnd();

			glLineWidth(4);
			glBegin(GL_LINES);
			glColor3ub(140, 75, 55);
			glVertex2f(425 + i, 400 - j);
			glVertex2f(475 + i, 400 - j);
			glEnd();
			glLineWidth(1);
		}
	} 

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(425, 280);
	glVertex2f(475, 280);
	glVertex2f(475, 200);
	glColor3ub(97, 131, 159);
	glVertex2f(425, 200);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(425, 280);
	glVertex2f(475, 280);
	glVertex2f(475, 200);
	glVertex2f(425, 200);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(525, 280);
	glVertex2f(575, 280);
	glVertex2f(575, 200);
	glColor3ub(97, 131, 159);
	glVertex2f(525, 200);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(525, 280);
	glVertex2f(575, 280);
	glVertex2f(575, 200);
	glVertex2f(525, 200);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(825, 280);
	glVertex2f(875, 280);
	glVertex2f(875, 200);
	glColor3ub(97, 131, 159);
	glVertex2f(825, 200);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(825, 280);
	glVertex2f(875, 280);
	glVertex2f(875, 200);
	glVertex2f(825, 200);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(925, 280);
	glVertex2f(975, 280);
	glVertex2f(975, 200);
	glColor3ub(97, 131, 159);
	glVertex2f(925, 200);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(925, 280);
	glVertex2f(975, 280);
	glVertex2f(975, 200);
	glVertex2f(925, 200);
	glEnd();
   } 
   if(bomb==0 && aa==1)
   {
	// Tuition Building
	glBegin(GL_POLYGON);
	glColor3ub(151, 188, 207);
	glVertex2f(25, 175);
	glVertex2f(300, 175);
	glColor3ub(144, 180, 200);
	glVertex2f(300, 350);
	glVertex2f(25, 350);
	glEnd();

	// Tuition Building Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(25, 175);
	glVertex2f(300, 175);
	glVertex2f(300, 350);
	glVertex2f(25, 350);
	glEnd();

	// Tuition Board
	glBegin(GL_POLYGON);
	glColor3ub(255, 218, 154);
	glVertex2f(50, 375);
	glVertex2f(200, 375);
	glVertex2f(200, 325);
	glVertex2f(50, 325);
	glEnd();

	// Tuition Board Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(50, 375);
	glVertex2f(200, 375);
	glVertex2f(200, 325);
	glVertex2f(50, 325);
	glEnd();

    print("POK CAMP", 0, 0, 0, 1, 58, 342, .15, .15, 1.3);
	// Tuition Door
	glBegin(GL_POLYGON);
	glColor3ub(70, 39, 21);
	glVertex2f(55, 175);
	glVertex2f(55, 280);
	glVertex2f(115, 280);
	glVertex2f(115, 175);
	glEnd();

	// Tuition Door Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(55, 175);
	glVertex2f(55, 280);
	glVertex2f(115, 280);
	glVertex2f(115, 175);
	glEnd();

	// Tuition Rectangular Window
	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(155, 280);
	glVertex2f(155, 240);
	glVertex2f(270, 240);
	glColor3ub(97, 131, 159);
	glVertex2f(270, 280);
	glEnd();

	// Tuition Rectangular Window Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(155, 280);
	glVertex2f(155, 240);
	glVertex2f(270, 240);
	glVertex2f(270, 280);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0,0,0.3);
	glVertex2f(1375, 175);
	glColor3ub(181, 145, 113);
	glVertex2f(1375, 300);
	glColor3ub(181, 145, 113);
	glVertex2f(1100, 300);
	glColor3ub(169, 117, 83);
	glVertex2f(1100, 175);
	glEnd();
    

    glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(1375, 175);
	glVertex2f(1375, 300);
	glVertex2f(1100, 300);
	glVertex2f(1100, 175);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(181, 145, 113);
	glVertex2f(1100, 300);
	glVertex2f(1220, 300);
	glColor3ub(169, 117, 83);
	glVertex2f(1220, 400);
	glVertex2f(1100, 400);
	glEnd();

    glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(1130, 175);
	glVertex2f(1130, 280);
	glVertex2f(1190, 280);
	glVertex2f(1190, 175);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(69, 39, 23);
	glVertex2f(1090, 400);
	glVertex2f(1230, 400);
	glVertex2f(1160, 450);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(31, 47, 53);
	glVertex2f(1130, 175);
	glVertex2f(1130, 280);
	glVertex2f(1190, 280);
	glVertex2f(1190, 175);
	glEnd();
    
    glBegin(GL_TRIANGLES);
	glColor3ub(69, 39, 23);
	glVertex2f(1090, 400);
	glVertex2f(1230, 400);
	glVertex2f(1160, 450);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(59,91,132);
	glVertex2f(1130, 330);
	glVertex2f(1130, 370);
	glVertex2f(1190, 370);
	glColor3ub(97,131,159);
	glVertex2f(1190, 330);
	glEnd();
	
	
    print("786", 0, 0, 0, 1, 1200, 260, .15, .15, 1.3);
	// Tuition Rectangular Window Panes
	glBegin(GL_LINES);
	glColor3ub(20, 20, 20);
	glVertex2f(213, 280);
	glVertex2f(213, 240);
	glVertex2f(155, 260);
	glVertex2f(270, 260);
	glEnd();
    
    //Bottom border
    glBegin(GL_POLYGON);
	glColor3f(1,1,1);//Bronze
	glVertex2f(320,80);
	glVertex2f(1400,80);
	glVertex2f(1400, 140);
	glVertex2f(320,140);
	glEnd();

	// Tuition Board Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(320,80);
	glVertex2f(1400,80);
	glVertex2f(1400, 140);
	glVertex2f(320,140);
	glEnd();
        glBegin(GL_POLYGON);
         glColor3f(0,0.5,0);
         glVertex2f(400, 175-q);
     glVertex2f(1000, 175-q);
     glVertex2f(1000, 500-q);
     glColor3ub(241, 130, 94);
     glVertex2f(400, 500-q);
     glEnd();

     // School Building Border
     glBegin(GL_LINE_LOOP);
     glColor3ub(20, 20, 20);
     glVertex2f(400, 175-q);
     glVertex2f(1000, 175-q);
     glVertex2f(1000, 500-q);
     glVertex2f(400, 500-q);
     glEnd();

     // School Board
     glBegin(GL_POLYGON);
     glColor3ub(183, 184, 188);
     glVertex2f(570, 530-q);
     glVertex2f(830, 530-q);
     glVertex2f(830, 470-q);
     glVertex2f(570, 470-q);
     glEnd();

     // School Board Border
     glBegin(GL_LINE_LOOP);
     glColor3ub(20, 20, 20);
     glVertex2f(570, 530-q);
     glVertex2f(830, 530-q);
     glVertex2f(830, 470-q);
     glVertex2f(570, 470-q);
     glEnd();

     print("ARMY CAMP", 0, 0, 0, 1, 610, 485-q, .17, .17, 1.5);

   // School Door
     glBegin(GL_POLYGON);
     glColor3ub(183, 184, 188);
     glVertex2f(600, 175-q);
     glVertex2f(600, 280-q);
     glVertex2f(800, 280-q);
     glVertex2f(800, 175-q);
     glEnd();

     // School Door Border
     glBegin(GL_LINE_LOOP);
     glColor3ub(20, 20, 20);
     glVertex2f(600, 175-q);
     glVertex2f(600, 280-q);
     glVertex2f(800, 280-q);
     glVertex2f(800, 175-q);
     glEnd();

     // School Door Divider
     glBegin(GL_LINES);
     glColor3ub(20, 20, 20);
     glVertex2f(700, 280-q);
     glVertex2f(700, 175-q);
     glEnd();



     glBegin(GL_POLYGON);
     glColor3ub(59, 91, 132);
     glVertex2f(425, 280-q);
     glVertex2f(475, 280-q);
     glVertex2f(475, 200-q);
     glColor3ub(97, 131, 159);
     glVertex2f(425, 200-q);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glColor3ub(20, 20, 20);
     glVertex2f(425, 280-q);
     glVertex2f(475, 280-q);
     glVertex2f(475, 200-q);
     glVertex2f(425, 200-q);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(59, 91, 132);
     glVertex2f(525, 280-q);
     glVertex2f(575, 280-q);
     glVertex2f(575, 200-q);
     glColor3ub(97, 131, 159);
     glVertex2f(525, 200-q);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glColor3ub(20, 20, 20);
     glVertex2f(525, 280-q);
     glVertex2f(575, 280-q);
     glVertex2f(575, 200-q);
     glVertex2f(525, 200-q);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(59, 91, 132);
     glVertex2f(825, 280-q);
     glVertex2f(875, 280-q);
     glVertex2f(875, 200-q);
     glColor3ub(97, 131, 159);
     glVertex2f(825, 200-q);
     glEnd();

    glBegin(GL_POLYGON);
        glLineWidth(10);
        glColor3f(0,0.5,0);
        glVertex2f(1160.5,548);
        glVertex2f(1230,548);
        glVertex2f(1230,510);
        glVertex2f(1160.5,510);
        
    glEnd();
    glColor3f(1,1,1);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(1160.5,448);
    glVertex2f(1160.5,548);
    glEnd();



     glBegin(GL_LINE_LOOP);
     glColor3ub(20, 20, 20);
     glVertex2f(825, 280-q);
     glVertex2f(875, 280-q);
     glVertex2f(875, 200-q);
     glVertex2f(825, 200-q);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(59, 91, 132);
     glVertex2f(925, 280-q);
     glVertex2f(975, 280-q);
     glVertex2f(975, 200-q);
     glColor3ub(97, 131, 159);
     glVertex2f(925, 200-q);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glColor3ub(20, 20, 20);
     glVertex2f(925, 280-q);
     glVertex2f(975, 280-q);
     glVertex2f(975, 200-q);
     glVertex2f(925, 200-q);
     glEnd();
   } 
    if(bomb==1 && aa==1)//explosion 2
   {// Home Bottom
	glBegin(GL_POLYGON);
	glColor3f(0,0,0.3);
	glVertex2f(1375, 175-m);
	glColor3ub(181, 145, 113);
	glVertex2f(1375, 300-m);
	glColor3ub(181, 145, 113);
	glVertex2f(1100, 300-m);
	glColor3ub(169, 117, 83);
	glVertex2f(1100, 175-m);
	glEnd();
    

    glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(1375, 175-m);
	glVertex2f(1375, 300-m);
	glVertex2f(1100, 300-m);
	glVertex2f(1100, 175-m);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(181, 145, 113);
	glVertex2f(1100, 300-m);
	glVertex2f(1220, 300-m);
	glColor3ub(169, 117, 83);
	glVertex2f(1220, 400-m);
	glVertex2f(1100, 400-m);
	glEnd();

    glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(1130, 175-m);
	glVertex2f(1130, 280-m);
	glVertex2f(1190, 280-m);
	glVertex2f(1190, 175-m);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(69, 39, 23);
	glVertex2f(1090, 400-m);
	glVertex2f(1230, 400-m);
	glVertex2f(1160, 450-m);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(31, 47, 53);
	glVertex2f(1130, 175-m);
	glVertex2f(1130, 280-m);
	glVertex2f(1190, 280-m);
	glVertex2f(1190, 175-m);
	glEnd();
    
    glBegin(GL_TRIANGLES);
	glColor3ub(69, 39, 23-m);
	glVertex2f(1090, 400-m);
	glVertex2f(1230, 400-m);
	glVertex2f(1160, 450-m);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(59,91,132);
	glVertex2f(1130, 330-m);
	glVertex2f(1130, 370-m);
	glVertex2f(1190, 370-m);
	glColor3ub(97,131,159);
	glVertex2f(1190, 330-m);
	glEnd();
	// Tuition Building

	for(int xz=0;xz<100;xz+=4)
	{
	    glClear(GL_COLOR_BUFFER_BIT);
	    glPushMatrix();
          glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA,GL_ONE);
        glColor4f(1.0f, 0.0f, 0.0f, 0.5f);
          glBegin(GL_QUADS);
         glVertex3f(420, 155-q,0);
         glVertex3f(980, 155-q,0);
         glVertex3f(980, 500-q,0);
         glVertex3f(420, 500-q,0);
         glEnd();
         glColor4f(1.0f, 0.0f, 0.0f, 0.5f);
         glBegin(GL_QUADS);
        glVertex3f(25, 175-q,0);
	    glVertex3f(300, 175-q,0);
	    glVertex3f(300, 350-q,0);
	    glVertex3f(25, 350-q,0);
         glEnd();
         
        
         
        
	
	glBegin(GL_POLYGON);
	glColor3ub(151, 188, 207);
	glVertex2f(25, 175-q);
	glVertex2f(300, 175-q);
	glColor3ub(144, 180, 200);
	glVertex2f(300, 350-q);
	glVertex2f(25, 350-q);
	glEnd();

	// Tuition Building Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(25, 175-q);
	glVertex2f(300, 175-q);
	glVertex2f(300, 350-q);
	glVertex2f(25, 350-q);
	glEnd();

	// Tuition Board
	glBegin(GL_POLYGON);
	glColor3ub(255, 218, 154);
	glVertex2f(50, 375-q);
	glVertex2f(200, 375-q);
	glVertex2f(200, 325-q);
	glVertex2f(50, 325-q);
	glEnd();

	// Tuition Board Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(50, 375-q);
	glVertex2f(200, 375-q);
	glVertex2f(200, 325-q);
	glVertex2f(50, 325-q);
	glEnd();

    print("POK CAMP", 0, 0, 0, 1, 58, 342-q, .15, .15, 1.3);
	// Tuition Door
	glBegin(GL_POLYGON);
	glColor3ub(70, 39, 21);
	glVertex2f(55, 175-q);
	glVertex2f(55, 280-q);
	glVertex2f(115, 280-q);
	glVertex2f(115, 175-q);
	glEnd();

	// Tuition Door Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(55, 175-q);
	glVertex2f(55, 280-q);
	glVertex2f(115, 280-q);
	glVertex2f(115, 175-q);
	glEnd();

	// Tuition Rectangular Window
	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(155, 280-q);
	glVertex2f(155, 240-q);
	glVertex2f(270, 240-q);
	glColor3ub(97, 131, 159);
	glVertex2f(270, 280-q);
	glEnd();

	// Tuition Rectangular Window Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(155, 280-q);
	glVertex2f(155, 240-q);
	glVertex2f(270, 240-q);
	glVertex2f(270, 280-q);
	glEnd();
    print("786", 0, 0, 0, 1, 1200, 260, .15, .15, 1.3);
	// Tuition Rectangular Window Panes
	glBegin(GL_LINES);
	glColor3ub(20, 20, 20);
	glVertex2f(213, 280);
	glVertex2f(213, 240);
	glVertex2f(155, 260);
	glVertex2f(270, 260);
	glEnd();
    
    //Bottom border
    glBegin(GL_POLYGON);
	glColor3f(1,1,1);//Bronze
	glVertex2f(320,80);
	glVertex2f(1400,80);
	glVertex2f(1400, 140);
	glVertex2f(320,140);
	glEnd();

	// Tuition Board Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(320,80);
	glVertex2f(1400,80);
	glVertex2f(1400, 140);
	glVertex2f(320,140);
	glEnd();	


        glBegin(GL_POLYGON);
    	glColor3f(0,0.5,0);
    	glVertex2f(400, 175-q);
	glVertex2f(1000, 175-q);
	glVertex2f(1000, 500-q);
	glColor3ub(241, 130, 94);
	glVertex2f(400, 500-q);
	glEnd();

	// School Building Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(400, 175-q);
	glVertex2f(1000, 175-q);
	glVertex2f(1000, 500-q);
	glVertex2f(400, 500-q);
	glEnd();

	// School Board
	glBegin(GL_POLYGON);
	glColor3ub(183, 184, 188);
	glVertex2f(570, 530-q);
	glVertex2f(830, 530-q);
	glVertex2f(830, 470-q);
	glVertex2f(570, 470-q);
	glEnd();

	// School Board Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(570, 530-q);
	glVertex2f(830, 530-q);
	glVertex2f(830, 470-q);
	glVertex2f(570, 470-q);
	glEnd();

	print("ARMY CAMP", 0, 0, 0, 1, 610, 485-q, .17, .17, 1.5);

  // School Door
	glBegin(GL_POLYGON);
	glColor3ub(183, 184, 188);
	glVertex2f(600, 175-q);
	glVertex2f(600, 280-q);
	glVertex2f(800, 280-q);
	glVertex2f(800, 175-q);
	glEnd();

	// School Door Border
	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(600, 175-q);
	glVertex2f(600, 280-q);
	glVertex2f(800, 280-q);
	glVertex2f(800, 175-q);
	glEnd();

	// School Door Divider
	glBegin(GL_LINES);
	glColor3ub(20, 20, 20);
	glVertex2f(700, 280-q);
	glVertex2f(700, 175-q);
	glEnd();

	

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(425, 280-q);
	glVertex2f(475, 280-q);
	glVertex2f(475, 200-q);
	glColor3ub(97, 131, 159);
	glVertex2f(425, 200-q);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(425, 280-q);
	glVertex2f(475, 280-q);
	glVertex2f(475, 200-q);
	glVertex2f(425, 200-q);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(525, 280-q);
	glVertex2f(575, 280-q);
	glVertex2f(575, 200-q);
	glColor3ub(97, 131, 159);
	glVertex2f(525, 200-q);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(525, 280-q);
	glVertex2f(575, 280-q);
	glVertex2f(575, 200-q);
	glVertex2f(525, 200-q);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(825, 280-q);
	glVertex2f(875, 280-q);
	glVertex2f(875, 200-q);
	glColor3ub(97, 131, 159);
	glVertex2f(825, 200-q);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(825, 280-q);
	glVertex2f(875, 280-q);
	glVertex2f(875, 200-q);
	glVertex2f(825, 200-q);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(925, 280-q);
	glVertex2f(975, 280-q);
	glVertex2f(975, 200-q);
	glColor3ub(97, 131, 159);
	glVertex2f(925, 200-q);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(20, 20, 20);
	glVertex2f(925, 280-q);
	glVertex2f(975, 280-q);
	glVertex2f(975, 200-q);
	glVertex2f(925, 200-q);
	glEnd();
	
	
	glPopMatrix();
        glDisable(GL_BLEND);
        
        
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(500,320-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(495,320-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(515,320-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(510,320-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(505,325-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(505,330-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(505,335-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(505,340-q);
        glEnd();
        
        
        //2nd 
        
         glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(800,420-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(795,420-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(815,420-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(810,420-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(805,425-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(805,430-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(805,435-q);
        glEnd();
        
        //3rd
        
         glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(650,220-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(645,220-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(655,220-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(660,220-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(605,225-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(605,230-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(605,235-q);
        glEnd();
        
        
        //border1
        
        
         glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(420,155-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(415,155-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(415,155-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(410,155-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(405,160-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(405,165-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(405,170-q);
        glEnd();
        
        
        //top border1
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(420,500-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(415,500-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(440,500-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(435,500-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(435,505-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(435,500-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(435,515-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(435,540-q);
        glEnd();
        
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(25,350-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(20,350-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(35,350-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(25,355-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(25,360-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(25,365-q);
        glEnd();
        
        //2nd border
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(300,350-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(295,350-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(305,350-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(300,355-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(300,360-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(300,365-q);
        glEnd();
 }
 
 print(" JAI HINDHUSTAN",1,1,1, title_fade, 600, 600, .37, .37, 2.5);
}




	

	
        
    print("                 PAKISTAN OCCUPIED KASHMIR (P.O.K) WE DONT GIVE KASHMIR TO YOU INDIANS!!",
		0.1, 0.1, 0, 0.9, 100, 100, .14, .14, 1);
   
    glBegin(GL_LINES);
    glLineWidth(5);
    glColor3f(1,1,1);
    glVertex2f(340,20);
    glVertex2f(340,80);
    glEnd();
    
    //fences
    int ll=0;
    while(ll<=500)
    {
        ll+=20;
        glBegin(GL_LINES);
        glLineWidth(5);
        glColor3f(1,1,1);
        glVertex2f(340-ll,20);
        glVertex2f(340-ll,100);
        glEnd();
    }
    int kk=0;
    while(kk<60)
    {
        kk+=20;
        glBegin(GL_LINES);
        glLineWidth(5);
        glColor3f(1,1,1);
        glVertex2f(0,20+kk);
        glVertex2f(340,20+kk);
        glEnd();
    }

    glBegin(GL_LINES);
    glLineWidth(5);
    glColor3f(1,1,1);
    glVertex2f(1380,20);
    glVertex2f(1380,80);
    glEnd();
    
    int l=0;
    while(l<=500)
    {
        l+=20;
        glBegin(GL_LINES);
        glLineWidth(5);
        glColor3f(1,1,1);
        glVertex2f(1380+l,20);
        glVertex2f(1380+l,100);
        glEnd();
    }

    int k=0;
    while(k<60)
    {
        k+=20;
        glBegin(GL_LINES);
        glLineWidth(5);
        glColor3f(1,1,1);
        glVertex2f(1380,20+k);
        glVertex2f(2000,20+k);
        glEnd();
    }//end of fences
if(bomb==1 && j>=450 && m<40)
{
    //Pak flag
   
        glBegin(GL_POLYGON);
        glLineWidth(10);
        glColor3f(0,0.5,0);
        glVertex2f(1160.5,548-m);
        glVertex2f(1230,548-m);
        glVertex2f(1230,510-m);
        glVertex2f(1160.5,510-m);
        
    glEnd();
    glColor3f(1,1,1);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(1160.5,448-m);
    glVertex2f(1160.5,548-m);
    glEnd();
  }

    
    glBegin(GL_POLYGON);   //flight body
    glColor3f(0.5,0.5,0.5);
    glVertex2f(1300-i,1000);
    glVertex2f(1300-i,1050);
    glVertex2f(1600-i,1050);
    glVertex2f(1600-i,1000);
    glEnd();
  
    //IND flag    
    glBegin(GL_POLYGON);
    glColor3f(1,0.5,0); //orange
    glVertex2f(1500-i,1040);
    glVertex2f(1550-i,1040);
    glVertex2f(1550-i,1030);
    glVertex2f(1500-i,1030);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1); //white
    glVertex2f(1500-i,1030);
    glVertex2f(1550-i,1030);
    glVertex2f(1550-i,1020);
    glVertex2f(1500-i,1020);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,1,0); //green
    glVertex2f(1500-i,1020);
    glVertex2f(1550-i,1020);
    glVertex2f(1550-i,1010);
    glVertex2f(1500-i,1010);
    glEnd(); //end of IND flag

    //flight back
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(1510-i,1050);
    glVertex2f(1565-i,1090);
    glVertex2f(1600-i,1090);
    glVertex2f(1600-i,1050);
    glEnd();

    //flight cone
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(1300-i,1000);
    glVertex2f(1250-i,1000);
    glVertex2f(1240-i,1010);
    glVertex2f(1240-i,1020);
    glVertex2f(1300-i,1020);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2f(1300-i,1050);
    glVertex2f(1275-i,1050);
    glVertex2f(1240-i,1020);
    glVertex2f(1300-i,1020);
    glEnd();

    //flight wings
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(1380-i,1050);
    glVertex2f(1420-i,1075);
    glVertex2f(1480-i,1075);
    glVertex2f(1440-i,1050);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(1380-i,1025);
    glVertex2f(1420-i,980);
    glVertex2f(1480-i,980);
    glVertex2f(1440-i,1025);
    glEnd();//end of wings

    //100kg bomb
    if(i>=800 && bomb==0 && j<450)
    {
            glColor3f(1,0,0);    //bomb left wing 
            glBegin(GL_POLYGON);
            glVertex2f(730,1000-j);
            glVertex2f(720,1000-j);
            glVertex2f(730,990-j);
            glEnd();
            glColor3f(1,0,0);    //bomb right wing 
            glBegin(GL_POLYGON);
            glVertex2f(750,1000-j);
            glVertex2f(760,1000-j);
            glVertex2f(750,990-j);
            glEnd();
            glColor3f(0,0.5,0);  //bomb body
            glBegin(GL_POLYGON);
            glVertex2f(730,1000-j);
            glVertex2f(750,1000-j);
            glVertex2f(750,970-j);
            glVertex2f(730,970-j);
            glEnd();
            glColor3f(1,0,0);    //bomb nose cone 
            glBegin(GL_POLYGON);
            glVertex2f(730,970-j);
            glVertex2f(750,970-j);
            glVertex2f(740,960-j);
            glEnd();
            glFlush();
    }
    if(bomb==0 && j>=450) //explosion
     {
        
        for(int ddd=0;ddd<1500;ddd+=3){
      
            glPushMatrix();
          glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA,GL_ONE);
        glColor4f(1.0f, 0.0f, 0.0f, 0.2f);
          glBegin(GL_QUADS);
         glVertex3f(420, 155-q,0);
         glVertex3f(980, 155-q,0);
         glVertex3f(980, 500-q,0);
         glVertex3f(420, 500-q,0);
         glEnd();
         glPopMatrix();
        glDisable(GL_BLEND);
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(500,320-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(495,320-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(515,320-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(510,320-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(505,325-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(505,330-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(505,335-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(505,340-q);
        glEnd();
        
        
        //2nd 
        
         glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(800,420-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(795,420-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(815,420-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(810,420-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(805,425-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(805,430-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(805,435-q);
        glEnd();
        
        //3rd
        
         glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(650,220-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(645,220-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(655,220-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(660,220-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(605,225-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(605,230-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(605,235-q);
        glEnd();
        
        
        //border1
        
        
         glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(420,155-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(415,155-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(415,155-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(410,155-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(405,160-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(405,165-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(405,170-q);
        glEnd();
        
        
        //top border1
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(420,500-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(415,500-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(440,500-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(435,500-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(435,505-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(435,500-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(435,515-q);
        glEnd();
        
        glColor3f(1,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(435,540-q);
        glEnd();
        
        
        
         
        
     }}
     
     
 
     
     
    //200kg bomb
    if(i>=800 && bomb==1 && j<450)
    {
            glColor3f(1,0,0);    //bomb left wing 
            glBegin(GL_POLYGON);
            glVertex2f(730,1000-j);
            glVertex2f(720,1000-j);
            glVertex2f(730,990-j);
            glEnd();
            glColor3f(1,0,0);    //bomb right wing 
            glBegin(GL_POLYGON);
            glVertex2f(755,1000-j);
            glVertex2f(765,1000-j);
            glVertex2f(755,990-j);
            glEnd();
            glColor3f(0.0f, 0.1f, 0.1f);//bomb body
            glBegin(GL_POLYGON);
            glVertex2f(730,1000-j);
            glVertex2f(755,1000-j);
            glVertex2f(755,975-j);
            glVertex2f(730,975-j);
            glEnd();
            glColor3f(1,0,0);    //bomb nose cone 
            glBegin(GL_POLYGON);
            glVertex2f(730,975-j);
            glVertex2f(755,975-j);
            glVertex2f(742.5,965-j);
            glEnd();
            glFlush();
    }
    glutPostRedisplay(); 
}

//menu
void menu(int num)
{
    if(num==0 && bomb!=1)
        bomb=0;
    if(num==1 && bomb!=0)
        bomb=1;
    if(num==3)
        bomb=3;
}
void cm()
{
    glutCreateMenu(menu);
    glutAddMenuEntry("100kg Bomb",0);
    glutAddMenuEntry("200kg Bomb",1);
    glutAddMenuEntry("Reset",3);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}//end of menu


void init()
{
    
    glBegin(GL_POLYGON);
	glColor3ub(12, 172, 232); // Sky Blue
	glVertex2f(0, 800);
	glVertex2f(1400, 800);
	glVertex2f(1400, 400);
	glVertex2f(0, 400);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(12,172,232); // Sky Blue
	glVertex2f(0, 400);
	glVertex2f(1400, 400);
	glColor3ub(82,163,42); // Green Grass
	glVertex2f(1400, 175);
	glVertex2f(0, 175);
	glEnd();  
}


void display()
{if(mm==1){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    init();
	
    glPushMatrix();
    glScaled(0.8,0.7,1);
    home();  
    glPopMatrix();
    glFlush();
    if(i<800 || j>=450)
        i=i+1;
    if(bomb==0 && i>=800 && j<450)
        j=j+1; 
    if(bomb==1 && i>=800 && j<450)
        j=j+1;  
    if(bomb==3) 
    {
        i=0;
        j=0; 
	aa=0;ddd=0;
        q=0;
        xz=0;
	bomb=2;
	   m=0;
    }
    if(j>=450)
    {
	aa=1;
	q=q+1;
	 m=m+1;
    }
    glFlush();
}}



int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(1400,800);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("Air Strike");
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    gluOrtho2D(0,1400,0,800);
	introduction();
    glutKeyboardFunc(keyboard);
   glutDisplayFunc(display);
    cm();
   
    glutMainLoop();
}





