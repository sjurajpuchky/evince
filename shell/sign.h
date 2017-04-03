
#ifndef _SIGN_H
#define _SIGN_H

typedef enum SIGN_STATE {
        NO_SELECTED,
	SIGN_OK,
        SIGN_WARN,
        SIGN_ERROR
} T_SIGN_STATE;

extern T_SIGN_STATE ev_sign_state;

#endif
