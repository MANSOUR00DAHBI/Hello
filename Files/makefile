.PHONY: all clean 
# Name My Program
EXE=  Setup.exe
EXE1= blank.exe
EXE2= R_E_S.exe
EXE3= WPL.exe
EXE4= Hits.exe
EXE5= Ch_Hex.exe
EXE6= dcinput.exe
EXE7= ty_dyh.exe

# ALL OBJC Files
OBJC=  hello.o
OBJC1= blanks.o
OBJC2= R_EACH_S.o
OBJC3= w_p_l.o
OBJC4= histogram.o
OBJC5= Ch_Hex.o
OBJC6= d_c_input.o
OBJC7= sadfag.o

# Compiler
CC= gcc 

CFALGS= -Wall -Wextra -g

# Links flags
LDFALGS= -lm 

# Default Target 
all: $(EXE) $(EXE1)  $(EXE2) $(EXE3) $(EXE4)  $(EXE5) $(EXE6) #$(EXE7)

# Links Executable.
$(EXE): $(OBJC)
	$(CC) $(CFALGS)  -o $@ $^ $(LDFALGS)

$(EXE1): $(OBJC1)
	$(CC) $(CFALGS)  -o $@ $^ $(LDFALGS)

$(EXE2): $(OBJC2)
	$(CC) $(CFALGS)  -o $@ $^ $(LDFALGS)

$(EXE3): $(OBJC3)
	$(CC) $(CFALGS) -o $@  $^ $(LDFALGS)

$(EXE4): $(OBJC4)
	$(CC) $(CFALGS) -o $@  $^ $(LDFALGS)

$(EXE5): $(OBJC5)
	$(CC) $(CFALGS) -o $@  $^ $(LDFALGS)

$(EXE6): $(OBJC6)
	$(CC) $(CFALGS) -o $@  $^ $(LDFALGS)

$(EXE7): $(OBJC7)
	$(CC) $(CFALGS) -o $@  $^ $(LDFALGS)



# Compiler Source Files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean Files 
clean:
	rm -rfv $(EXE) $(OBJC) $(EXE1) $(OBJC1)  $(EXE2) $(OBJC2)  $(EXE3) $(OBJC3) $(EXE4) $(OBJC4)  $(EXE5) $(OBJC5)  $(EXE6) $(OBJC6) $(EXE7) $(OBJC7)








