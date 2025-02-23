.PHONY: all clean 
# Name My Program
EXE= Setup

# ALL OBJC Files
OBJC= hello.o

# Compiler
CC= gcc 

CFALGS= -Wall -Wextra -g

# Links flags
LDFALGS= -lm 

# Default Target 
all: $(EXE)

# Links Executable.
$(EXE): $(OBJC)
	$(CC) $(CFALGS)  -o $@ $^  $(LDFALGS)
# Compiler Source Files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean Files 
clean:
	rm -rfv $(EXE) $(OBJC)

