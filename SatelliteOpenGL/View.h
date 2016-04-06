//
//  View.h
//  3DPrototype
//
//  Created by Laura del Pino Díaz on 15/3/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#ifndef View_h
#define View_h

#include <stdio.h>
#include <GLUT/GLUT.h>
#include <math.h>

#endif /* View_h */

#ifndef GLOBAL_VARS_VIEW
extern float gl_ancho , gl_alto, gl_cerca, gl_lejos; //cambiar según el proyecto
extern int w_ancho, w_alto;
extern float angulo, paso;
extern int pasos_segundo;

#endif

#ifndef VIEW_PROTO
void InitGL();
void ReshapeSize(int ancho, int alto);
void Display();
void Timer(int v);
#endif