
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicInternalFrameUI$ShowSystemMenuAction__
#define __javax_swing_plaf_basic_BasicInternalFrameUI$ShowSystemMenuAction__

#pragma interface

#include <javax/swing/AbstractAction.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class ActionEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicInternalFrameUI;
            class BasicInternalFrameUI$ShowSystemMenuAction;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicInternalFrameUI$ShowSystemMenuAction : public ::javax::swing::AbstractAction
{

  BasicInternalFrameUI$ShowSystemMenuAction(::javax::swing::plaf::basic::BasicInternalFrameUI *);
public:
  virtual void actionPerformed(::java::awt::event::ActionEvent *);
public: // actually package-private
  BasicInternalFrameUI$ShowSystemMenuAction(::javax::swing::plaf::basic::BasicInternalFrameUI *, ::javax::swing::plaf::basic::BasicInternalFrameUI$ShowSystemMenuAction *);
  ::javax::swing::plaf::basic::BasicInternalFrameUI * __attribute__((aligned(__alignof__( ::javax::swing::AbstractAction)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicInternalFrameUI$ShowSystemMenuAction__
