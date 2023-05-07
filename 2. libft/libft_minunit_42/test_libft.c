#include "minunit.h"
#include "../libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);


/* Test - isalpha */
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

/* Test - isalpha */
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

/* Test - isalnum */
MU_TEST(isalnum_should_return_false_when_letter_less_than_a)
{
	int		expected_result = 0;  /* false */
	char	tested_char = 'a' - 1;

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_true_when_letter_a)
{
	int		expected_result = 1;  /* true */
	char	tested_char = 'a';

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_false_when_letter_greater_than_z)
{
	int		expected_result = 0;  /* false */
	char	tested_char = 'z' + 1;

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_true_when_letter_z)
{
	int		expected_result = 1;  /* true */
	char	tested_char = 'z';

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_false_when_letter_less_than_A)
{
	int		expected_result = 0;  /* false */
	char	tested_char = 'A' - 1;

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_true_when_letter_A)
{
	int		expected_result = 1;  /* true */
	char	tested_char = 'A';

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_false_when_letter_greater_than_Z)
{
	int		expected_result = 0;  /* false */
	char	tested_char = 'Z' + 1;

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_true_when_letter_Z)
{
	int		expected_result = 1;  /* true */
	char	tested_char = 'Z';

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_true_when_letter_0)
{
	int		expected_result = 1;  /* true */
	char	tested_char = '0';

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_false_when_letter_less_than_0)
{
	int		expected_result = 0;  /* false */
	char	tested_char = '0' - 1;

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_true_when_letter_9)
{
	int		expected_result = 1;  /* true */
	char	tested_char = '9';

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isalnum_should_return_false_when_letter_greater_than_9)
{
	int		expected_result = 0;  /* false */
	char	tested_char = '9' + 1;

	int	actual_result;
	actual_result = ft_isalnum(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

/* Test - isascii */
MU_TEST(isascii_should_return_false_when_character_is_less_than_0)
{
	int	expected_result = 0; /* false */
	int	tested_char = -1;

	int actual_result;
	actual_result = ft_isascii(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isascii_should_return_true_when_character_is_0)
{
	int	expected_result = 1; /* true */
	int	tested_char = 0;

	int actual_result;
	actual_result = ft_isascii(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isascii_should_return_false_when_character_is_greater_than_127)
{
	int	expected_result = 0; /* false */
	int	tested_char = 128;

	int actual_result;
	actual_result = ft_isascii(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isascii_should_return_true_when_character_is_127)
{
	int	expected_result = 1; /* true */
	int	tested_char = 127;

	int actual_result;
	actual_result = ft_isascii(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

/* Test - isprint */
MU_TEST(isprint_should_return_false_when_preceding_the_space_character)
{
	int		expected_result = 0; /* false */
	char	tested_char = ' ' - 1;

	int actual_result;
	actual_result = ft_isprint(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isprint_should_return_true_when_is_space_character)
{
	int		expected_result = 1; /* true */
	char	tested_char = ' ';

	int actual_result;
	actual_result = ft_isprint(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isprint_should_return_false_when_after_the_tilde_character)
{
	int		expected_result = 0; /* false */
	char	tested_char = '~' + 1;

	int actual_result;
	actual_result = ft_isprint(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(isprint_should_return_true_when_is_tilde_character)
{
	int		expected_result = 1; /* true */
	char	tested_char = '~';

	int actual_result;
	actual_result = ft_isprint(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

/* Test - strlen */
MU_TEST(strlen_should_return_3_when_string_have_length_3)
{
	int		expected_result = 3; /* true */
	char	tested_char[] = "123";

	int actual_result;
	actual_result = ft_strlen(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(strlen_should_return_0_when_string_have_length_0)
{
	int		expected_result = 0; /* true */
	char	tested_char[] = "";

	int actual_result;
	actual_result = ft_strlen(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

/* Test - memset */
MU_TEST(memset_should_return_the_pointer_to_position_zero_when_n_is_zero)
{
	char	tested_char[100];
	char	*expected_result = &tested_char[0]; /* true */
	/* Neste caso, a posição 0 do vetor tested_char é esperada*/
	
	char	*actual_result;
	actual_result = ft_memset(tested_char, 'A', 0);
	/* ft_memset deve retornar uma posição de memória de tested_char */
	
	mu_assert_string_eq(expected_result, actual_result);
	/* TRUE se a posição de memória recebida em actual_result for igual a posição zero do vetor tested_char */
}

MU_TEST(memset_must_fill_42_positions_with_the_letter_A_in_the_test_vector)
{
	char	tested_char[100];
	int		expected_result = 42; /* true */
	
	int		actual_result;
	actual_result = 0;
	ft_memset(tested_char, 'A', 42);

	while (tested_char[actual_result] == 'A')
	{
		actual_result++;
	}
	mu_assert_int_eq(expected_result, actual_result);
}

/* Test - bzero */
MU_TEST(bzero_must_not_modify_array_when_n_is_zero) 
{
	char	tested_char[100];
	int		expected_result = 42; /* true */
	
	int		actual_result;
	ft_memset(tested_char, 'A', 42);
	ft_bzero(tested_char, 0);

	actual_result = 0;
	while (tested_char[actual_result] == 'A')
	{
		actual_result++;
	}
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(bzero_must_modify_42_vector_positions_when_n_is_42) 
{
	char	tested_char[100];
	int		expected_result = 42; /* true */
	
	int		actual_result;
	ft_memset(tested_char, 'A', 42);
	ft_bzero(tested_char, 42);

	actual_result = 0;
	while (tested_char[actual_result] == 0)
	{
		actual_result++;
	}
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(bzero_must_modify_42_vector_positions_when_n_is_42_even_when_finding_null_character_in_the_middle) 
{
	char	tested_char[100];
	int		expected_result = 42; /* true */
	
	int		actual_result;
	ft_memset(tested_char, 'A', 42);
	tested_char[10] = 0;
	ft_bzero(tested_char, 42);

	actual_result = 0;
	while (tested_char[actual_result] == 0)
	{
		actual_result++;
	}
	mu_assert_int_eq(expected_result, actual_result);
}

/* Test - memcpy */
MU_TEST(memcpy_must_not_modify_array_when_n_has_zero_size) 
{
	char	tested_char[100];
	char	*expected_result = &tested_char[0]; /* true */
	
	char	*actual_result;
	ft_memset(tested_char, 'A', 42);
	actual_result = ft_memcpy(tested_char, "Viemos em paz", 0);

	mu_assert_string_eq(expected_result, actual_result);
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
	MU_RUN_TEST(isalnum_should_return_false_when_letter_less_than_a);
	MU_RUN_TEST(isalnum_should_return_true_when_letter_a);
	MU_RUN_TEST(isalnum_should_return_false_when_letter_greater_than_z);
	MU_RUN_TEST(isalnum_should_return_true_when_letter_z);
	MU_RUN_TEST(isalnum_should_return_false_when_letter_less_than_A);
	MU_RUN_TEST(isalnum_should_return_true_when_letter_A);
	MU_RUN_TEST(isalnum_should_return_false_when_letter_greater_than_Z);
	MU_RUN_TEST(isalnum_should_return_true_when_letter_Z);
	MU_RUN_TEST(isalnum_should_return_true_when_letter_0);
	MU_RUN_TEST(isalnum_should_return_false_when_letter_less_than_0);
	MU_RUN_TEST(isalnum_should_return_true_when_letter_9);
	MU_RUN_TEST(isalnum_should_return_false_when_letter_greater_than_9);

	write(1,"\ntest ft_isascii ", 18);
	MU_RUN_TEST(isascii_should_return_false_when_character_is_less_than_0);
	MU_RUN_TEST(isascii_should_return_true_when_character_is_0);
	MU_RUN_TEST(isascii_should_return_false_when_character_is_greater_than_127);
	MU_RUN_TEST(isascii_should_return_true_when_character_is_127);

	write(1,"\ntest ft_isprint ", 18);
	MU_RUN_TEST(isprint_should_return_false_when_preceding_the_space_character);
	MU_RUN_TEST(isprint_should_return_true_when_is_space_character);
	MU_RUN_TEST(isprint_should_return_false_when_after_the_tilde_character);
	MU_RUN_TEST(isprint_should_return_true_when_is_tilde_character);

	write(1,"\ntest ft_strlen ", 17);
	MU_RUN_TEST(strlen_should_return_3_when_string_have_length_3);
	MU_RUN_TEST(strlen_should_return_0_when_string_have_length_0);

	write(1,"\ntest ft_memset ", 17);
	MU_RUN_TEST(memset_should_return_the_pointer_to_position_zero_when_n_is_zero);
	MU_RUN_TEST(memset_must_fill_42_positions_with_the_letter_A_in_the_test_vector);

	write(1,"\ntest ft_bzero ", 16);
	MU_RUN_TEST(bzero_must_not_modify_array_when_n_is_zero);
	MU_RUN_TEST(bzero_must_modify_42_vector_positions_when_n_is_42);
	MU_RUN_TEST(bzero_must_modify_42_vector_positions_when_n_is_42_even_when_finding_null_character_in_the_middle);

	write(1,"\ntest ft_memcpy ", 17);
	MU_RUN_TEST(memcpy_must_not_modify_array_when_n_has_zero_size);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}

// gcc ../src/ft_isalpha.c ./test_ft_isalpha.c -o libft.test && ./libft.test
