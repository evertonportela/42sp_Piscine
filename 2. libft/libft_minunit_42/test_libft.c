#include "minunit.h"
#include "../libft.h"

int	ft_isalpha(int c);

MU_TEST(is_alpha_sholder_return_true_when_alphabet_letter_a)
{
	int		expected_result = 1;  /* true */
	char	tested_char = 'a';

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(is_alpha_sholder_return_true_when_alphabet_letter_z)
{
	int		expected_result = 1;  /* true */
	char	tested_char = 'z';

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(is_alpha_sholder_return_false_when_digit_0)
{
	int		expected_result = 0;  /* true */
	char	tested_char = '0';

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(is_alpha_sholder_return_false_when_simble_bar)
{
	int		expected_result = 0;  /* true */
	char	tested_char = '\\';   /* \ */

	int	actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(is_alpha_sholder_return_true_when_alphabet_letter_a);
	MU_RUN_TEST(is_alpha_sholder_return_true_when_alphabet_letter_z);
	MU_RUN_TEST(is_alpha_sholder_return_false_when_digit_0);
	MU_RUN_TEST(is_alpha_sholder_return_false_when_simble_bar);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}

// gcc ../src/ft_isalpha.c ./test_ft_isalpha.c -o libft.test && ./libft.test