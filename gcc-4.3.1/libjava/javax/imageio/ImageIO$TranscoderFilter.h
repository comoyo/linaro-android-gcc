
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_ImageIO$TranscoderFilter__
#define __javax_imageio_ImageIO$TranscoderFilter__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
        class ImageIO$TranscoderFilter;
        class ImageReader;
        class ImageWriter;
    }
  }
}

class javax::imageio::ImageIO$TranscoderFilter : public ::java::lang::Object
{

public:
  ImageIO$TranscoderFilter(::javax::imageio::ImageReader *, ::javax::imageio::ImageWriter *);
  jboolean filter(::java::lang::Object *);
private:
  ::javax::imageio::ImageReader * __attribute__((aligned(__alignof__( ::java::lang::Object)))) reader;
  ::javax::imageio::ImageWriter * writer;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_ImageIO$TranscoderFilter__
