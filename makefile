all:
	@mkdir -p bin
	@g++ main.cpp -o bin/Dirt
clean:
	@rm -rf bin
	@sudo rm /bin/Dirt
install:
	@sudo cp ./bin/Dirt /bin
