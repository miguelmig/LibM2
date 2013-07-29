#include "EVENT.hpp"
#include "../addr.hpp"
namespace libm2{

void intrusive_ptr_add_ref(event *e){
    ((void(*)(event*))Addr::EVENT::intrusive_ptr_add_ref)(e);
};
void intrusive_ptr_release(event *e){
    ((void(*)(event*))Addr::EVENT::intrusive_ptr_release)(e);
}
}
