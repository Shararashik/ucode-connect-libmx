SRCS := $(wildcard src/*.c)
HDRS := $(wildcard inc/*.h)

all: libmx

libmx:
	@clang -c ${HDRS} ${SRCS} -std=c11 -Wall -Wextra -Werror -Wpedantic
	@mkdir obj
	@mv *.o obj
	@ar -rc libmx.a obj/*.o
	@ranlib libmx.a

uninstall: clean
	@rm -f libmx.a

clean:
	@rm -f inc/*.gch
	@rm -rdf obj

reinstall: uninstall libmx
