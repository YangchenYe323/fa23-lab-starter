.globl f # this allows other files to find the function f

# f takes in two arguments:
# a0 is the value we want to evaluate f at
# a1 is the address of the "output" array (defined above).
# The return value should be stored in a0
f:
    # index in the output array
    addi a0 a0 3
    li t1 4
    # address offset from array start
    mul a0 a0 t1
    # address of the value
    add a1 a1 a0
    # read value from memory
    lw a0 0(a1)

    # This is how you return from a function. You'll learn more about this later.
    # This should be the last line in your program.
    jr ra
