#ifndef DISC7SEG_H
#define	DISC7SEG_H

#include <xc.h> 

void init( void );
void disp7seg_init( void );
void disp7seg( unsigned char num );
char inc( void );
char dec( void );

#endif	
