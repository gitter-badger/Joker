/**
 * @file
 * @copyright (C) 2012-2014 Phonations
 * @license http://www.gnu.org/licenses/gpl.html GPL version 2 or higher
 */

#include "PhGraphic.h"

#include "PhTools/PhDebug.h"
#include "PhGraphicImage.h"

PhGraphicImage::PhGraphicImage(QString filename, int x, int y, int w, int h)
	: PhGraphicTexturedRect(x, y, w, h), _filename(filename), _surface(NULL)
{
}

bool PhGraphicImage::init()
{
	QFileInfo info(_filename);
	_surface = IMG_Load(_filename.toStdString().c_str());
	if(_surface != NULL) {
		if(createTextureFromSurface(_surface)) {
			_originalSize.setHeight(_surface->h);
			_originalSize.setWidth(_surface->w);
			return PhGraphicTexturedRect::init();
		}
	}

	PHDEBUG << "Error loading" << _filename << ":" << SDL_GetError();
	return false;

}

void PhGraphicImage::dispose()
{
	SDL_FreeSurface(_surface);
}

QSize PhGraphicImage::originalSize() const
{
	return _originalSize;
}

void PhGraphicImage::draw()
{
	if(!_filename.isEmpty() && !this->ready())
		this->init();

	PhGraphicTexturedRect::draw();
}

void PhGraphicImage::setFilename(QString filename)
{
	_filename = filename;
}

QString PhGraphicImage::fileName()
{
	return _filename;
}
