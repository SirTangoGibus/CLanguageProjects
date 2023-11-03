#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_percent, .init = cr_redirect_stdout)
{
    my_printf("This is a test: %%");
    cr_assert_stdout_eq_str("This is a test: %");
}
