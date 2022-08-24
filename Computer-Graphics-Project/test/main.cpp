#include <cstdio>
#ifdef _WIN32
#include <windows.h>
#endif

#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
#include "models/Plane.h"

#define PI 3.14159265358979323846
Plane plane;

//----dayRiver----
void dayRiver()
{
	// GL_QUADS
	glBegin(GL_QUADS);
	glColor3ub(214, 234, 248);
	glVertex2f(-1.0f, -0.3f); // down left
	glColor3ub(36, 113, 163);
	glVertex2f(-1.0f, 0.2f); // top left
	glColor3ub(36, 113, 163);
	glVertex2f(1.0f, 0.2f); // top right
	glColor3ub(214, 234, 248);
	glVertex2f(1.0f, -0.08f); // down right

	glEnd();
}

void daySky()
{
	// GL_QUADS
	glBegin(GL_QUADS);
	glColor3ub(84, 153, 199); // up left corner
	glVertex2f(-1.1f, 1.0f);
	glColor3ub(127, 179, 213); // up right corner
	glVertex2f(1.1f, 1.0f);
	glColor3ub(251, 252, 252); // color mixing
	glVertex2f(1.1f, -0.1f);
	glColor3ub(251, 252, 252); // color mixing
	glVertex2f(-1.1f, -0.4f);

	glEnd();
}
void dayBeach()
{
	// GL_QUADS
	glBegin(GL_QUADS);
	glColor3ub(244, 236, 252);
	glVertex2f(-1.0f, -0.3f); // top left
	glColor3ub(214, 234, 248);
	glVertex2f(1.0f, -0.08f); // top right
	glColor3ub(246, 221, 204);
	glVertex2f(1.0f, -1.0f); // down right
	glColor3ub(246, 221, 204);
	glVertex2f(-1.0f, -1.0f); // down left

	glEnd();
}
GLfloat positionCloud1 = 0.4f;
GLfloat speed = 0.009f; // declared globally for every movable object... ... ...SPEED... ... ...!!! !!! !!!

void eveningSky()
{
	// GL_QUADS
	glBegin(GL_QUADS);
	glColor4f(0.8f, 0.7f, 0.5f, 1.0f);
	glVertex2f(-1.1f, 1.0f);
	glColor3ub(235, 222, 240); // color mixing
	glVertex2f(1.1f, 1.0f);
	glColor3ub(250, 215, 160); // color mixing
	glVertex2f(1.1f, -0.1f);
	glColor3ub(215, 189, 226); // color mixing
	glVertex2f(-1.1f, -0.4f);
	glEnd();
}
void rainySky(){
    //GL_QUADS
    glBegin(GL_QUADS);
    glColor3ub(242, 243, 244);
    glVertex2f(-1.1f, 1.0f);
        glColor3ub(178, 186, 187); //color mixing
	glVertex2f(1.1f, 1.0f);
        glColor3ub(113, 125, 126); //color mixing
	glVertex2f(1.1f, -0.1f);
        glColor3ub(97, 106, 107); //color mixing
	glVertex2f(-1.1f, -0.4f);

	glEnd();
}

void updateCloud1(int value)
{

	if (positionCloud1 < -1.0)
		positionCloud1 = 1.0f;

	positionCloud1 -= speed;

	glutPostRedisplay();

	glutTimerFunc(100, updateCloud1, 0);
}
void cloud1()
{

	glPushMatrix();
	glTranslatef(-positionCloud1, 0.0f, 0.0f);

	// circle-1
	int jeight;
	GLfloat p8 = .34f;
	GLfloat q8 = .8f;
	GLfloat radius8 = .08f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p8, q8); // center of circle
	for (jeight = 0; jeight <= triangleAmount8; jeight++)
	{
		glVertex2f(
			p8 + (radius8 * cos(jeight * twicePi8 / triangleAmount8)),
			q8 + (radius8 * sin(jeight * twicePi8 / triangleAmount8)));
	}
	glEnd();

	// circle-2
	int jnine;

	GLfloat p9 = .41f;
	GLfloat q9 = .87f;
	GLfloat radius9 = .07f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p9, q9); // center of circle
	for (jnine = 0; jnine <= triangleAmount9; jnine++)
	{
		glVertex2f(
			p9 + (radius9 * cos(jnine * twicePi9 / triangleAmount9)),
			q9 + (radius9 * sin(jnine * twicePi9 / triangleAmount9)));
	}
	glEnd();

	// circle-3
	int jten;

	GLfloat p10 = .30f;
	GLfloat q10 = .87f;
	GLfloat radius10 = .08f;
	int triangleAmount10 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p10, q10); // center of circle
	for (jten = 0; jten <= triangleAmount10; jten++)
	{
		glVertex2f(
			p10 + (radius10 * cos(jten * twicePi10 / triangleAmount10)),
			q10 + (radius10 * sin(jten * twicePi10 / triangleAmount10)));
	}
	glEnd();

	// circle-4
	int jeleven;

	GLfloat p11 = .45f;
	GLfloat q11 = .8f;
	GLfloat radius11 = .08f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p11, q11); // center of circle
	for (jeleven = 0; jeleven <= triangleAmount11; jeleven++)
	{
		glVertex2f(
			p11 + (radius11 * cos(jeleven * twicePi11 / triangleAmount11)),
			q11 + (radius11 * sin(jeleven * twicePi11 / triangleAmount11)));
	}
	glEnd();

	glPopMatrix();

	glFlush();
}

GLfloat positionCloud2 = 0.5f;
// GLfloat speed = 0.1f;

void updateCloud2(int value)
{

	if (positionCloud2 < -1.5)
		positionCloud2 = 1.0f;

	positionCloud2 -= speed;

	glutPostRedisplay();

	glutTimerFunc(100, updateCloud2, 0);
}

void cloud2()
{

	glPushMatrix();
	glTranslatef(-positionCloud2, 0.0f, 0.0f);

	// circle-1
	int j;

	GLfloat p = -.5f;
	GLfloat q = .77f;
	GLfloat radius1 = .09f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p, q); // center of circle
	for (j = 0; j <= triangleAmount1; j++)
	{
		glVertex2f(
			p + (radius1 * cos(j * twicePi1 / triangleAmount1)),
			q + (radius1 * sin(j * twicePi1 / triangleAmount1)));
	}
	glEnd();

	// circle-2
	int jj;

	GLfloat p2 = -.4f;
	GLfloat q2 = .77f;
	GLfloat radius2 = .09f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p2, q2); // center of circle
	for (jj = 0; jj <= triangleAmount1; jj++)
	{
		glVertex2f(
			p2 + (radius2 * cos(jj * twicePi2 / triangleAmount2)),
			q2 + (radius2 * sin(jj * twicePi2 / triangleAmount2)));
	}
	glEnd();

	// circle-3
	int jjj;

	GLfloat p3 = -.3f;
	GLfloat q3 = .77f;
	GLfloat radius3 = .09f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p3, q3); // center of circle
	for (jjj = 0; jjj <= triangleAmount1; jjj++)
	{
		glVertex2f(
			p3 + (radius3 * cos(jjj * twicePi3 / triangleAmount3)),
			q3 + (radius3 * sin(jjj * twicePi3 / triangleAmount3)));
	}
	glEnd();

	// circle-4
	int jfour;

	GLfloat p4 = -.2f;
	GLfloat q4 = .77f;
	GLfloat radius4 = .09f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p4, q4); // center of circle
	for (jfour = 0; jfour <= triangleAmount4; jfour++)
	{
		glVertex2f(
			p4 + (radius4 * cos(jfour * twicePi4 / triangleAmount4)),
			q4 + (radius4 * sin(jfour * twicePi4 / triangleAmount4)));
	}
	glEnd();

	// circle-5
	int jfive;

	GLfloat p5 = -.25f;
	GLfloat q5 = .82f;
	GLfloat radius5 = .09f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p5, q5); // center of circle
	for (jfive = 0; jfive <= triangleAmount5; jfive++)
	{
		glVertex2f(
			p5 + (radius5 * cos(jfive * twicePi5 / triangleAmount5)),
			q5 + (radius5 * sin(jfive * twicePi5 / triangleAmount5)));
	}
	glEnd();

	// circle-6
	int jsix;

	GLfloat p6 = -.35f;
	GLfloat q6 = .86f;
	GLfloat radius6 = .09f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p6, q6); // center of circle
	for (jsix = 0; jsix <= triangleAmount6; jsix++)
	{
		glVertex2f(
			p6 + (radius6 * cos(jsix * twicePi6 / triangleAmount6)),
			q6 + (radius6 * sin(jsix * twicePi6 / triangleAmount6)));
	}
	glEnd();

	// circle-7
	int jsvn;

	GLfloat p7 = -.45f;
	GLfloat q7 = .82f;
	GLfloat radius7 = .09f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(253, 254, 254);
	glVertex2f(p7, q7); // center of circle
	for (jsvn = 0; jsvn <= triangleAmount7; jsvn++)
	{
		glVertex2f(
			p7 + (radius6 * cos(jsvn * twicePi7 / triangleAmount7)),
			q7 + (radius6 * sin(jsvn * twicePi7 / triangleAmount7)));
	}
	glEnd();

	glPopMatrix();

	glFlush();
}
GLfloat position = 0.0f;
// GLfloat speed = 0.009f;

void update(int value)
{

	if (position < -1.0)
		position = 1.0f;

	position -= speed;

	glutPostRedisplay();

	glutTimerFunc(100, update, 0);
}
void boat1()
{

	glPushMatrix();
	glTranslatef(position, 0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(184, 134, 11);

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.25f, 0.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(205, 92, 92);

	glVertex2f(0.1f, 0.2f);
	glVertex2f(0.2f, 0.04f);
	glVertex2f(0.1f, 0.04f);

	glEnd();
	glPopMatrix();

	glFlush();
}

GLfloat position1 = 0.0f;
// GLfloat speed = 0.1f;
void update1(int value)
{

	if (position1 < -1.0)
		position1 = 1.0f;

	position1 -= speed;

	glutPostRedisplay();

	glutTimerFunc(100, update1, 0);
}

void boat2()
{
	glPushMatrix();
	glTranslatef(position1, 0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);

	glVertex2f(0.15f, 0.15f);
	glVertex2f(0.45f, 0.15f);
	glVertex2f(0.4f, 0.05f);
	glVertex2f(0.2f, 0.05f);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);
	glVertex2f(0.3f, 0.15f);
	glVertex2f(0.3f, 0.35f);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);
	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.15f, 0.15f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(205, 92, 92);

	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.3f, 0.2f);

	glEnd();

	glPopMatrix();

	glFlush();
}
void Bigtree()
{

	glBegin(GL_QUADS);
	glColor3ub(139, 71, 38);

	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-1.0f, -0.8f);
	glVertex2f(-0.95f, 0.3f);
	glVertex2f(-0.9f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.6f, -0.4f);
	glVertex2f(-0.925f, 0.1f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.4f, -0.3f);
	glVertex2f(-0.925f, 0.1f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.925f, 0.1f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.4f, 0.1f);
	glVertex2f(-0.925f, 0.1f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.4f, 0.5f);
	glVertex2f(-0.925f, 0.0f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.6f, 0.8f);
	glVertex2f(-0.925f, 0.0f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.8f, 0.9f);
	glVertex2f(-0.95f, 0.3f);
	glVertex2f(-0.925f, 0.1f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-1.0f, 0.9f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(-0.925f, 0.1f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(46, 139, 87);

	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-1.0f, 0.4f);
	glVertex2f(-0.925f, 0.3f);
	glVertex2f(-0.925f, 0.0f);

	glEnd();
}
<<<<<<< HEAD

GLfloat positionBellon = 0.0f;
void updateBellon(int value) {

    if(positionBellon >1.0)
        positionBellon = -1.0f;

    positionBellon += speed;

	glutPostRedisplay();


	glutTimerFunc(300, updateBellon, 0);
}
void hotBellon(){
    glPushMatrix();
     glTranslatef(positionBellon,0.0f, 0.0f);

glColor3ub(205, 92 ,92);
	int j;
	GLfloat x=-0.3f; GLfloat y=0.7f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255 ,255 ,0);

	glVertex2f(-0.35f,  0.35f);
	glVertex2f(-0.3f, 0.425f);
	glVertex2f(-0.25f, 0.35f);

	glEnd();

			//GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(139, 69 ,19);

	glVertex2f(-0.35f, 0.3f);
	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.2f, 0.4f);
	glVertex2f(-0.25f, 0.3f);

	glEnd();

	    glBegin(GL_TRIANGLES);
	glColor3ub(205,92,92);

	glVertex2f(-0.4f,  0.675f);
	glVertex2f(-0.2f, 0.675f);
	glVertex2f(-0.3f, 0.5f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(-0.4f, 0.7f);
	glVertex2f(-0.35f, 0.3f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(-0.2f, 0.7f);
	glVertex2f(-0.25f, 0.3f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(-0.3f, 0.7f);
	glVertex2f(-0.3f, 0.3f);

	glEnd();

	glPopMatrix();



   glFlush();


}



void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
=======
void init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
>>>>>>> a2fdc0fe138688ba035d7fcb4a51453762b8fd9e
}

void chair()
{

	// Chair Umbrella
	glBegin(GL_TRIANGLES);
	glColor3ub(188, 143, 143);
	glVertex2f(1.0f, -0.2f);
	glVertex2f(0.4f, -0.2);
	glVertex2f(0.7f, 0.1f);
	glEnd();

	// Chair Umbrella Stand
	glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);
	glVertex2f(0.715f, -0.7f);
	glVertex2f(0.685f, -0.7f);
	glVertex2f(0.685f, -0.2f);
	glVertex2f(0.715f, -0.2f);
	glEnd();

	//----------------chair------------
	// sit
	glBegin(GL_QUADS);
	glColor3ub(205, 186, 150);
	glVertex2f(0.65f, -0.5f);
	glVertex2f(0.4f, -0.5f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.6f, -0.55f);
	glEnd();
	// sit left label
	glBegin(GL_QUADS);
	glColor3ub(118, 215, 196);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.6f, -0.55f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.35f, -0.58);
	glEnd();
	// sit back label
	glBegin(GL_QUADS);
	glColor3ub(118, 215, 196);
	glVertex2f(0.65f, -0.50f);
	glVertex2f(0.65f, -0.53f);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.6f, -0.55f);
	glEnd();
	// chair relaxer
	glBegin(GL_QUADS);
	glColor3ub(118, 215, 196);
	glVertex2f(0.65f, -0.53f);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.63f, -0.48);
	glVertex2f(0.68f, -0.44);
	glEnd();

	// chair legs - left front
	glBegin(GL_QUADS);
	glColor3ub(118, 215, 196);
	glVertex2f(0.35f, -0.58);
	glVertex2f(0.37f, -0.58f);
	glVertex2f(0.37f, -0.65f);
	glVertex2f(0.35f, -0.65);
	glEnd();
	// chair legs - right front
	glBegin(GL_QUADS);
	glColor3ub(118, 215, 196);
	glVertex2f(0.4f, -0.58);
	glVertex2f(0.42f, -0.58f);
	glVertex2f(0.42f, -0.62f);
	glVertex2f(0.4f, -0.62);
	glEnd();
	// chair legs - right back
	glBegin(GL_QUADS);
	glColor3ub(118, 215, 196);
	glVertex2f(0.645f, -0.52f);
	glVertex2f(0.645f, -0.6f);
	glVertex2f(0.625f, -0.6f);
	glVertex2f(0.625f, -0.52);
	glEnd();
	// chair legs - left back
	glBegin(GL_QUADS);
	glColor3ub(118, 215, 196);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.6f, -0.65f);
	glVertex2f(0.58f, -0.65f);
	glVertex2f(0.58f, -0.58);
	glEnd();
}

// Plane Utils
void updatePlanePosition(int value)
{

	if (plane.getPlanePosition() > 1.4)
		plane.setPlanePosition(-1.0f);

	plane.setPlanePosition(plane.getPlanePosition() + plane.getPlaneSpeed());

	glutPostRedisplay();

	glutTimerFunc(100, updatePlanePosition, 0);
}
//---------calling function-----------
void day()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);		  // Clear the color buffer (background)

	// fornt();
	daySky();

	// sun
	glColor3ub(245, 176, 65);
	int j;
	GLfloat x = -0.8f;
	GLfloat y = 0.9f;
	GLfloat radius = .1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	// GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x, y); // center of circle
	for (j = 0; j <= triangleAmount + 1; j++)
	{
		glVertex2f(
			x + (radius * cos(j * twicePi / triangleAmount)),
			y + (radius * sin(j * twicePi / triangleAmount)));
		glColor3ub(245, 249, 10);
	}
	glEnd();
	plane.drawPlane();
	cloud1();
	cloud2();
	dayRiver();
	dayBeach();
	boat1();
	boat2();
	chair();
	Bigtree();
	glFlush(); // Render now
}

void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	{
		//----------------multiple view------------
	case 'd':
		glutDisplayFunc(day);

		glutPostRedisplay();

		break;

		//-----speed control----

	case 'a': //--------stop----------
		speed = 0.0f;

		break;
	case 's': //--------start-------------
		speed = 0.01f;

		break;
		glutPostRedisplay();
	}
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(900, 600); // Set the window's initial width & height
	glutInitWindowPosition(50, 50);

	glutCreateWindow("Beach Senario ");
	glutDisplayFunc(day);
	init();
	glutKeyboardFunc(handleKeypress);
	glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update1, 0);
	glutTimerFunc(100, updatePlanePosition, 0);

	glutTimerFunc(100, updateCloud1, 0);
	glutTimerFunc(100, updateCloud2, 0);

<<<<<<< HEAD


    glutTimerFunc(100, updateCloud1, 0);
    glutTimerFunc(100, updateCloud2, 0);
    glutTimerFunc(100, updateRain, 0);
    glutTimerFunc(100, updateBellon, 0);

=======
>>>>>>> a2fdc0fe138688ba035d7fcb4a51453762b8fd9e
	glutMainLoop();
	return 0;
}
