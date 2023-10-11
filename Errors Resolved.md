sas@sas-virtual-machine:~/Valgrind_Exercise$ cmake -S ./ -B build/
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/sas/Valgrind_Exercise/build
sas@sas-virtual-machine:~/Valgrind_Exercise$ cmake --build build/ --clean-first
[ 33%] Building CXX object app/CMakeFiles/shell-app.dir/AnalogSensor.cpp.o
[ 66%] Building CXX object app/CMakeFiles/shell-app.dir/main.cpp.o
[100%] Linking CXX executable shell-app
[100%] Built target shell-app
sas@sas-virtual-machine:~/Valgrind_Exercise$ valgrind --leak-check=yes ./build/app/shell-app -s
==17878== Memcheck, a memory error detector
==17878== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17878== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==17878== Command: ./build/app/shell-app -s
==17878== 
Averaged sensor reading: 10
DONE
==17878== 
==17878== HEAP SUMMARY:
==17878==     in use at exit: 0 bytes in 0 blocks
==17878==   total heap usage: 3 allocs, 3 frees, 73,748 bytes allocated
==17878== 
==17878== All heap blocks were freed -- no leaks are possible
==17878== 
==17878== For lists of detected and suppressed errors, rerun with: -s
==17878== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

