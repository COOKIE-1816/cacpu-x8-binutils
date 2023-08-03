#org 0x8000

LDI 0xfe
STA 0xffff

start:	LDI <string
		PHS
        LDI >string
		PHS

		JPS PrintText

		PLS PLS
        JPA start

string: 'Hello, World!', 10, 0

ptr: 0x0000

PrintText:	LDS 3
			STA ptr+1
            LDS 4
			STA ptr+0

loop:	    LDR ptr
			CPI 0

			BEQ exit

            OUT
				NOP NOP NOP NOP
				NOP NOP NOP NOP

			INW ptr
            
            JPA loop
exit:	  	RTS

#org 0x8000