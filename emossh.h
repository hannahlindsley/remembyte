#ifndef _EMOSSH_H
#define _EMOSSH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#include <libssh/libssh.h>

#include "bytemaps.h"
#include "util.h"
#include "act_ssh.h"

void dbgprintf(const char *, ...);

#endif
