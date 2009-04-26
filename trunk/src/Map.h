#ifndef			__GAME_MAP_H__
#define			__GAME_MAP_H__

#include <stdio.h>
#include <string.h>
#include <GL/gl.h>
#include <GL/glu.h>

#include "tga.h"
#include "Building.h"

class Map {
 public:
	float length;
	float breadth;

	int no_of_buildings;
	Building *buildings;

	int textureID;
	char texname[256];

	int no_blocksx, no_blocksy;
	int blocksize;

	/* Texture and Render information */
	int num_textures;
	GLuint *textureIDs;

 public:
	 Map(void);
	~Map();

	void Initialize(void);
	void Destroy(void);

	int LoadFile(const char *filename = "maps/default.map");
	void Render(void);

	void Dump(void);

};

#endif				/*      __GAME_MAP_H__  */
