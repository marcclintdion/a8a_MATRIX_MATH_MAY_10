/*
 * ---------------- www.spacesimulator.net --------------
 *   ---- Space simulators and 3d engine tutorials ----
 *
 * Author: Damiano Vitulli <info@spacesimulator.net>
 *
 * ALL RIGHTS RESERVED
 *
 *
 * Bitmaps .bmp loader
 * 
 * File header
 *  
 */

#ifndef _LOAD_BMP_H
#define _LOAD_BMP_H


 
/**********************************************************
 *
 * VARIABLES DECLARATION
 *
 *********************************************************/

extern int num_texture;// Counter to keep track of the last loaded texture



/**********************************************************
 *
 * FUNCTIONS DECLARATION
 *
 *********************************************************/

extern int LoadBMP(char *p_filename);

#endif
