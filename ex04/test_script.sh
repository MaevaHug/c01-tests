#!/bin/bash

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Run norminette check
echo "Running norminette check..."
output=$(norminette -R CheckForbiddenSourceHeader 2>&1)
if [ $? -ne 0 ]; then
	echo "$output" | grep -E --color=always "Error|Warning|Norme"
	echo -e "${RED}Norminette check failed${NC}"
#	exit 1
else
	echo -e "${GREEN}Norminette check passed${NC}"
fi

# Compile the files
echo "Compiling files..."
cc -Wall -Wextra -Werror -o ft_ultimate_div_mod ft_ultimate_div_mod.c main.c
if [ $? -ne 0 ]; then
	echo -e "${RED}Compilation failed${NC}"
	exit 1
else
	echo -e "${GREEN}Compilation succeded${NC}"
fi

# Function to generate a separator line of a given length
generate_separator() {
	local length=$1
	local separator=""
	for ((i=0; i<length; i++)); do
		separator="${separator}="
	done
	echo "$separator"
}

# Assign the longest test to a variable
longest_test="$> ./ft_ultimate_div_mod 10 3"
# Add some padding for better visuals and generate the separator
separator=$(generate_separator $((${#longest_test} + 2)))

# Function to run a test and check the result
run_test() {
	local a=$1
	local b=$2
	local expected_div=$3
	local expected_mod=$4

	echo "$separator"
	echo "$> ./ft_ultimate_div_mod $a $b"

	output=$(./ft_ultimate_div_mod $a $b)

	div=$(echo "$output" | grep -oP '(?<=a: )\d+')
	mod=$(echo "$output" | grep -oP '(?<=b: )\d+')
	
	if [ "$div" == "$expected_div" ] && [ "$mod" == "$expected_mod" ]; then
		echo -e "${GREEN}Test passed${NC}"
		#echo -e "-> Actual output\ndiv: $div, mod: $mod"
		return 0
	else
		echo -e "${RED}Test failed${NC}"
		echo -e "-> Expected output\ndiv: $expected_div, mod: $expected_mod"
		echo -e "-> Actual output\ndiv: $div, mod: $mod"
		return 1
	fi
}

# Run tests
all_tests_passed=true

run_test 10 3 3 1 || all_tests_passed=false
run_test 20 5 4 0 || all_tests_passed=false
run_test 42 7 6 0 || all_tests_passed=false
run_test 15 4 3 3 || all_tests_passed=false
run_test 10 0 10 0 || all_tests_passed=false  # Test with zero divisor

# Final result
echo "$separator"
if $all_tests_passed; then
	echo -e "${GREEN}All tests passed: OK${NC}"
else
	echo -e "${RED}Some tests failed: KO${NC}"
fi
echo "$separator"

# Clean up compiled files
rm ft_ultimate_div_mod