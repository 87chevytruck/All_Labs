;  Ricky Smith
;  Assembly Exam
;  7 Nov 2018


bits 32

section .text

global _movememory

; This task is similar to memcopy but with one important exception: it must 
; be able to handle overlapped memory copies (just like memmove). That is to say, it has to be able
; to perform a copy where the source and destination overlap. This means that the copy either needs
; to happen in reverse, or a buffer must be used.
;
; void __cdecl movememory(void* dest, void* src, size_t length)
_movememory:
	push ebp
	mov ebp, esp

	push edi
	push esi
	push ebx

	mov edi, [ebp+0x8]	;dest
	mov esi, [ebp+0xc]	;src
	mov ecx, [ebp+0x10]	;length

	;// code begin //
	;int3
	
	    
    mov eax, edi		    ;Preserve destination 

    
    cmp edi, esi
    je .done				;If dest == src, do nothing
    jb .easyWay				;If dest < src, jump to .easyWay

    .hardWay:				;If dest > src and dest < src+num, right-to-left move to preserve overlapping data
	    std					;Set the direction flag so copying is right-to-left
		mov edx, ecx		;Set the move count register
        
        dec edx				;decrease count by one
        add esi, edx		;Update pointers to the right-hand side (minus one)
        add edi, edx		;Update pointers to the right-hand side (minus one)

        rep movsb			;Do a byte-by-byte move

        cld					;Reset the direction flag

        jmp .done

    .easyWay:
        rep movsb			;Do a byte-by-byte move

    .done:
	

	;//  code end  //

	pop edi
	pop esi
	pop ebx

	mov esp, ebp
	pop ebp

	ret