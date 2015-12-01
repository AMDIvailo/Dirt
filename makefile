all:
	@mkdir -p bin
	@g++ main.cpp -o bin/Dirt
clean:
	@rm -rf bin
