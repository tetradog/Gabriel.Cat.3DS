#ifndef CAMARA_H
#define CAMARA_H


class Camara
{
    public:
        static Camera Left=new Camera(LEFT);
        static Camera Right=new Camera(RIGHT);
        static Camera Front=new Camera(FRONT);

        static bool Sound=false;

        virtual ~Camara();

        void Start();
        void Stop();
        Image TakePicture();

        static Image3D TakePicture3D();
        static void MakeSnapSound();

    private:
        const int RIGHT=1;
        const int LEFT=2;
        const int FRONT=0;

        int camId;//front/left/right
        bool Inicializada;
        static bool haciendoFoto3d=false;

        Camara(int camId);


};

#endif // CAMARA_H
