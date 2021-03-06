# remembyte Makefile
# 
# Override variables on the commandline or by creating a new Makefile that
# includes this one.
#
# You can override them on the commandline like so: 
#     CCINCLUDES=-I/path/to/extra/include/dir
#     CCLIBS=-L/path/to/extra/lib/dir
#
# You can override them in a new Makefile by creating a file like this:
#     CCINCLUDES=-I/path/to/extra/include/dir
#     CCLIBS=/path/to/extra/lib/dir
#     include Makefile
# Save the new Makefile in this directory and invoke make with the `-f` flag:
#     make -f ./new_Makefile.txt
#

CC=clang
#CFLAGS?=-Wall
#CCINCLUDES=?
#CCLIBS=?
CCDEBUGARGS=-DNDEBUG
LINKER=-lssh -lm

MODULESH=$(wildcard modules/*.h modules/**/*.h)
MODULESC=$(wildcard modules/*.c modules/**/*.c)
$(warning Found these module source files: $(MODULESH) $(MODULESC))

MAINSC=$(wildcard mains/*.c)
MAINSX=$(patsubst mains/%.c,%,$(MAINSC))
$(warning Found these main source files: $(MAINSC))
$(warning Will compile to these main binaries: $(MAINSX))

TESTSC=$(wildcard tests/*.c)
TESTSX=$(patsubst tests/%.c,%,$(TESTSC))
$(warning Found these test source files: $(TESTSC))
$(warning Will compile to these test binaries: $(TESTSX))

#$(warning CC: $(CC))
#$(warning CCDEBUGARGS: $(CCDEBUGARGS))
#$(warning CFLAGS: $(CFLAGS))
#$(warning CCINCLUDES: $(CCINCLUDES))
#$(warning CCLIBS: $(CCLIBS))

all: bin mains

debug: CCDEBUGARGS=-g -O0 -Wall
debug: all

mains: bin $(MAINSX)
$(MAINSX): $(MAINSC) $(MODULESC) $(MODULESH)
	$(CC) $(CCDEBUGARGS) $(CFLAGS) $(LINKER) $(CCINCLUDES) $(CCLIBS) $(MODULESC) mains/$@.c -o bin/$@

tests: CCDEBUGARGS=-g -O0
tests: bin $(TESTSX)
$(TESTSX): 
	$(CC) $(CCDEBUGARGS) $(CFLAGS) $(LINKER) $(CCINCLUDES) $(CCLIBS) $(MODULESC) tests/$@.c -o bin/$@
	bin/$@

bin: 
	mkdir -p bin

clean:
	rm -rf bin

