#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_eup, .init = cr_redirect_stdout)
{
    double value =  12345.6789;
    my_printf("%E", value);
    cr_assert_stdout_eq_str("1.234568E+04");
}
