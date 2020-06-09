	.file	"getopt_exp.c"
	.section	.rodata
	.align 8
.LC0:
	.string	"option = a,optopt = %c,optarg = %s\n"
	.align 8
.LC1:
	.string	"option = b,optopt = %c,optarg = %s\n"
	.align 8
.LC2:
	.string	"option = c, optopt = %c,optarg = %s\n"
	.align 8
.LC3:
	.string	"result = ?,optopt = %c,optarg = %s\n"
.LC4:
	.string	"default,result = %c\n"
.LC5:
	.string	"argv[%d] = %s\n"
.LC6:
	.string	"ab:c::"
.LC7:
	.string	"result = %d,optind = %d\n"
	.align 8
.LC8:
	.string	"___________________argv[%d] = %s\n"
	.align 8
.LC9:
	.string	"at the end -------------argv[%d] = %s\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$0, opterr(%rip)
	jmp	.L2
.L10:
	movl	-4(%rbp), %eax
	cmpl	$97, %eax
	je	.L4
	cmpl	$97, %eax
	jg	.L5
	cmpl	$63, %eax
	je	.L6
	jmp	.L3
.L5:
	cmpl	$98, %eax
	je	.L7
	cmpl	$99, %eax
	je	.L8
	jmp	.L3
.L4:
	movq	optarg(%rip), %rdx
	movl	optopt(%rip), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	jmp	.L9
.L7:
	movq	optarg(%rip), %rdx
	movl	optopt(%rip), %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	jmp	.L9
.L8:
	movq	optarg(%rip), %rdx
	movl	optopt(%rip), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	jmp	.L9
.L6:
	movq	optarg(%rip), %rdx
	movl	optopt(%rip), %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	jmp	.L9
.L3:
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	nop
.L9:
	movl	optind(%rip), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	optind(%rip), %eax
	movl	%eax, %esi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
.L2:
	movq	-32(%rbp), %rcx
	movl	-20(%rbp), %eax
	movl	$.LC6, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	getopt
	movl	%eax, -4(%rbp)
	cmpl	$-1, -4(%rbp)
	jne	.L10
	movl	optind(%rip), %eax
	movl	%eax, %esi
	movl	$.LC7, %edi
	movl	$0, %eax
	call	printf
	movl	optind(%rip), %eax
	movl	%eax, -4(%rbp)
	jmp	.L11
.L12:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -4(%rbp)
.L11:
	movl	-4(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L12
	movl	$1, -4(%rbp)
	jmp	.L13
.L14:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC9, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -4(%rbp)
.L13:
	movl	-4(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L14
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-39)"
	.section	.note.GNU-stack,"",@progbits
