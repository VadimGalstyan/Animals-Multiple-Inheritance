myProject : main.o animal.o terrestrials.o aquatic.o amphibians.o
	g++ main.o animal.o terrestrials.o aquatic.o amphibians.o -o myProject

main.o : main.cpp
	g++ -c main.cpp -o main.o

animal.o : animal.cpp
	g++ -c animal.cpp -o animal.o

terrestrials.o : terrestrials.cpp
	g++ -c terrestrials.cpp -o terrestrials.o

aquatic.o : aquatic.cpp
	g++ -c aquatic.cpp -o aquatic.o

amphibians.o : amphibians.cpp
	g++ -c amphibians.cpp -o amphibians.o


