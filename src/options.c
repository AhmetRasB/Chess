
 

#include <stdio.h>
#include "options.h"


// saves the data structure to disk
void save_options(Toptions *o, PACKFILE *fp) {
	pack_fwrite(o, sizeof(Toptions), fp);
}

// loads the data structure from disk
void load_options(Toptions *o, PACKFILE *fp) {
	pack_fread(o, sizeof(Toptions), fp);
}

// resets all data
void reset_options(Toptions *o) {
	int i;

	o->use_vsync = 0;
	o->max_levels = 0;
	
	for(i = 0; i < MAX_LEVELS; i ++) {
		o->cherries[i] = 0;
		o->stars[i] = 0;
	}
}
