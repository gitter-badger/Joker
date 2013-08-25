/**
* Copyright (C) 2012-2013 Phonations
* License: http://www.gnu.org/licenses/gpl.html GPL version 2 or higher
*/

#ifndef PHGRAPHICSOLIDSQUARE_H
#define PHGRAPHICSOLIDSQUARE_H

#include "PhGraphicRect.h"
#include <glu.h>

class PhGraphicSolidRect : public PhGraphicRect
{
public:

	PhGraphicSolidRect(int x = 0, int y =0, int w = 0, int h = 0, int z = 0, QColor *color = new QColor());

	bool init();

	void dispose();

	void draw();

};

#endif // PHGRAPHICSOLIDSQUARE_H
