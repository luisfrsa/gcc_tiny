
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_REMatchEnumeration__
#define __gnu_java_util_regex_REMatchEnumeration__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
          class CPStringBuilder;
      }
      namespace util
      {
        namespace regex
        {
            class CharIndexed;
            class RE;
            class REMatch;
            class REMatchEnumeration;
        }
      }
    }
  }
}

class gnu::java::util::regex::REMatchEnumeration : public ::java::lang::Object
{

public: // actually package-private
  REMatchEnumeration(::gnu::java::util::regex::RE *, ::gnu::java::util::regex::CharIndexed *, jint, jint);
public:
  virtual jboolean hasMoreElements();
  virtual jboolean hasMoreMatches();
  virtual jboolean hasMoreMatches(::gnu::java::lang::CPStringBuilder *);
  virtual ::gnu::java::util::regex::REMatch * REMatchEnumeration$nextElement();
  virtual ::java::lang::Object * nextElement();
private:
  static const jint YES = 1;
  static const jint MAYBE = 0;
  static const jint NO = -1;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) more;
  ::gnu::java::util::regex::REMatch * match;
  ::gnu::java::util::regex::RE * expr;
  ::gnu::java::util::regex::CharIndexed * input;
  jint eflags;
  jint index;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_REMatchEnumeration__
