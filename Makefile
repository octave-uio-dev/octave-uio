.PHONY: check clean

TARGETS = uio.oct
CXXFLAGS = `pkg-config --cflags RapidJSON`

#all: $(TARGETS)

check: uio.oct
	octave --no-gui --eval "uio()"

uio.oct: uio.cc
	mkoctfile -Wall -Wextra $(CXXFLAGS) $<

clean:
	rm -f octave-workspace $(TARGETS) *.o
