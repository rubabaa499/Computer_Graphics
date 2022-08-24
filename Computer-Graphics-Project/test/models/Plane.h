#include <GL/glut.h>

class Plane
{
private:
    GLfloat planePosition = -0.7f;
    GLfloat planeSpeed = 0.015f;

    void drawPlaneStructure()
    {
        glBegin(GL_POLYGON);
        glColor3ub(46, 134, 193);
        glVertex2f(0.0f, 0.72f);
        glVertex2f(0.3f, 0.72f);
        glVertex2f(0.31f, 0.715f);
        glVertex2f(0.32f, 0.705f);
        glVertex2f(0.33f, 0.695f);
        glVertex2f(0.34f, 0.683f);
        glVertex2f(0.36f, 0.67f);
        glVertex2f(0.37f, 0.66f);
        glVertex2f(0.376f, 0.64f);
        glVertex2f(0.37f, 0.63f);
        glColor3ub(46, 134, 193);
        glVertex2f(0.3f, 0.605f);
        glVertex2f(0.07f, 0.6f);
        glVertex2f(0.05f, 0.605f);
        glVertex2f(0.03f, 0.610f);
        glVertex2f(0.0f, 0.615f);
        glVertex2f(-0.02f, 0.620f);
        glVertex2f(-0.05f, 0.628f);
        glVertex2f(-0.075f, 0.636f);
        glVertex2f(-0.085f, 0.645f);
        glVertex2f(-0.092f, 0.645f);
        glVertex2f(-0.1f, 0.658f);
        glVertex2f(-0.13f, 0.665f);
        glVertex2f(-0.11f, 0.680f);
        glVertex2f(-0.1f, 0.688f);
        glVertex2f(-0.05f, 0.7f);
        glVertex2f(-0.04f, 0.71f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(46, 134, 193);
        glVertex2f(0.0f, 0.72f);
        glVertex2f(0.3f, 0.72f);
        glVertex2f(0.31f, 0.715f);
        glVertex2f(0.32f, 0.705f);
        glVertex2f(0.33f, 0.695f);
        glVertex2f(0.34f, 0.683f);
        glVertex2f(0.36f, 0.67f);
        glVertex2f(0.37f, 0.66f);
        glVertex2f(0.376f, 0.64f);
        glVertex2f(0.37f, 0.63f);
        glColor3ub(46, 134, 193);
        glVertex2f(0.3f, 0.605f);
        glVertex2f(0.07f, 0.6f);
        glVertex2f(0.05f, 0.605f);
        glVertex2f(0.03f, 0.610f);
        glVertex2f(0.0f, 0.615f);
        glVertex2f(-0.02f, 0.620f);
        glVertex2f(-0.05f, 0.628f);
        glVertex2f(-0.075f, 0.636f);
        glVertex2f(-0.085f, 0.645f);
        glVertex2f(-0.092f, 0.645f);
        glVertex2f(-0.1f, 0.658f);
        glVertex2f(-0.13f, 0.665f);
        glVertex2f(-0.11f, 0.680f);
        glVertex2f(-0.1f, 0.688f);
        glVertex2f(-0.05f, 0.7f);
        glVertex2f(-0.04f, 0.71f);
        glEnd();
    }

    void drawBackStand()
    {
        glBegin(GL_POLYGON);
        glColor3ub(230, 138, 0);
        glVertex2f(-0.13f, 0.68f);
        glColor3ub(255, 194, 102);
        glVertex2f(-0.045f, 0.680f);
        glVertex2f(-0.04f, 0.67f);
        glVertex2f(-0.045f, 0.66f);
        glVertex2f(-0.13f, 0.66f);
        glVertex2f(-0.135f, 0.67f);
        glEnd();
    }

    void drawBackRudder()
    {
        glBegin(GL_POLYGON);
        glColor3ub(255, 133, 102);
        glVertex2f(-0.12f, 0.83f);
        glVertex2f(-0.1f, 0.828f);
        glVertex2f(-0.096f, 0.825f);
        glVertex2f(-0.086f, 0.820f);
        glVertex2f(-0.074f, 0.810f);
        glVertex2f(-0.045f, 0.74f);
        glVertex2f(-0.043f, 0.720f);
        glVertex2f(0.01f, 0.72f);
        glColor3ub(255, 184, 77);
        glVertex2f(-0.085f, 0.693f);
        glEnd();
    }

    void drawBackRightWing()
    {
        glBegin(GL_POLYGON);
        glColor3ub(255, 133, 102);
        glVertex2f(-0.12f, 0.83f);
        glVertex2f(-0.1f, 0.828f);
        glVertex2f(-0.096f, 0.825f);
        glVertex2f(-0.086f, 0.820f);
        glVertex2f(-0.074f, 0.810f);
        glVertex2f(-0.045f, 0.74f);
        glVertex2f(-0.043f, 0.720f);
        glVertex2f(0.01f, 0.72f);
        glColor3ub(255, 184, 77);
        glVertex2f(-0.085f, 0.693f);
        glEnd();
    }

    void drawRightWing()
    {
        glBegin(GL_QUADS);
        glColor3ub(255, 204, 153);
        glVertex2f(0.05f, 0.55f);
        glVertex2f(0.0f, 0.55f);
        glColor3ub(255, 166, 77);
        glVertex2f(0.1f, 0.62f);
        glVertex2f(0.2f, 0.62f);
        glEnd();
    }

    void drawLeftWing()
    {
        glBegin(GL_QUADS);
        glColor3ub(255, 204, 153);
        glVertex2f(-0.05f, 0.55f);
        glVertex2f(-0.0f, 0.55f);
        glColor3ub(255, 166, 77);
        glVertex2f(-0.1f, 0.62f);
        glVertex2f(-0.2f, 0.62f);
        glEnd();
    }

    void drawRightWingTop()
    {
        glBegin(GL_QUADS);
        glColor3ub(255, 204, 153);
        glVertex2f(0.05f, 0.55f);
        glVertex2f(0.0f, 0.55f);
        glColor3ub(255, 166, 77);
        glVertex2f(0.1f, 0.62f);
        glVertex2f(0.2f, 0.62f);
        glEnd();
    }

    void drawLeftWingTop()
    {
        glBegin(GL_QUADS);
        glColor3ub(255, 204, 153);
        glVertex2f(-0.05f, 0.55f);
        glVertex2f(-0.0f, 0.55f);
        glColor3ub(255, 166, 77);
        glVertex2f(-0.1f, 0.62f);
        glVertex2f(-0.2f, 0.62f);
        glEnd();
    }

    void drawDoor()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(-0.01f, 0.68f);
        glVertex2f(0.0f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.0f, 0.64f);
        glVertex2f(-0.01f, 0.64f);
        glEnd();
    }

    void drawAllWindows()
    {
        this->sideWindow1();
        this->sideWindow2();
        this->sideWindow3();
        this->sideWindow4();
        this->sideWindow5();
        this->sideWindow6();
        this->sideWindow7();
        this->sideWindow8();
        this->sideWindow9();
        this->sideWindow10();
        this->sideWindow11();
        this->sideWindow12();
    }

    void sideWindow1()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.03f, 0.68f);
        glVertex2f(0.02f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.02f, 0.66f);
        glVertex2f(0.03f, 0.66f);
        glEnd();
    }

    void sideWindow2()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.05f, 0.68f);
        glVertex2f(0.04f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.04f, 0.66f);
        glVertex2f(0.05f, 0.66f);
        glEnd();
    }

    void sideWindow3()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.07f, 0.68f);
        glVertex2f(0.06f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.06f, 0.66f);
        glVertex2f(0.07f, 0.66f);
        glEnd();
    }

    void sideWindow4()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.09f, 0.68f);
        glVertex2f(0.08f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.08f, 0.66f);
        glVertex2f(0.09f, 0.66f);
        glEnd();
    }

    void sideWindow5()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.11f, 0.68f);
        glVertex2f(0.10f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.10f, 0.66f);
        glVertex2f(0.11f, 0.66f);
        glEnd();
    }

    void sideWindow6()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.13f, 0.68f);
        glVertex2f(0.12f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.12f, 0.66f);
        glVertex2f(0.13f, 0.66f);
        glEnd();
    }

    void sideWindow7()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.15f, 0.68f);
        glVertex2f(0.14f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.14f, 0.66f);
        glVertex2f(0.15f, 0.66f);
        glEnd();
    }

    void sideWindow8()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.17f, 0.68f);
        glVertex2f(0.16f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.16f, 0.66f);
        glVertex2f(0.17f, 0.66f);
        glEnd();
    }

    void sideWindow9()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.19f, 0.68f);
        glVertex2f(0.18f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.18f, 0.66f);
        glVertex2f(0.19f, 0.66f);
        glEnd();
    }

    void sideWindow10()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.21f, 0.68f);
        glVertex2f(0.20f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.20f, 0.66f);
        glVertex2f(0.21f, 0.66f);
        glEnd();
    }

    void sideWindow11()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.23f, 0.68f);
        glVertex2f(0.22f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.22f, 0.66f);
        glVertex2f(0.23f, 0.66f);
        glEnd();
    }

    void sideWindow12()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.25f, 0.68f);
        glVertex2f(0.24f, 0.68f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.24f, 0.66f);
        glVertex2f(0.25f, 0.66f);
        glEnd();
    }

    void drawFrontWindow()
    {
        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.34f, 0.68f);
        glVertex2f(0.33f, 0.67f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.31f, 0.694f);
        glVertex2f(0.32f, 0.705f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(173, 173, 133);
        glVertex2f(0.327f, 0.670f);
        glVertex2f(0.31f, 0.662f);
        glColor3ub(194, 194, 163);
        glVertex2f(0.295f, 0.69f);
        glVertex2f(0.309f, 0.693f);
        glEnd();
    }

public:
    GLfloat getPlanePosition()
    {
        return this->planePosition;
    }

    void setPlanePosition(GLfloat planePosition)
    {
        this->planePosition = planePosition;
    }

    GLfloat getPlaneSpeed()
    {
        return this->planeSpeed;
    }

    void setPlaneSpeed(GLfloat planeSpeed)
    {
        this->planeSpeed = planeSpeed;
    }

    void drawPlane()
    {
        glPushMatrix();
        glTranslatef(getPlanePosition(), 0.0f, 0.0f);

        this->drawPlaneStructure();
        this->drawBackStand();
        this->drawBackRudder();
        this->drawRightWing();
        this->drawBackRightWing();
        this->drawAllWindows();
        this->drawFrontWindow();

        glPopMatrix();
        glFlush();
    }
};