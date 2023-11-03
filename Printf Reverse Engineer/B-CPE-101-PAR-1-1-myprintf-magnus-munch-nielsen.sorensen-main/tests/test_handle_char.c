#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_char, .init = cr_redirect_stdout)
{
    char c =  'A';
    my_printf("%c", c);
    cr_assert_stdout_eq_str("A");
}
