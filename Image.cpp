#include "Image.h"

Image::Image()
{
    //ctor
    data=malloc(SIZEIMG);
}

Image::~Image()
{
    //dtor
    delete data;
}

Image3D::Image3D(Image left,Image right)
{
    Left=left;
    Right=right;
}
Image3D::~Image3D()
{
    delete Left;
    delete Right;

}
