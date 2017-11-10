all:
	gcc -o parse_args parse_args.c

run: all
	./parse_args "ls -a -l"

clean:
	rm parse_args
