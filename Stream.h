#ifndef STREAM_H
#define STREAM_H


class Stream
{
    public:
        Stream();
        virtual ~Stream();
        virtual u8* Read(long inicio,long lenght);
        u8* Read(long lenght);
        u8* FullRead();
        u8* ReadToEnd();
        bool EndOfStream();
        void SetPosition(long position);
        long GetPosition();
        bool CanFullRead();
        bool CanRead(long length);

        operator u8*() const { return FullRead(); }

    protected:

    private:
};

#endif // STREAM_H
