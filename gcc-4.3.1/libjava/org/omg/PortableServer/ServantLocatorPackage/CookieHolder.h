
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableServer_ServantLocatorPackage_CookieHolder__
#define __org_omg_PortableServer_ServantLocatorPackage_CookieHolder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace PortableServer
      {
        namespace ServantLocatorPackage
        {
            class CookieHolder;
        }
      }
    }
  }
}

class org::omg::PortableServer::ServantLocatorPackage::CookieHolder : public ::java::lang::Object
{

public:
  CookieHolder();
  CookieHolder(::java::lang::Object *);
  void _read(::org::omg::CORBA::portable::InputStream *);
  ::org::omg::CORBA::TypeCode * _type();
  void _write(::org::omg::CORBA::portable::OutputStream *);
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableServer_ServantLocatorPackage_CookieHolder__
