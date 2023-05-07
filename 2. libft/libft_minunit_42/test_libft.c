#include "minunit.h"
#include "../libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);

MU_TEST(isalpha_should_return_true_when_letter_a)
{
	int		expected_result = 1;  /* true */
	char	tested_char = 'a';

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalpha_should_return_false_when_letter_less_than_a){
	int		expected_result = 0;  /* false */
	char	tested_char = 'a' - 1;

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalpha_should_return_true_when_letter_z){
	int		expected_result = 1;  /* true */
	char	tested_char = 'z';

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalpha_should_return_false_when_letter_greater_than_z){
	int		expected_result = 0;  /* false */
	char	tested_char = 'z' + 1;

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalpha_should_return_true_when_letter_A)
{
	int		expected_result = 1;  /* true */
	char	tested_char = 'A';

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalpha_should_return_false_when_letter_less_than_A){
	int		expected_result = 0;  /* false */
	char	tested_char = 'A' - 1;

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalpha_should_return_true_when_letter_Z){
	int		expected_result = 1;  /* true */
	char	tested_char = 'Z';

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalpha_should_return_false_when_letter_greater_than_Z){
	int		expected_result = 0;  /* false */
	char	tested_char = 'Z' + 1;

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isdigit_should_return_true_when_letter_0)
{
	int		expected_result = 1;  /* true */
	char	tested_char = '0';

	int	actual_result;
	actual_result = ft_isdigit(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isdigit_should_return_false_when_letter_less_than_0)
{
	int		expected_result = 0;  /* false */
	char	tested_char = '0' - 1;

	int	actual_result;
	actual_result = ft_isdigit(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isdigit_should_return_true_when_letter_9)
{
	int		expected_result = 1;  /* true */
	char	tested_char = '9';

	int	actual_result;
	actual_result = ft_isdigit(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isdigit_should_return_false_when_letter_greater_than_9)
{
	int		expected_result = 0;  /* false */
	char	tested_char = '9' + 1;

	int	actual_result;
	actual_result = ft_isdigit(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_suite)
{
	write(1,"test ft_isalpha ", 17);
	MU_RUN_TEST(isalpha_should_return_true_when_letter_a);
	MU_RUN_TEST(isalpha_should_return_false_when_letter_less_than_a);
	MU_RUN_TEST(isalpha_should_return_true_when_letter_z);
	MU_RUN_TEST(isalpha_should_return_false_when_letter_greater_than_z);
	MU_RUN_TEST(isalpha_should_return_true_when_letter_A);
	MU_RUN_TEST(isalpha_should_return_false_when_letter_less_than_A);
	MU_RUN_TEST(isalpha_should_return_true_when_letter_Z);
	MU_RUN_TEST(isalpha_should_return_false_when_letter_greater_than_Z);

	write(1,"\ntest ft_isdigit ", 18);
	MU_RUN_TEST(isdigit_should_return_true_when_letter_0);
	MU_RUN_TEST(isdigit_should_return_false_when_letter_less_than_0);
	MU_RUN_TEST(isdigit_should_return_true_when_letter_9);
	MU_RUN_TEST(isdigit_should_return_false_when_letter_greater_than_9);

	write(1,"\ntest ft_isalnum ", 18);
	MU_RUN_TEST();
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}

// gcc ../src/ft_isalpha.c ./test_ft_isalpha.c -o libft.test && ./libft.test
