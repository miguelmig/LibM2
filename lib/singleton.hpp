#ifndef __LIBM2_LIB_SINGLETON_HPP
#define __LIBM2_LIB_SINGLETON_HPP
namespace libm2{
template <typename T>
class singleton
{
  public:
    static T * ms_singleton;
    singleton(void){};
    ~singleton(){};
    static T *instance(){
        if (!ms_singleton){
            ms_singleton=new T();
        }
        return ms_singleton;
    };
};
template <typename T> T* singleton<T>::ms_singleton = NULL;
}
#endif // __LIBM2_LIB_SINGLETON_HPP
