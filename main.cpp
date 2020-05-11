// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<GL/glut.h>
#include<GL/freeglut.h>
void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);

	gluOrtho2D(-600, 600, -600, 600);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 1.0, 0.0);
	{	int i;
	for (i = 0; i < 10; i++)
	{

		glTranslatef(40 + (i * 2), 10, 0.0);

		glBegin(GL_LINE_LOOP);
		glVertex2f(0, 30);//
		glVertex2f(5, 4);
		glVertex2f(30, 10);
		glVertex2f(10, -10);
		glVertex2f(20, -28);//
		glVertex2f(1, -14);
		glVertex2f(-20, -28);
		glVertex2f(-10, -10);
		glVertex2f(-30, 10);//
		glVertex2f(-5, 4);


		glEnd();
	}
	glutSwapBuffers();
	}
}
void main()
{
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Home With OpenGl");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
