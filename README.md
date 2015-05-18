#GNU Prolog "libuuid" extension

Simple extension to create three new predicates within a GNU Prolog
executable :-

    uuid_generate(X).
    uuid_generate_upper(X).
    uuid_generate_lower(X).

The variable X MUST be uninstantiated and on return will have been
unified with a "codes" PlTerm type i.e. it contains a string of
characters that could be used with the "~s" format specifier to
produce the familiar string UUID we know and love.
 
#Building it.

## Pre-requisites

First of all you MUST have installed libuuid for your platform so that
the C compiler can pick it up. If you have issues then refer to the
"gplc" options to point the compiler to the right place.

The gplc command is:
 
     gplc -L -luuid libuuid.c libuuid.pl -o fred
 
Where "fred" is the name of the GNU Prolog executable that now
contains this extension. Call it what you need.

Should you require more API coverage from libuuid and are not sure how
to do it, drop me an email and I will see what I can do.


