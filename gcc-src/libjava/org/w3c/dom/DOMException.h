
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_w3c_dom_DOMException__
#define __org_w3c_dom_DOMException__

#pragma interface

#include <java/lang/RuntimeException.h>
extern "Java"
{
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class DOMException;
      }
    }
  }
}

class org::w3c::dom::DOMException : public ::java::lang::RuntimeException
{

public:
  DOMException(jshort, ::java::lang::String *);
  jshort __attribute__((aligned(__alignof__( ::java::lang::RuntimeException)))) code;
  static const jshort INDEX_SIZE_ERR = 1;
  static const jshort DOMSTRING_SIZE_ERR = 2;
  static const jshort HIERARCHY_REQUEST_ERR = 3;
  static const jshort WRONG_DOCUMENT_ERR = 4;
  static const jshort INVALID_CHARACTER_ERR = 5;
  static const jshort NO_DATA_ALLOWED_ERR = 6;
  static const jshort NO_MODIFICATION_ALLOWED_ERR = 7;
  static const jshort NOT_FOUND_ERR = 8;
  static const jshort NOT_SUPPORTED_ERR = 9;
  static const jshort INUSE_ATTRIBUTE_ERR = 10;
  static const jshort INVALID_STATE_ERR = 11;
  static const jshort SYNTAX_ERR = 12;
  static const jshort INVALID_MODIFICATION_ERR = 13;
  static const jshort NAMESPACE_ERR = 14;
  static const jshort INVALID_ACCESS_ERR = 15;
  static const jshort VALIDATION_ERR = 16;
  static const jshort TYPE_MISMATCH_ERR = 17;
  static ::java::lang::Class class$;
};

#endif // __org_w3c_dom_DOMException__
