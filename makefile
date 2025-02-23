.PHONY: all clean 
# Name My Program
EXE= Setup.exe
EXE1= blank.exe

# ALL OBJC Files
OBJC= hello.o
OBJC1= blanks.o

# Compiler
CC= gcc 

CFALGS= -Wall -Wextra -g

# Links flags
LDFALGS= -lm 

# Default Target 
all: $(EXE) $(EXE1)

# Links Executable.
$(EXE): $(OBJC)
	$(CC) $(CFALGS)  -o $@   $^   $(LDFALGS)


$(EXE1): $(OBJC1)
	$(CC) $(CFALGS)  -o $@   $^   $(LDFALGS)
# Compiler Source Files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean Files 
clean:
	rm -rfv $(EXE) $(OBJC) $(EXE1) $(OBJC1)








