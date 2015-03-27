
// int isPrime(int num) {
// 	int i,flag=0;
// 	if(num>2){
// 		for(i=2;i<num;i++) {
// 			(num%i==0) && (flag=1);
// 		}
// 	}
// 	return (num<=1) ? 0 : (flag==0) ? 1 : 0;
// }
// int primeNumbers(int start,int end,int **array) {
// 	int	range = end-start+1;
// 	if(isPrime(start) && range>0){
// 		*array = (int *)malloc(1*sizeof(int));
// 		(*array)[0] = start;
// 		return 1;
// 	}
// 	return (start<0 || end<0 || range<0) ? 0 : range;
// }



// void test_isPrime_gives_0_for_1() {
// 	int expected;
// 	expected = isPrime(1);
// 	assertEqual(expected, 0);
// }

// void test_isPrime_gives_1_for_2() {
// 	int expected;
// 	expected = isPrime(2);
// 	assertEqual(expected, 1);
// }

// void test_isPrime_gives_1_for_3() {
// 	int expected;
// 	expected = isPrime(3);
// 	assertEqual(expected, 1);
// }

// void test_isPrime_gives_0_for_4() {
// 	int expected;
// 	expected = isPrime(4);
// 	assertEqual(expected,0);
// }

// void test_isPrime_gives_1_for_5() {
// 	int expected;
// 	expected = isPrime(5);
// 	assertEqual(expected,1);
// }

// void test_isPrime_gives_1_for_43() {
// 	int expected;
// 	expected = isPrime(43);
// 	assertEqual(expected,1);
// }

// void test_isPrime_gives_0_for_420() {
// 	int expected;
// 	expected = isPrime(420);
// 	assertEqual(expected,0);
// }

// void test_primeNumber_gives_zero_for_negative_range() {
// 	int *primes,expected;
// 	expected = primeNumbers(-1, 7, &primes);
// 	assertEqual(expected, 0);
// 	expected = primeNumbers(4, -7, &primes);
// 	assertEqual(expected, 0);
// }

// void test_primeNumber_gives__zero_for_start_is_greater_than_end(){
// 	int *primes,expected;
// 	expected = primeNumbers(8, 7, &primes);
// 	assertEqual(expected, 0);	
// }

// void test_primeNumber_gives_1_for_2_2(){
// 	int *primes,expected;
// 	expected = primeNumbers(2, 2, &primes);
// 	assertEqual(expected, 1);
// 	assertEqual(2,primes[0]);	
// }

// void test_primeNumber_gives_1_for_3_3(){
// 	int *primes,expected;
// 	expected = primeNumbers(3, 3, &primes);
// 	assertEqual(expected, 1);
// 	assertEqual(3,primes[0]);	
// }

// void test_primeNumber_gives_1_for_4_4(){
// 	int *primes,expected;
// 	expected = primeNumbers(4, 4, &primes);
// 	assertEqual(expected, 0);
// }