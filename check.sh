set -e

g++ gen.cpp -o gen
g++ code.cpp -o code
g++ brute.cpp -o brute

for ((i = 1; ; ++i)); do
	echo "Passed on TestCase: " $i
	./gen $i > in
	./code < in > out1
	./brute < in > out2

	diff -Z out1 out2 || break
done

cat pattern
echo "WA on the following test:" 
cat in

echo "Your Answer is:"
cat out1

echo "Correct answer is:"
cat out2

