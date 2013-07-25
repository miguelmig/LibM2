#ifndef __LIBM2_GAME_FDWATCH_HPP
#define __LIBM2_GAME_FDWATCH_HPP
namespace libm2{
typedef int KQUEUE;
typedef struct kevent {
    uintptr_t ident;
    short filter;
    u_short flags;
    u_int fflags;
    intptr_t data;
    void *udata;
} KEVENT, * LPKEVENT;

typedef struct fdwatch {
    KQUEUE kq;
    int nfiles;
    LPKEVENT kqevents;
    int nkqevents;
    LPKEVENT kqrevents;
    int *fd_event_idx;
    void **fd_data;
    int *fd_rw;
} FDWATCH, * LPFDWATCH;
}
#endif // __LIBM2_GAME_FDWATCH_HPP
