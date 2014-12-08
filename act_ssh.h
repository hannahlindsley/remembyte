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
  int openssh_version;
  const char *disconnect_message;
} ssh_banners; 

#define HOSTKEY_COUNT 3
typedef struct _ssh_hostkeys {
  int count;
  char *keytypes[HOSTKEY_COUNT];
  unsigned char *keyvalues[HOSTKEY_COUNT];
  size_t keylengths[];
} ssh_hostkeys;

ssh_hostkeys ssh_hostkeys_new();

int get_banners(ssh_session, ssh_banners*);
void print_banners(ssh_banners*);

int get_hostkey_fingerprint(ssh_session, ssh_hostkeys*);
void print_hostkey_fingerprint(ssh_hostkeys*, mapping_t);

#endif
