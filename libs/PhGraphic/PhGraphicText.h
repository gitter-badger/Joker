/**
* Copyright (C) 2012-2013 Phonations
* License: http://www.gnu.org/licenses/gpl.html GPL version 2 or higher
*/

#ifndef PHGRAPHICTEXT_H
#define PHGRAPHICTEXT_H

#include <QDebug>


#include "PhGraphicTexturedRect.h"
#include "PhString.h"
#include "PhGraphicObject.h"


class PhGraphicText : public PhGraphicTexturedRect {
public:
//    GLuint createTextureFromSurface(SDL_Surface * surface);
//    GLuint createSurfaceFromText(PhString text);

	PhGraphicText();
	PhGraphicText(PhFont* font, QString content, int x, int y, int z, int w, int h, PhColor color);
    /**
     * @brief Draw the text on screen
     *
     */
	void draw();
    /**
     * @brief init
     * currently unused
     */
	bool init();
    /**
     * @brief dispose
     * currently unused
     */
    void dispose();

    /**
     * @brief setContent
     * @param content
     * Set the PhGraphicText content
     */
	void setContent(QString content);
    /**
     * @brief setFont
     * @param font
     * Set the PhGraphicText font
     */
    void setFont(PhFont * font);

    /**
     * @brief getContent
     * @return _content
     */
	QString getContent();
    /**
     * @brief getFont
     * @return _font
     */
    PhFont * getFont();



private:
    /**
     * @brief _content
     */
	QString _content;
    /**
     * @brief _font
     */
    PhFont *_font;


};

#endif // PHGRAPHICTEXT_H
