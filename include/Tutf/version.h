
#ifndef _TUTF_VERSION_H
#define _TUTF_VERSION_H

#define TUTF_PROTOCOL_VERSION_MAJOR 0
#define TUTF_PROTOCOL_VERSION_MINOR 5
#define TUTF_PROTOCOL_VERSION_PATCH 1
#define TUTF_PROTOCOL_VERSION       ((TUTF_PROTOCOL_VERSION_MAJOR<<16)|(TUTF_PROTOCOL_VERSION_MINOR<<8)|TUTF_PROTOCOL_VERSION_PATCH)
#define TUTF_PROTOCOL_VERSION_STR   T_STR(TUTF_PROTOCOL_VERSION_MAJOR) "." T_STR(TUTF_PROTOCOL_VERSION_MINOR) "." T_STR(TUTF_PROTOCOL_VERSION_PATCH)

#define TUTF_VER_MAJOR(n) ((n)>>16)
#define TUTF_VER_MINOR(n) (((n)>>8) & 0xFF)
#define TUTF_VER_PATCH(n) ((n) & 0xFF)
#define TUTF_VER_BUILD(M, m, p) (((M)<<16)|((m)<<8)|(p))

#endif /* _TUTF_VERSION_H */
