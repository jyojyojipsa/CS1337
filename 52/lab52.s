	.file	"lab52.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.text
	.globl	_Z16removeWhitespaceSs
	.type	_Z16removeWhitespaceSs, @function
_Z16removeWhitespaceSs:
.LFB983:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	$0, -16(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSs5beginEv
	movq	%rax, -16(%rbp)
.L5:
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSs3endEv
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxxltIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_
	testb	%al, %al
	je	.L2
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	isspace
	testl	%eax, %eax
	setne	%al
	testb	%al, %al
	je	.L3
	movq	-16(%rbp), %rdx
	movq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSs5eraseEN9__gnu_cxx17__normal_iteratorIPcSsEE
	jmp	.L5
.L3:
	leaq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEi
	jmp	.L5
.L2:
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSsC1EOSs
	movq	-24(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE983:
	.size	_Z16removeWhitespaceSs, .-_Z16removeWhitespaceSs
	.section	.text._ZN9__gnu_cxxltIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_,"axG",@progbits,_ZN9__gnu_cxxltIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_,comdat
	.weak	_ZN9__gnu_cxxltIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_
	.type	_ZN9__gnu_cxxltIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_, @function
_ZN9__gnu_cxxltIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_:
.LFB1225:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv
	movq	(%rax), %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv
	movq	(%rax), %rax
	cmpq	%rax, %rbx
	setb	%al
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1225:
	.size	_ZN9__gnu_cxxltIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_, .-_ZN9__gnu_cxxltIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv:
.LFB1226:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1226:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv, .-_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIPcSsEppEi,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEi,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEi
	.type	_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEi, @function
_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEi:
.LFB1228:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	leaq	1(%rax), %rcx
	movq	-24(%rbp), %rdx
	movq	%rcx, (%rdx)
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIPcSsEC1ERKS1_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1228:
	.size	_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEi, .-_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEi
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIPcSsEC2ERKS1_,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIPcSsEC5ERKS1_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIPcSsEC2ERKS1_
	.type	_ZN9__gnu_cxx17__normal_iteratorIPcSsEC2ERKS1_, @function
_ZN9__gnu_cxx17__normal_iteratorIPcSsEC2ERKS1_:
.LFB1309:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1309:
	.size	_ZN9__gnu_cxx17__normal_iteratorIPcSsEC2ERKS1_, .-_ZN9__gnu_cxx17__normal_iteratorIPcSsEC2ERKS1_
	.weak	_ZN9__gnu_cxx17__normal_iteratorIPcSsEC1ERKS1_
	.set	_ZN9__gnu_cxx17__normal_iteratorIPcSsEC1ERKS1_,_ZN9__gnu_cxx17__normal_iteratorIPcSsEC2ERKS1_
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv:
.LFB1312:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1312:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv, .-_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv
	.ident	"GCC: (GNU) 7.3.1 20180303 (Red Hat 7.3.1-5)"
	.section	.note.GNU-stack,"",@progbits
