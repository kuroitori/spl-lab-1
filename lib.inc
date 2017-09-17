section .text

string_length:
    mov rax, rdi                    ;rdi - pointer to a string
    xor rcx, rcx                    ;rcx = 0
    .loop:
        mov rax, [rdi + rcx]
        inc rcx;
        test al, 0xff               ;logic AND with the last word
        jnz .loop
    dec rcx
    mov rax, rcx
    ret

;print_string:
;    xor rax, rax
;    ret


;print_char:
;    xor rax, rax
;    ret

;print_newline:
;    xor rax, rax
;    ret


;print_uint:
;    xor rax, rax
;    ret


;print_int:
;    xor rax, rax
;    ret

;string_equals:
;    xor rax, rax
;    ret


;read_char:
;    xor rax, rax
;    ret

;read_word:
;    ret

; rdi points to a string
; returns rax: number, rdx : length
;arse_uint:
;    xor rax, rax
;    ret

; rdi points to a string
; returns rax: number, rdx : length
;parse_int:
;    xor rax, rax
;    ret


;string_copy:
;    ret
