#ifndef _ACT_SSH_H
#define _ACT_SSH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <libssh/libssh.h>

#include "bytemaps.h"
#include "util.h"

typedef struct _ssh_banners {
  const char *issue_banner;
  const char *server_banner;
  char *openssh_version;
  int openssh_version_int;
  const char *disconnect_message;
} ssh_banners; 

//#define HOSTKEY_COUNT 3
typedef struct _ssh_hostkeys {
  int count;
  int *keytypes;             // treated as an array 
  unsigned char **keyvalues; // treated as an array 
  size_t *keylengths;        // treated as an array 
} ssh_hostkeys;

ssh_hostkeys *ssh_hostkeys_new();
void ssh_hostkeys_free(ssh_hostkeys*);

char *osshv2a(int);

int get_banners(ssh_session, ssh_banners*);
int get_hostkey_fingerprint(ssh_session, ssh_hostkeys*);

#endif
