#ifndef IMAGE_H
#define IMAGE_H

#define WIDTH 400
#define HEIGHT 240
#define SCREEN_SIZE WIDTH * HEIGHT * 2
#define BUF_SIZE SCREEN_SIZE * 2
class Image
{
    public:
        const int SIZEIMG=BUF_SIZE;

        Image();
        virtual ~Image();

    protected:

    private:
        u16* data;
        u16 height;
        u16 width;

};
class Image3D{

public:
    Image3D(Image left,Image right);
    virtual ~Image3D();

    const Image Left;
    const Image Right;

};
#endif // IMAGE_H
