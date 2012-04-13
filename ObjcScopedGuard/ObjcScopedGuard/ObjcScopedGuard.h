#ifndef __ObjcScopedGuard_H__
#define __ObjcScopedGuard_H__


typedef void (^GuardCallbackBlock)(void);

namespace Utils
{
   class ObjcScopedGuard
   {
   public:
      explicit ObjcScopedGuard( GuardCallbackBlock callback_ );
      virtual ~ObjcScopedGuard() throw();
      void Release();
      
   private:
      GuardCallbackBlock _block;
      bool _isActive;
   };
}


#endif //__ObjcScopedGuard_H__

