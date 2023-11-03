#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_zero, .init = cr_redirect_stdout)
{
    int value =  42;
    my_printf("Zero padding: %05d", value);
    cr_assert_stdout_eq_str("Zero padding: 00042");
}
