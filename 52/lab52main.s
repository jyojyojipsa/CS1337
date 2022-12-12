	.file	"lab52main.C"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	"Before:  "
.LC1:
	.string	" After:  "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1492:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1492
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSsC1Ev
.LEHE0:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
.LEHB1:
	call	_ZNSsC1Ev
.LEHE1:
.L3:
	leaq	-40(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
.LEHB2:
	call	_ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_E
	movq	(%rax), %rdx
	subq	$24, %rdx
	movq	(%rdx), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
	testb	%al, %al
	je	.L2
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	leaq	-40(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-40(%rbp), %rdx
	leaq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSsC1ERKSs
.LEHE2:
	leaq	-32(%rbp), %rax
	leaq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB3:
	call	_Z16removeWhitespaceSs
.LEHE3:
	leaq	-32(%rbp), %rdx
	leaq	-48(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB4:
	call	_ZNSsaSEOSs
.LEHE4:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	leaq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
.LEHB5:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	leaq	-48(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE5:
	jmp	.L3
.L2:
	movl	$0, %ebx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	movl	%ebx, %eax
	jmp	.L13
.L12:
	movq	%rax, %rbx
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	jmp	.L6
.L11:
	movq	%rax, %rbx
.L6:
	leaq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	jmp	.L7
.L10:
	movq	%rax, %rbx
.L7:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	jmp	.L8
.L9:
	movq	%rax, %rbx
.L8:
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB6:
	call	_Unwind_Resume
.LEHE6:
.L13:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1492:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1492:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1492-.LLSDACSB1492
.LLSDACSB1492:
	.uleb128 .LEHB0-.LFB1492
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1492
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L9-.LFB1492
	.uleb128 0
	.uleb128 .LEHB2-.LFB1492
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L10-.LFB1492
	.uleb128 0
	.uleb128 .LEHB3-.LFB1492
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L11-.LFB1492
	.uleb128 0
	.uleb128 .LEHB4-.LFB1492
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L12-.LFB1492
	.uleb128 0
	.uleb128 .LEHB5-.LFB1492
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L10-.LFB1492
	.uleb128 0
	.uleb128 .LEHB6-.LFB1492
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
.LLSDACSE1492:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1919:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L16
	cmpl	$65535, -8(%rbp)
	jne	.L16
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L16:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1919:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1920:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1920:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 7.3.1 20180303 (Red Hat 7.3.1-5)"
	.section	.note.GNU-stack,"",@progbits
