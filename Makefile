all : main

GPP=g++

main : main.cpp
	$(GPP) -std=c++11 -g -Wall -o main \
                 main.cpp

clean:
	-@rm main              >/dev/null 2>/dev/null