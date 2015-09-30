/*
 * ---------------- www.spacesimulator.net --------------
 *   ---- Space simulators and 3d engine tutorials ----
 *
 * Author: Damiano Vitulli <info@spacesimulator.net>
 *
 * ALL RIGHTS RESERVED
 *
 *
 * Object functions
 *  
 * File header
 *  
 */

#ifndef _OBJECT_H
#define _OBJECT_H

#include "mat_vect.h"
//#include "mat_matr.h"

#define MAX_VERTICES 200000 // Max number of vertices (for each object)
#define MAX_POLYGONS 200000 // Max number of polygons (for each object)


/**********************************************************
 *
 * TYPES DECLARATION
 *
 *********************************************************/

// Our vertex type
typedef struct{
    float x,y,z;
}vertex_type;

// The polygon (triangle), 3 numbers that aim 3 vertices
typedef struct{
    int a,b,c;
}polygon_type;

// The mapcoord type, 2 texture coordinates for each vertex
typedef struct{
    float u,v;
}mapcoord_type;

// The object type
typedef struct {

	char name[20]; // Name of the object
    
	int vertices_qty; // Number of vertices
    int polygons_qty; // Number of polygons

    vertex_type vertex[MAX_VERTICES]; // Array of vertices
    vertex_type normal[MAX_VERTICES]; // Array of the vertices' normals
    polygon_type polygon[MAX_POLYGONS]; // Array of polygons (numbers that point to the vertices' list)
    mapcoord_type mapcoord[MAX_VERTICES]; // Array of U,V coordinates for texture mapping

    int id_texture; // Number of the texture 

} obj_type, *obj_type_ptr;



/**********************************************************
 *
 * VARIABLES DECLARATION
 *
 *********************************************************/

extern obj_type object;



/**********************************************************
 *
 * FUNCTIONS DECLARATION
 *
 *********************************************************/

extern char ObjLoad(char *p_object_name, char *p_texture_name);
extern void ObjCalcNormals(obj_type_ptr p_object);

#endif
