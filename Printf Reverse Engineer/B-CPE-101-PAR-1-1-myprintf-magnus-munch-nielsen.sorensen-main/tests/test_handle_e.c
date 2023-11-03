#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_e, .init = cr_redirect_stdout)
{
    double value =  1234.5678;
    my_printf("Exponential: %e", value);
    cr_assert_stdout_eq_str("Exponential: 1.234568e+03");
}
