asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_0803a3b8 \n\
/* 0803a3b8 */ LDR R1, =D_030055d0 \n\
/* 0803a3ba */ LDR R1, [R1] \n\
/* 0803a3bc */ STRB R0, [R1, 0x10] \n\
/* 0803a3be */ BX LR \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
