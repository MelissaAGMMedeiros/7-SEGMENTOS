/*
 * File:   main.c
 * Author: 21193460
 *
 * Created on 18 de Fevereiro de 2022, 10:13
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "disc7seg.h"

void main(void) 
{
    char estado = 0;
    char cont = 0;
    init();
    disp7seg_init();
    
    while( 1 ) 
    {
        switch(estado)
        {
            case 0:
                disp7seg(cont);
                estado = 1;
                break;
                
            case 1:
                if (inc())
                    estado = 10;
                if (dec())
                    estado = 20;
                break; 
                
            case 10:
                ++cont;
                estado = 11;
                break;
                
            case 11:
                if (!inc())
                estado = 0;
                break;
                
            case 20:
                --cont;
                estado = 21;
                break;
                
            case 21:
                if(!dec())
                estado = 0;
                break;                
        }   
    }
}
