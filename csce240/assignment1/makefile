program1 : program1.cc
	g++ -Wall -std=c++17 program1.cc -o program1

checkit : checkit.cc
	g++ -Wall -std=c++17 checkit.cc -o checkit

test1 : program1 checkit sample-input-1.txt correct-test-1.txt
	./program1 < sample-input-1.txt > student-test-1.txt
	./checkit 0

test2 : program1 checkit sample-input-2.txt correct-test-2.txt
	./program1 < sample-input-2.txt > student-test-2.txt
	./checkit 1

test3 : program1 checkit sample-input-3.txt correct-test-3.txt
	./program1 < sample-input-3.txt > student-test-3.txt
	./checkit 2

test4 : program1 checkit sample-input-4.txt correct-test-4.txt
	./program1 < sample-input-4.txt > student-test-4.txt
	./checkit 3

test5 : program1 checkit sample-input-5.txt correct-test-5.txt
	./program1 < sample-input-5.txt > student-test-5.txt
	./checkit 4

clean :
	rm student* checkit program1
