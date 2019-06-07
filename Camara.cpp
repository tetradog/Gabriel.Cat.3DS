#include "Camara.h"

Camara::Camara()
{
    //ctor
    this.Inicializada=false;
}

Camara::~Camara()
{
    //dtor
    //la apago
    Stop();

}
void Start(){

    if(!this.Inicializada)
    {
        //enciendo
        this.Inicializada=true;
    }
}
void Stop(){

    if(this.Inicializada)
    {
        //apago
        this.Inicializada=false;
    }

}
Image TakePicture()
{
    bool estaInicializada=this.Inicializada;
    Image img;

    if(!Camara::haciendoFoto3d)
        gfxSet3D(false);
    Start();
    //hago una foto con la camara especificada
    switch(this.camId)
    {
        case Camara::LEFT:
            img=new Image(gfxGetFramebuffer(GFX_TOP, GFX_LEFT, NULL, NULL),WIDTH,HEIGHT);
            break;
        case Camara::RIGHT:
            img=new Image(gfxGetFramebuffer(GFX_TOP, GFX_RIGHT, NULL, NULL),WIDTH,HEIGHT);
            break;
        case Camara::FRONT:
            img=new Image(gfxGetFramebuffer(GFX_TOP, GFX_FRONT, NULL, NULL),WIDTH,HEIGHT);
            break;
    }
    //hago sonido
    if(Sound)
    {
        Camara::MakeSnapSound();
    }

    if(!estaInicializada)
        Stop();

    return img;

}
static Image3D Camara::TakePicture3D()
{
    Image3D img;
    bool soundAux=Sound;

    Sound=false;
    Camara::haciendoFoto3d=true;
    gfxSet3D(true);
    img= new Image3D(Left.TakePicture(),Right.TakePicture());
    Camara::haciendoFoto3d=false;
    if(soundAux)
    {
        Sound=true;
        //hacer sonido
         Camara::MakeSnapSound();
    }
    return img;
}
static void Camara::MakeSnapSound(){

}
