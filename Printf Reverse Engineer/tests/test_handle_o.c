#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_o, .init = cr_redirect_stdout)
{
    unsigned int value =  63;
    my_printf("Octal: %o", value);
    cr_assert_stdout_eq_str("Octal: 77");
}
