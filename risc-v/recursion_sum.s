	.file	"recursion_sum.c"
	.option nopic
	.text
	.align	2
	.globl	sum
	.type	sum, @function
sum:
	add	sp,sp,-32
	sw	ra,28(sp)
	sw	s0,24(sp)
	add	s0,sp,32
	sw	a0,-24(s0)
	sw	a1,-20(s0)
	sw	a2,-32(s0)
	sw	a3,-28(s0)
	lw	a5,-20(s0)
	bgtz	a5,.L5
	lw	a5,-20(s0)
	bnez	a5,.L2
	lw	a5,-24(s0)
	beqz	a5,.L2
.L5:
	lw	a5,-24(s0)
	lw	a6,-20(s0)
	li	a1,-1
	li	a2,-1
	add	a3,a5,a1
	mv	a0,a3
	sltu	a0,a0,a5
	add	a4,a6,a2
	add	a5,a0,a4
	mv	a4,a5
	mv	t1,a3
	mv	t2,a4
	lw	a5,-32(s0)
	lw	a6,-28(s0)
	lw	a1,-24(s0)
	lw	a2,-20(s0)
	add	a3,a5,a1
	mv	a0,a3
	sltu	a0,a0,a5
	add	a4,a6,a2
	add	a5,a0,a4
	mv	a4,a5
	mv	a5,a3
	mv	a6,a4
	mv	a2,a5
	mv	a3,a6
	mv	a0,t1
	mv	a1,t2
	call	sum
	mv	a5,a0
	mv	a6,a1
	j	.L4
.L2:
	lw	a5,-32(s0)
	lw	a6,-28(s0)
.L4:
	mv	a0,a5
	mv	a1,a6
	lw	ra,28(sp)
	lw	s0,24(sp)
	add	sp,sp,32
	jr	ra
	.size	sum, .-sum
	.align	2
	.globl	main
	.type	main, @function
main:
	add	sp,sp,-16
	sw	s0,12(sp)
	add	s0,sp,16
	li	a5,0
	mv	a0,a5
	lw	s0,12(sp)
	add	sp,sp,16
	jr	ra
	.size	main, .-main
	.ident	"GCC: (GNU) 7.3.0"
