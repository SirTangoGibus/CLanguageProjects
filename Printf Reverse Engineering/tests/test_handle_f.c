#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_f, .init = cr_redirect_stdout)
{
    double value =  123.456;
    my_printf("Float: %f", value);
    cr_assert_stdout_eq_str("Float: 123.456000");
}
