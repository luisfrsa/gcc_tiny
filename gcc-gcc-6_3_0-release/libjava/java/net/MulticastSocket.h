
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_MulticastSocket__
#define __java_net_MulticastSocket__

#pragma interface

#include <java/net/DatagramSocket.h>
extern "Java"
{
  namespace java
  {
    namespace net
    {
        class DatagramPacket;
        class InetAddress;
        class MulticastSocket;
        class NetworkInterface;
        class SocketAddress;
    }
  }
}

class java::net::MulticastSocket : public ::java::net::DatagramSocket
{

public:
  MulticastSocket();
  MulticastSocket(jint);
  MulticastSocket(::java::net::SocketAddress *);
  virtual ::java::net::InetAddress * getInterface();
  virtual jbyte getTTL();
  virtual jint getTimeToLive();
  virtual void setInterface(::java::net::InetAddress *);
  virtual void setNetworkInterface(::java::net::NetworkInterface *);
  virtual ::java::net::NetworkInterface * getNetworkInterface();
  virtual void setLoopbackMode(jboolean);
  virtual jboolean getLoopbackMode();
  virtual void setTTL(jbyte);
  virtual void setTimeToLive(jint);
  virtual void joinGroup(::java::net::InetAddress *);
  virtual void leaveGroup(::java::net::InetAddress *);
  virtual void joinGroup(::java::net::SocketAddress *, ::java::net::NetworkInterface *);
  virtual void leaveGroup(::java::net::SocketAddress *, ::java::net::NetworkInterface *);
  virtual void send(::java::net::DatagramPacket *, jbyte);
  static ::java::lang::Class class$;
};

#endif // __java_net_MulticastSocket__
