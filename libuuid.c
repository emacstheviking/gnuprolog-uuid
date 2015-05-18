#include <stdio.h>
#include <gprolog.h>
#include <uuid/uuid.h>


#define GP_UUIDGEN(HOW,TERM)			\
  uuid_t uuid; \
  char szUUID[32+1]; \
  uuid_generate(uuid); \
  HOW(uuid, szUUID); \
  *TERM = Pl_Mk_Codes(szUUID);


PlBool gp_uuid_generate(PlTerm* uuidTerm)
{
  GP_UUIDGEN(uuid_unparse, uuidTerm);
  return PL_TRUE;
}


PlBool gp_uuid_generate_upper(PlTerm* uuidTerm)
{
  GP_UUIDGEN(uuid_unparse_upper, uuidTerm);
  return PL_TRUE;
}


PlBool gp_uuid_generate_lower(PlTerm* uuidTerm)
{
  GP_UUIDGEN(uuid_unparse_lower, uuidTerm);
  return PL_TRUE;
}
