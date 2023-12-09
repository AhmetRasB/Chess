
 
 
 
#ifndef _PARTICLE_H_
#define _PARTICLE_H_

#include "allegro.h"
#include "map.h"


// maximum number of particles at anytime
#define MAX_PARTICLES	256


// the particle struct
typedef struct {
	double x, y;
	double dx, dy;
	int color;
	int life;
	int count;
	int bmp;
} Tparticle;


// the particles themselves
Tparticle particle[MAX_PARTICLES];

// functions
void set_datafile(DATAFILE *d);
void reset_particles(Tparticle *p, int max);
Tparticle *get_free_particle(Tparticle *p, int max);
void set_particle(Tparticle *p, int x, int y, double dx, double dy, int color, int life, int bmp);
void draw_particle(BITMAP *bmp, Tparticle *p, int ox, int oy);
void update_particle(Tparticle *p);
void update_particle_with_map(Tparticle *p, Tmap *m);
void create_burst(Tparticle *ps, int x, int y, int spread, int num, int life, int bmp);

#endif