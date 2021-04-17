typedef void (*test_function_t)();

test_function_t test_function_arr[100];
int test_function_cnt = 0;

int RUN_ALL_TESTS() {
    for (int i = 0; i < test_function_cnt; i++) {
        printf("RUN TEST : %d\n", i + 1);
        test_function_arr[i]();
        printf("RUN TEST DONE\n\n");
    }
    return 0;
}

void test1_test_is_prime();

__attribute__((constructor))
void register_test1_test_is_prime() {
    test_function_arr[test_function_cnt] = test1_test_is_prime; 
    test_function_cnt++;
}

void test1_test_is_prime() {
    EXPECT_EQ(is_prime(3), 1);
    EXPECT_EQ(is_prime(5), 1);
    EXPECT_EQ(is_prime(7), 1);
}

void test2_test_is_prime();

__attribute__((constructor))
void register_test2_test_is_prime() { 
    test_function_arr[test_function_cnt] = test2_test_is_prime; 
    test_function_cnt++;
}

void test2_test_is_prime() {
    EXPECT_EQ(is_prime(4), 0);
    EXPECT_EQ(is_prime(0), 0);
    EXPECT_EQ(is_prime(1), 0);
}