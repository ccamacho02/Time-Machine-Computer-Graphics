#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

class Cola {
public:
	Cola();
	void DibujarCola(int n, float x, float y, float z);
};