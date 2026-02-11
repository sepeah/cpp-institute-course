	.file	"speedtest.cpp"
	.text
	.section	.text$_ZNKSt5ctypeIcE8do_widenEc,"x"
	.linkonce discard
	.align 2
	.p2align 4
	.globl	_ZNKSt5ctypeIcE8do_widenEc
	.def	_ZNKSt5ctypeIcE8do_widenEc;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt5ctypeIcE8do_widenEc
_ZNKSt5ctypeIcE8do_widenEc:
.LFB1962:
	.seh_endprologue
	movl	%edx, %eax
	ret
	.seh_endproc
	.text
	.p2align 4
	.def	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0;	.scl	3;	.type	32;	.endef
	.seh_proc	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0:
.LFB3146:
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	(%rcx), %rax
	movq	-24(%rax), %rax
	movq	%rcx, %rbx
	movq	240(%rcx,%rax), %rcx
	testq	%rcx, %rcx
	je	.L8
	cmpb	$0, 56(%rcx)
	je	.L5
	movsbl	67(%rcx), %edx
.L6:
	movq	%rbx, %rcx
	call	_ZNSo3putEc
	movq	%rax, %rcx
	addq	$48, %rsp
	popq	%rbx
	jmp	_ZNSo5flushEv
.L5:
	movq	%rcx, 40(%rsp)
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	movq	40(%rsp), %rcx
	movl	$10, %edx
	leaq	_ZNKSt5ctypeIcE8do_widenEc(%rip), %r8
	movq	(%rcx), %rax
	movq	48(%rax), %rax
	cmpq	%r8, %rax
	je	.L6
	movl	$10, %edx
	call	*%rax
	movsbl	%al, %edx
	jmp	.L6
.L8:
	call	_ZSt16__throw_bad_castv
	nop
	.seh_endproc
	.p2align 4
	.globl	_Z9function1i
	.def	_Z9function1i;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z9function1i
_Z9function1i:
.LFB2554:
	.seh_endprologue
	leal	45(%rcx), %eax
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "result:\0"
.LC1:
	.ascii "Function took: \0"
.LC2:
	.ascii " microseconds\0"
	.align 8
.LC3:
	.ascii "Without function calls the calculation took: \0"
	.section	.text.startup,"x"
	.p2align 4
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2555:
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	call	_ZNSt6chrono3_V212system_clock3nowEv
	movq	.refptr._ZSt4cout(%rip), %rbx
	movl	$7, %r8d
	leaq	.LC0(%rip), %rdx
	movq	%rax, %rsi
	movq	%rbx, %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movl	$11250002, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	call	_ZNSt6chrono3_V212system_clock3nowEv
	movl	$15, %r8d
	subq	%rsi, %rax
	movabsq	$2361183241434822607, %rsi
	movq	%rax, %rcx
	imulq	%rsi
	sarq	$63, %rcx
	sarq	$7, %rdx
	movq	%rdx, %rdi
	leaq	.LC1(%rip), %rdx
	subq	%rcx, %rdi
	movq	%rbx, %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movq	%rdi, %rdx
	movq	%rbx, %rcx
	call	_ZNSo9_M_insertIxEERSoT_
	movl	$13, %r8d
	leaq	.LC2(%rip), %rdx
	movq	%rax, %rdi
	movq	%rax, %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movq	%rdi, %rcx
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	call	_ZNSt6chrono3_V212system_clock3nowEv
	movl	$7, %r8d
	movq	%rbx, %rcx
	leaq	.LC0(%rip), %rdx
	movq	%rax, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movl	$11250002, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	call	_ZNSt6chrono3_V212system_clock3nowEv
	movl	$45, %r8d
	subq	%rdi, %rax
	movq	%rax, %rcx
	imulq	%rsi
	sarq	$63, %rcx
	movq	%rdx, %rsi
	leaq	.LC3(%rip), %rdx
	sarq	$7, %rsi
	subq	%rcx, %rsi
	movq	%rbx, %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movq	%rsi, %rdx
	movq	%rbx, %rcx
	call	_ZNSo9_M_insertIxEERSoT_
	movl	$13, %r8d
	leaq	.LC2(%rip), %rdx
	movq	%rax, %rbx
	movq	%rax, %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movq	%rbx, %rcx
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev9, Built by MSYS2 project) 15.2.0"
	.def	_ZNSo3putEc;	.scl	2;	.type	32;	.endef
	.def	_ZNSo5flushEv;	.scl	2;	.type	32;	.endef
	.def	_ZNKSt5ctypeIcE13_M_widen_initEv;	.scl	2;	.type	32;	.endef
	.def	_ZSt16__throw_bad_castv;	.scl	2;	.type	32;	.endef
	.def	_ZNSt6chrono3_V212system_clock3nowEv;	.scl	2;	.type	32;	.endef
	.def	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZNSo9_M_insertIxEERSoT_;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.p2align	3, 0
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
