
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_local_LocalSocket__
#define __gnu_java_net_local_LocalSocket__

#pragma interface

#include <java/net/Socket.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace local
        {
            class LocalSocket;
            class LocalSocketAddress;
            class LocalSocketImpl;
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class InetAddress;
        class SocketAddress;
    }
    namespace nio
    {
      namespace channels
      {
          class SocketChannel;
      }
    }
  }
}

class gnu::java::net::local::LocalSocket : public ::java::net::Socket
{

public:
  LocalSocket();
  LocalSocket(::gnu::java::net::local::LocalSocketAddress *);
public: // actually package-private
  LocalSocket(jboolean);
public:
  void bind(::java::net::SocketAddress *);
  void connect(::java::net::SocketAddress *, jint);
  ::java::net::InetAddress * getInetAddress();
  ::java::net::InetAddress * getLocalAddress();
  jint getPort();
  jint getLocalPort();
  ::java::nio::channels::SocketChannel * getChannel();
  ::java::net::SocketAddress * getLocalSocketAddress();
  ::java::net::SocketAddress * getRemoteSocketAddress();
  ::java::io::InputStream * getInputStream();
  ::java::io::OutputStream * getOutputStream();
  void sendUrgentData(jint);
  void close();
  void shutdownInput();
  void shutdownOutput();
  jboolean isClosed();
  jboolean isBound();
  jboolean isConnected();
  void setTcpNoDelay(jboolean);
  jboolean getTcpNoDelay();
  void setSoLinger(jboolean, jint);
  jint getSoLinger();
  void setOOBInline(jboolean);
  jboolean getOOBInline();
  void setSoTimeout(jint);
  jint getSoTimeout();
  void setSendBufferSize(jint);
  jint getSendBufferSize();
  void setReceiveBufferSize(jint);
  jint getReceiveBufferSize();
  void setKeepAlive(jboolean);
  jboolean getKeepAlive();
  void setTrafficClass(jint);
  jint getTrafficClass();
  void setReuseAddress(jboolean);
  jboolean getReuseAddress();
public: // actually package-private
  ::gnu::java::net::local::LocalSocketImpl * getLocalImpl();
private:
  ::gnu::java::net::local::LocalSocketImpl * __attribute__((aligned(__alignof__( ::java::net::Socket)))) localimpl;
public: // actually package-private
  jboolean localClosed;
  jboolean localConnected;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_local_LocalSocket__
