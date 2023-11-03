#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_u, .init = cr_redirect_stdout)
{
    unsigned int value =  12345;
    my_printf("Unsigned value: %u", value);
    cr_assert_stdout_eq_str("Unsigned value: 12345");
}
