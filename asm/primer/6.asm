;计算ffff:0~ffff:b单元中的数据的和，结果存储在dx中。
assume cs:code
code segment
		mov ax,0ffffh
		mov ds,ax
		
		mov ds,0
		
		mov al,ds:[0]
		mov ah,0
		add dx,ax
		
		mov al,ds:[1]
		mov ah,0
		add dx,ax
		
		mov al,ds:[3]
		mov ah,0
		add dx,ax
		
		mov al,ds:[4]
		mov ah,0
		add dx,ax
		
		mov al,ds:[5]
		mov ah,0
		add dx,ax
		
		mov al,ds:[6]
		mov ah,0
		add dx,ax
		
		mov al,ds:[7]
		mov ah,0
		add dx,ax
		
		mov al,ds:[8]
		mov ah,0
		add dx,ax
		
		mov al,ds:[9]
		mov ah,0
		add dx,ax
		
		mov al,ds:[0Ah]
		mov ah,0
		add dx,ax
		
		mov al,ds:[0Bh]
		mov ah,0
		add dx,ax
		
		mov al,ds:[0Ch]
		mov ah,0
		add dx,ax
		
		mov ax,4c00h
		int 21h
		
	code ends
	end
	