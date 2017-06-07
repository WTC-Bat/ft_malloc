NAME = libft_malloc_$HOSTTYPE.so
SLNK = ln -s libft_malloc_$HOSTTYPE.so libft_malloc.so
SRCD = ./src/
HEADD = ./include/
SRCS = $(SRC)*.cpp
#etc

### Checks if the "HOSTTYPE" environment variable  exists
# ifndef HOSTTYPE
#	something
# endif

### Sets the value of "HOSTTYPE" as a make variable. Can't find it as environment variable
ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

# all:
# 	@echo $(HOSTTYPE)