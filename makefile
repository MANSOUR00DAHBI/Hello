.PHONY: all clean 
# Name My Program
EXE=  debug/Setup.exe
EXE1= debug/blank.exe
EXE2= debug/R_E_S.exe
EXE3= debug/WPL.exe
EXE4= debug/Hits.exe
EXE5= debug/Ch_Hex.exe
EXE6= debug/dcinput.exe
EXE7= debug/long_le.exe

# ALL OBJC Files
OBJC=  build/hello.o
OBJC1= build/blanks.o
OBJC2= build/R_EACH_S.o
OBJC3= build/w_p_l.o
OBJC4= build/histogram.o
OBJC5= build/Ch_Hex.o
OBJC6= build/d_c_input.o
OBJC7= build/line_h.o

# Compiler
CC= gcc 

CFALGS= -Wall -Wextra -g

# Links flags
LDFALGS= -lm 

# Default Target 
all: $(EXE) $(EXE1)  $(EXE2) $(EXE3) $(EXE4)  $(EXE5) $(EXE6) $(EXE7)

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








