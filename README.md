
## About GP 2

GP 2 (Graph Programs 2) is a rule-based, nondeterministic programming language for solving graph problems at a high level of abstraction, freeing programmers from handling low-level data structures. The core of GP 2 consists of four constructs: single-step application of a set of conditional graph-transformation rules, sequential composition, branching and iteration. The language has a small structural operational semantics and a visual editor for writing GP 2 programs, running them, and tracing their execution.

## Probabilistic GP 2

Probabilistic GP 2 is an extension of GP 2 that allows the programmer to specify that certain rule-sets should be executed probabilistically. This may be helpful when correctness of a graph program cannot be shown through conventional confluence analysis. It also allows the design of probabilistic graph programs such as randomized algorithms and meta-heuristics.

You can read about P-GP 2 in our paper at ICGT 2018:

[Probabilistic Graph Programs for Randomized and Evolutionary Algorithms](https://link.springer.com/chapter/10.1007%2F978-3-319-92991-0_5). 

In it we describe the syntax of P-GP 2 and 3 motivating case studies taking from graph theory and meta-heuristics.

## The GP 2 Compiler

The GP 2 compiler translates a GP 2 program into executable C code. The generated code is executable with the support of the GP 2 library.

Default usage: gp2 [-c] [-d] [-l <rootdir>] [-o <outdir>] [-m <program name>] <gp2-program_file>

Compiles _gp2-program_ into C code. The generated code is placed in _/tmp/gp2_ unless an alternate location is specified with the -o flag.

To execute the generated code, run make and ./gp2run <host-graph-file> from _/tmp/gp2_.

If GP 2 is installed in a non-standard directory, use the -L option to ensure the generated code can be compiled and executed. See Installation for more information.

Options:

-c - Enable graph copying.

-d - Compile program with GCC debugging flags.

-l - Specify root directory of installed files.

-o - Specify directory for generated code and program output.

-o - Specify a program name. If this argument is supplied, all variable names will be prefixed with the given name and, instead of a executable program, a library will be generated where a apply_[program name] function can be used to apply the program to a GP 2 host graph. Helpful for intergrating a program with other c code.

The compiler can also be used to validate GP 2 source files.

Run gp2 -p <program_file> to validate a program.

Run gp2 -r <rule_file> to validate a rule.

Run gp2 -h <host_file> to validate a host graph.


## Build

Build a GP 2 distribution as follows:

1. (First build only) run *autoreconf -i*.

2. Run *autoconf -i*.

3. Run *automake -a*.

4. Run *./configure*.

5. Run *make dist*.

This will generate a distribution zip (default name: gp2-1.0.tar.gz) which will contain a GP 2 distribution ready to install.

## Installation

Superusers install a GP 2 disribution as follows:

1.  Run *./configure* from the distribution's top-level directory to generate config.h and Makefile.

2.  Run *make*.

3.  Run *sudo make install*.

This command will install files into the following directories: * /usr/local/bin * /usr/local/lib * /usr/local/include

If you are not a superuser, install GP 2 locally as follows:

1.  Run *./configure --prefix={dest-dir}* from the distribution's top-level directory.

2.  Run *make*.

3.  Run *make install*.

This command will install files into the following directories: * {dest-dir}/bin * {dest-dir}/lib * {dest-dir}/include

Call the compiler with -l {dest-dir} to ensure that the generated code compiles.

### Authors

The GP 2 language was designed by Detlef Plump.

The GP 2 compiler and runtime library was developed by Christopher Bak.

The Probabilistic GP 2 extension was developed by Timothy Atkinson.
