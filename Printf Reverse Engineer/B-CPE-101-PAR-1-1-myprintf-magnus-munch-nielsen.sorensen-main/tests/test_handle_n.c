#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_n, .init = cr_redirect_stdout)
{
    int n = 0;
    int value = 42;
    my_printf("This is a test: %d%n", value, &n);
    cr_assert_stdout_eq_str("This is a test: 42");
    cr_assert_eq(n, 16);
}
