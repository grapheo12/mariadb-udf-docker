#include "mariadb.hpp"
#include <cstring>

my_bool bitap_init(UDF_INIT *initid, UDF_ARGS *args, char *message)
{
    if (args->arg_count != 1 || args->arg_type[0] != STRING_RESULT){
        strcpy(message, "BITAP takes 1 string as an argument");
        return 1;    
    }

    return 0;
}

void bitap_deinit(UDF_INIT *initid)
{
    // TODO: To all delete and free calls here, if required
}

long long bitap(UDF_INIT *initid, UDF_ARGS *args,
              char *is_null, char *error)
{
    // BITAP logic here
    return 12595;
}