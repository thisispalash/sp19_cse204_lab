examples: examples/hello_world.c
	gcc examples/hello_world.c -o hello
	gcc examples/comment.c -o comments
	gcc examples/constant.c -o pi-const
	gcc examples/sizeof.c -o sizes
	gcc examples/sum.c -o sum

01: 02_01.c
	gcc 02_01.c -o roots

02: 02_02.c
	gcc 02_02.c -o bin4

03: 02_03.c
	gcc 02_03.c -o series-sum

04: 02_04.c
	gcc 02_04.c -o perfect

05: 02_05.c
	gcc 02_05.c -o evens

required: 01 02 05

all: examples 01 02 03 04 05