; La funci�n IsValidAssembly() se debe implementar en ensamblador en el fichero Assembly-code.asm y 
; debe retornar 1 si estas dos condiciones sobre los n�meros le�dos de la terminal son ciertas y 0 en caso contrario:

; El resultado de la operaci�n XOR entre el segundo y el tercer n�mero es igual a 303157 (4 A035).
; El valor de los 8 bits m�s bajos del primer n�mero interpretados en binario natural es mayor que 176 (B0).


.386
.model flat, C

.code

; Complete the procedure

IsValidAssembly PROC, num1: DWORD, num2:DWORD, num3:DWORD

mov eax, num1
mov ebx, num2
mov ecx, num3

xor ebx,ecx ; funcion xor con b y c

mov edx,000B0h ; en edx esta 176
mov esi,4A035h ; en esi esta 303157

cmp al,dl   ; compara los 8 bits de a y 176
jg continuar
jmp invalido

continuar:
xor ebx, ecx ; xor de b y c
cmp ebx, esi ; compara el resultado de la anterior xor con 303157
je correcto
jmp invalido

invalido:
push 0 
pop eax
ret         ; retorna 0 si llega a invalido. LLega si no se cumple una de las condiciones

correcto:
push 1
pop eax 
ret         ; retorna 1 si llega a correcto. LLega si cumple las 2 condiciones.

IsValidAssembly ENDP

END