CC = g++
CFLAGS  = -g -Wall -std=c++11
RM = rm

all: burger_optimization ceo_search centrists tricky_trios

burger_optimization:  2018/a_burger_optimization/burger_optimization.cpp
	$(CC) $(CFLAGS) -o bin/2018/burger_optimization 2018/a_burger_optimization/burger_optimization.cpp

ceo_search:  2018/b_ceo_search/ceo_search.cpp
	$(CC) $(CFLAGS) -o bin/2018/ceo_search 2018/b_ceo_search/ceo_search.cpp

centrists:  2018/c_centrists/centrists.cpp
	$(CC) $(CFLAGS) -o bin/2018/centrists 2018/c_centrists/centrists.cpp

tricky_trios:  2018/d_tricky_trios/tricky_trios.cpp
	$(CC) $(CFLAGS) -o bin/2018/tricky_trios 2018/d_tricky_trios/tricky_trios.cpp

clean: 
	$(RM) bin/*