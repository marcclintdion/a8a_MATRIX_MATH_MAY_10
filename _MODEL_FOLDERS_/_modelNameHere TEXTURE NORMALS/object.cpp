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
 */

#include <math.h>
#include "load_3ds.h"
#include "load_bmp.h"
#include "object.h"



/**********************************************************
 *
 * VARIABLES DECLARATION
 *
 *********************************************************/

obj_type object; //Now the object is generic, the cube has annoyed us a little bit, or not?



/**********************************************************
 *
 * FUNCTION ObjLoad(char *p_object_name, char *p_texture_name)
 *
 * This function loads an object and set some object's data
 *
 * Parameters: p_object_name = object name
 *			   p_texture_name = texture name
 *             p_pos_x = starting position x coordinate
 *             p_pos_y = starting position y coordinate
 *             p_pos_z = starting position z coordinate
 *             p_rot_x = starting orientation x axis
 *             p_rot_y = starting orientation y axis
 *             p_rot_z = starting orientation z axis
 *
 * Return value: (char) 1 if the object was loaded correctly, 0 otherwise
 *
 *********************************************************/

char ObjLoad(char *p_object_name, char *p_texture_name)
{
    if (Load3DS (&object,p_object_name)==0) return(0); //Object loading
    object.id_texture=LoadBMP(p_texture_name); // The Function LoadBitmap() returns the current texture ID
	ObjCalcNormals(&object); //Once we have all the object data we need to calculate all the normals of the object's vertices
	return (1); // If all is ok then return 1
}



/**********************************************************
 *
 * SUBROUTINE ObjCalcNormals(obj_type_ptr p_object)
 *
 * This function calculate all the polygons and vertices' normals of the specified object
 *
 * Input parameters: p_object = object
 *
 *********************************************************/

void ObjCalcNormals(obj_type_ptr p_object)
{
	int i;
	p3d_type l_vect1,l_vect2,l_vect3,l_vect_b1,l_vect_b2,l_normal;  //Some local vectors
	int l_connections_qty[MAX_VERTICES]; //Number of poligons around each vertex

    // Resetting vertices' normals...
	for (i=0; i<p_object->vertices_qty; i++)
	{
		p_object->normal[i].x = 0.0;
		p_object->normal[i].y = 0.0;
		p_object->normal[i].z = 0.0;
		l_connections_qty[i]=0;
	}
	
	for (i=0; i<p_object->polygons_qty; i++)
	{
        l_vect1.x = p_object->vertex[p_object->polygon[i].a].x;
        l_vect1.y = p_object->vertex[p_object->polygon[i].a].y;
        l_vect1.z = p_object->vertex[p_object->polygon[i].a].z;
        l_vect2.x = p_object->vertex[p_object->polygon[i].b].x;
        l_vect2.y = p_object->vertex[p_object->polygon[i].b].y;
        l_vect2.z = p_object->vertex[p_object->polygon[i].b].z;
        l_vect3.x = p_object->vertex[p_object->polygon[i].c].x;
        l_vect3.y = p_object->vertex[p_object->polygon[i].c].y;
        l_vect3.z = p_object->vertex[p_object->polygon[i].c].z;         
  
        // Polygon normal calculation
		VectCreate (&l_vect1, &l_vect2, &l_vect_b1); // Vector from the first vertex to the second one
        VectCreate (&l_vect1, &l_vect3, &l_vect_b2); // Vector from the first vertex to the third one
        VectDotProduct (&l_vect_b1, &l_vect_b2, &l_normal); // Dot product between the two vectors
        VectNormalize (&l_normal); //Normalizing the resultant we obtain the polygon normal

		l_connections_qty[p_object->polygon[i].a]+=1; // For each vertex shared by this polygon we increase the number of connections
		l_connections_qty[p_object->polygon[i].b]+=1;
		l_connections_qty[p_object->polygon[i].c]+=1;

		p_object->normal[p_object->polygon[i].a].x+=l_normal.x; // For each vertex shared by this polygon we add the polygon normal
		p_object->normal[p_object->polygon[i].a].y+=l_normal.y;
		p_object->normal[p_object->polygon[i].a].z+=l_normal.z;
		p_object->normal[p_object->polygon[i].b].x+=l_normal.x;
		p_object->normal[p_object->polygon[i].b].y+=l_normal.y;
		p_object->normal[p_object->polygon[i].b].z+=l_normal.z;
		p_object->normal[p_object->polygon[i].c].x+=l_normal.x;
		p_object->normal[p_object->polygon[i].c].y+=l_normal.y;
		p_object->normal[p_object->polygon[i].c].z+=l_normal.z;	
	}	
	
    for (i=0; i<p_object->vertices_qty; i++)
	{
		if (l_connections_qty[i]>0)
		{
			p_object->normal[i].x /= l_connections_qty[i]; // Let's now average the polygons' normals to obtain the vertex normal!
			p_object->normal[i].y /= l_connections_qty[i];
			p_object->normal[i].z /= l_connections_qty[i];
		}
	}
}



