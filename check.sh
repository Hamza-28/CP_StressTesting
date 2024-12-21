set -e

g++ gen.cpp -o gen
g++ code.cpp -o code
g++ brute.cpp -o brute

for ((i = 1; ; ++i)); do
	echo "Passed on TestCase: " $i
	./gen $i > testCase
	./code < testCase > myAnswer
	./brute < testCase > correctAnswer

	diff -Z myAnswer correctAnswer || break
done

cat pattern
echo "WA on the following test:" 
cat testCase

echo "Your Answer is:"
cat myAnswer

echo "Correct answer is:"
cat correctAnswer

