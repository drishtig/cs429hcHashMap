CC = gcc
# Can change optimization level if needed
# -Wall flag enables all of the compiler's warning messages
#  -Werror treats all compiler warnings as errors
#  -O0 is the lowest optimization level
#  -g enables generating debug info for use with gdb
CC_FLAGS = -Wall -Werror

test: hashmaptest

hashmaptest: testmain.c hashmap.c hashmap.h
	$(CC) $(CC_FLAGS) -O3 -o hashmaptest testmain.c hashmap.c

hasmaptest-dbg: testmain.c hashmap.c hashmap.h
	$(CC) $(CC_FLAGS) -O0 -g -o hashmaptest-dbg testmain.c hashmap.c

debug: hashmaptest-dbg
	gdb ./hashmaptest-dbg

.PHONY: clean Clean

clean:
	rm -f *.o

Clean: clean
	rm -rf hashmaptest hashmaptest-dbg
