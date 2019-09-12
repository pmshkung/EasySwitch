#ifndef __SWITCHS_H__
#define __SWITCHS_H__

#include "utils.h"
#include "boards.h"

int SWITCH_A_open(int x);
void SWITCH_A_close(int x);

int SWITCH_B_open(int x);
void SWITCH_B_close(int x);

#define _SWITCH_OPEN(X, S)          _ATTACH(S, _open)(X)
#define _SWITCH_CLOSE(X, S)         _ATTACH(S, _close)(X)

// define switch function
#define SWITCH_OPEN(X)              _SWITCH_OPEN(X, SWITCH_TYPE)
#define SWITCH_CLOSE(X)             _SWITCH_CLOSE(X, SWITCH_TYPE)

#endif /* __SWITCHS_H__ */
