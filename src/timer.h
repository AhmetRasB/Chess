
 
 
 

#ifndef _TIMERS_H_
#define _TIMERS_H_

// the variables used by the timers
volatile int frame_count;
volatile int fps;
volatile int logic_count;
volatile int lps;
volatile int cycle_count;
volatile int game_count;


// functions
int install_timers();
void fps_counter(void);
void cycle_counter(void);

#endif