#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_x, .init = cr_redirect_stdout)
{
    unsigned int value =  255;
    my_printf("Hexadecimal lower: %x", value);
    cr_assert_stdout_eq_str("Hexadecimal lower: ff");
}
