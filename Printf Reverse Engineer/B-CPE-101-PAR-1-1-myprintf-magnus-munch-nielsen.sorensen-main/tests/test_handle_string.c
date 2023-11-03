#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_string, .init = cr_redirect_stdout)
{
    const char *str =  "Hello World";
    my_printf("%s", str);
    cr_assert_stdout_eq_str("Hello World");
}
