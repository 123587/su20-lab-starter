.globl factorial

.data
n: .word 7

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
    li t1, 2
    blt a0, t1, exit #
    addi sp, sp, -8
    sw ra, 0(sp)
    sw a0, 4(sp)
    addi a0, a0, -1
    jal ra, factorial
    add t0, x0, a0
    lw ra, 0(sp)
    lw a0, 4(sp)
    addi sp, sp, 8
    mul a0, a0, t0
exit:
    jr ra
    
