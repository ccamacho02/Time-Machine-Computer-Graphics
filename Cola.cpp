#include "Cola.h"
#define ANGULO 70

Cola::Cola()
{
}

void Cola::DibujarCola(int n, float x, float y, float z) {
	glPushMatrix();
	glTranslatef(x, y, z);
	//Codigo de otra página
	glPushMatrix();
	glTranslatef(-0.125, 0.0, 0.0);
	glRotatef(0, 0.0, 0.0, 1.0);
	glTranslatef(0.125, 0.0, 0.0);
	glPushMatrix();
	glScalef(0.5, 0.2, 1.0);
	glutSolidCube(0.5);
	glPopMatrix();
	float curva = ANGULO;

	for (int i = 0; i < n; i++) {
		glTranslatef(0.125, 0.0, 0.0);
		glRotatef(curva, 0.0, 0.0, 1.0);
		glTranslatef(0.125, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.5, 0.2, 1.0);
		glutSolidCube(0.5);
		glPopMatrix();
		curva -= 5;
	}

	glPopMatrix();
	glPopMatrix();
}